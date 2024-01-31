@class NSString, HMFNetAddressInternal;

@interface HMFNetAddress : HMFObject

@property (readonly, nonatomic) HMFNetAddressInternal *internal;
@property (readonly, nonatomic) unsigned long long addressFamily;
@property (readonly, copy, nonatomic) NSString *addressString;

+ (id)localAddress;

- (id)initWithHostname:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

@end
