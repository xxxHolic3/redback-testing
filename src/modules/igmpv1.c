/* vim: set ts=2 et sw=2 : */
/** @file igmpv1.c */
/*
 *  T50 - Experimental Mixed Packet Injector
 *
 *  Copyright (C) 2010 - 2015 - T50 developers
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stddef.h>
#include <assert.h>
#include <linux/ip.h>
#include <linux/igmp.h>
#include <t50_defines.h>
#include <t50_config.h>
#include <t50_cksum.h>
#include <t50_memalloc.h>
#include <t50_modules.h>
#include <t50_randomizer.h>

/**
 * IGMPv1 packet header configuration.
 *
 * This function configures and sends the IGMPv1 packet header.
 *
 * @param co Pointer to T50 configuration structure.
 * @param size Pointer to packet size (updated by the function).
 */
void igmpv1 ( const config_options_T *const restrict co, uint32_t *restrict size )
{
  uint32_t length;
  struct iphdr *ip;

  /* IGMPv1 header. */
  struct igmphdr *igmpv1;

  assert ( co != NULL );

  /* GRE options size. */
  length = gre_opt_len ( co );

  /* Packet size. */
  *size = sizeof ( struct iphdr )   +
          sizeof ( struct igmphdr ) +
          length;

  /* Try to reallocate packet, if necessary */
  alloc_packet ( *size );

  /* IP Header structure making a pointer to Packet. */
  ip = ip_header ( packet, *size, co );

  /* GRE Encapsulation takes place. */
  gre_encapsulation ( packet, co,
                      sizeof ( struct iphdr ) +
                      sizeof ( struct igmphdr ) );

  /* IGMPv1 Header structure making a pointer to Packet. */
  igmpv1        = ( struct igmphdr * ) ( ( unsigned char * ) ( ip + 1 ) + length );
  igmpv1->type  = co->igmp.type;
  igmpv1->code  = co->igmp.code;
  igmpv1->group = INADDR_RND ( co->igmp.group );
  igmpv1->csum  = 0;  /* Needed 'cause cksum() call, below! */

  /* Computing the checksum. */
  igmpv1->csum  = co->bogus_csum ? RANDOM() : htons ( cksum ( igmpv1, sizeof ( struct igmphdr ) ) );

  /* GRE Encapsulation takes place. */
  gre_checksum ( packet, co, *size );
}
