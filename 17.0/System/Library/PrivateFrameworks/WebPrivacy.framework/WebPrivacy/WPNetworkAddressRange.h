@class NSString;

@interface WPNetworkAddressRange : NSObject {
    struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } _address;
    unsigned long long _netMaskLength;
    NSString *_owner;
    NSString *_host;
}

@property (readonly, nonatomic) unsigned long long _addressLength;
@property (readonly, nonatomic) void *_addressPointer;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *address;
@property (readonly, nonatomic) unsigned long long netMaskLength;
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) NSString *host;

- (id)init;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddress:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)a0 netMaskLength:(unsigned long long)a1 owner:(id)a2 host:(id)a3;

@end
