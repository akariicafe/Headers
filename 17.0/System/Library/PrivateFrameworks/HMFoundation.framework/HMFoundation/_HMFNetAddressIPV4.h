@interface _HMFNetAddressIPV4 : HMFNetAddressInternal {
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } _in;
}

- (id)init;
- (unsigned long long)hash;
- (id)addressString;
- (unsigned long long)addressFamily;
- (BOOL)isEqual:(id)a0;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

@end
