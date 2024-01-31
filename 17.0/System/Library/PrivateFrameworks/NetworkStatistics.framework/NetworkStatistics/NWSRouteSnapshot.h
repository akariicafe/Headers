@class NSData;

@interface NWSRouteSnapshot : NWSSnapshot {
    NSData *_destination;
    NSData *_mask;
    NSData *_gateway;
    struct nstat_route_descriptor { unsigned long long id; unsigned long long parent_id; unsigned long long gateway_id; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; } dst; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; } mask; union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; } gateway; unsigned int ifindex; unsigned int flags; unsigned char reserved[4]; } _descriptor;
}

@property (readonly) unsigned long long routeID;
@property (readonly) unsigned long long parentID;
@property (readonly) unsigned long long gatewayID;
@property (readonly) NSData *destination;
@property (readonly) NSData *mask;
@property (readonly) NSData *gateway;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) unsigned int flags;
@property (readonly) double rttMinimum;
@property (readonly) double rttAverage;
@property (readonly) double rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int txRetransmittedBytes;
@property (readonly) unsigned int connectAttempts;
@property (readonly) unsigned int connectSuccesses;

- (id)traditionalDictionary;
- (void)_initWithDescriptor:(struct nstat_route_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x3; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x5; unsigned int x6; unsigned int x7; unsigned char x8[4]; } *)a0;
- (id)initWithCounts:(const struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } *)a0 routeDescriptor:(struct nstat_route_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x3; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x4; union { struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x0; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x1; struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x2; } x5; unsigned int x6; unsigned int x7; unsigned char x8[4]; } *)a1 sourceIdent:(unsigned long long)a2 seqno:(unsigned long long)a3;
- (id)description;
- (void).cxx_destruct;

@end
