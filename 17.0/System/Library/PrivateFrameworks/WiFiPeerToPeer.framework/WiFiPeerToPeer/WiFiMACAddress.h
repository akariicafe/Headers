@class NSData;

@interface WiFiMACAddress : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) NSData *ipv6LinkLocalAddress;

+ (id)zeroAddress;

- (id)initWithAddress:(struct ether_addr { unsigned char x0[6]; })a0 ipv6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithLinkLocalIPv6Address:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a0;
- (void).cxx_destruct;
- (id)initWithAddress:(struct ether_addr { unsigned char x0[6]; })a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
