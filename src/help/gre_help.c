/* vim: set ts=2 et sw=2 : */
/** @file gre_help.c */
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

#include <stdio.h>
#include <t50_modules.h>

/** GRE options help. */
void gre_help ( void )
{
  puts ( "GRE Options:\n"
         "    --gre-seq-present         GRE sequence # present           (default OFF)\n"
         "    --gre-key-present         GRE key present                  (default OFF)\n"
         "    --gre-sum-present         GRE checksum present             (default OFF)\n"
         "    --gre-key NUM             GRE key                          (default RANDOM)\n"
         "    --gre-sequence NUM        GRE sequence #                   (default RANDOM)\n"
         "    --gre-saddr ADDR          GRE IP source IP address         (default RANDOM)\n"
         "    --gre-daddr ADDR          GRE IP destination IP address    (default RANDOM)\n" );
}

