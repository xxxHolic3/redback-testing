Home {#mainpage}
====
<pre>
      __________ ________  _____
     |__    ___/|   ____/ /  _  \ the fastest packet injector.
       |    |   |____  \ /  /_\  \
       |    |   /       \\\  \\_/   \
       |____|  /________/ \\_______/
</pre>

T50 (f.k.a. F22 Raptor) is a tool designed to perform "Stress Testing".
The concept started on 2001, right after release 'nb-isakmp.c', and
the main goal was:
  - Having a tool to perform TCP/IP protocol fuzzer,  covering common regular
    protocols, such as: ICMP, TCP and UDP.

Things  have  changed,  and the  T50 became a good unique resource capable to
perform "Stress Testing". And, after checking the "/usr/include/linux",  some
protocols were chosen to be part of its coverage:
  a) ICMP   - Internet Control Message Protocol
  b) IGMP   - Internet Group Management Protocol
  c) TCP    - Transmission Control Protocol
  d) UDP    - User Datagram Protocol

Why "Stress Testing"?  Well, because when people are  designing a new network
infra-structure (eg. Datacenter serving to Cloud Computing) they think about:
  a) High-Availability
  b) Load Balancing
  c) Backup Sites (Cold Sites, Hot Sites, and Warm Sites)
  d) Disaster Recovery
  e) Data Redundancy
  f) Service Level Agreements
  g) Etc...

But almost nobody thinks about "Stress Testing", or even performs any test to
check how the networks infra-structure behaves under stress,  under overload,
and under attack.  Even during a Penetration Test,  people prefer not running
any kind of Denial-of-Service testing.  Even worse,  those people are missing
one of the three key concepts of security that are common to risk management:
  - Confidentiality
  - Integrity
  - AVAILABILITY

T50 was designed to perform “Stress Testing”  on a variety of infra-structure
network devices (Version 2.45), using widely implemented protocols, and after
some requests it was was re-designed to extend the tests (as of Version 5.3),
covering some regular protocols (ICMP,  TCP  and  UDP),  some infra-structure
specific protocols (GRE,  IPSec  and  RSVP), and some routing protocols (RIP,
EIGRP and OSPF).

This new version (Version 5.3) is focused on internal infra-structure,  which
allows people to test the availability of its resources, and cobering:
  a) Interior Gateway Protocols (Distance Vector Algorithm):
     1. Routing Information Protocol (RIP)
     2. Enhanced Interior Gateway Routing Protocol (EIGRP)

  b) Interior Gateway Protocols (Link State Algorithm):
     1. Open Shortest Path First (OSPF)

  c) Quality-of-Service Protocols:
     1. Resource ReSerVation Protocol (RSVP).

  d) Tunneling/Encapsulation Protocols:
     1. Generic Routing Encapsulation (GRE).

T50 is a powerful and unique packet injector tool, which is capable to:
  a) Send sequentially the following fifteen (15) protocols:
     1. ICMP   - Internet Control Message Protocol
     2. IGMPv1 - Internet Group Management Protocol v1
     3. IGMPv3 - Internet Group Management Protocol v3
     4. TCP    - Transmission Control Protocol
     5. EGP    - Exterior Gateway Protocol
     6. UDP    - User Datagram Protocol
     7. RIPv1  - Routing Information Protocol v1
     8. RIPv2  - Routing Information Protocol v2
     9. DCCP   - Datagram Congestion Control Protocol
    10. RSVP   - Resource ReSerVation Protocol
    11. GRE    - Generic Routing Encapsulation
    12. IPSec  - Internet Protocol Security (AH/ESP)
    13. EIGRP  - Enhanced Interior Gateway Routing Protocol
    14. OSPF   - Open Shortest Path First

  b) It is the only tool capable to encapsulate the protocols  (listed above)
     within Generic Routing Encapsulation (GRE).

  c) Send an (quite) incredible amount of  packets per second,  making  it  a
     "second to none" tool:
    -> More than 1,000,000 pps of SYN Flood  (+50% of the network uplink)  in
       a 1000BASE-T Network (Gigabit Ethernet).
    -> More than 120,000 pps of SYN Flood  (+60% of the network uplink)  in a
       100BASE-TX Network (Fast Ethernet).

  d) Perform "Stress Testing" on a variety of network infrastructure, network
     devices and security solutions in place.

  e) Simulate "Distributed Denial-of-Service" & "Denial-of-Service"  attacks,
     validating Firewall rules,  Router ACLs,  Intrusion Detection System and
     Intrusion Prevention System policies.

The main differentiator of the T50 is that it is able to send  all protocols,
sequentially,  using one single SOCKET,   besides it is capable to be used to
modify network routes,  letting IT Security Professionals performing advanced
"Penetration Test".
