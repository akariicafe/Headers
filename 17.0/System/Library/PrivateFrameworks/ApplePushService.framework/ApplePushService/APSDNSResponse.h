@class NSString, NSArray;

@interface APSDNSResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSArray *ipv4Address;
@property (readonly, nonatomic) NSArray *ipv6Address;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initResponseForHostname:(id)a0 ipv4Address:(id)a1 ipv6Address:(id)a2;

@end
