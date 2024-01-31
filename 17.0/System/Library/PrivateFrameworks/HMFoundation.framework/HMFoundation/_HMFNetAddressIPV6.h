@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {
    struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } _in6;
}

- (id)init;
- (unsigned long long)hash;
- (id)addressString;
- (unsigned long long)addressFamily;
- (BOOL)isEqual:(id)a0;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

@end
