@class NSString;

@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long protocolType;
@property (readonly, nonatomic) unsigned short servicePort;
@property (copy, nonatomic) NSString *hostname;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtocolType:(long long)a0 servicePort:(unsigned short)a1;
- (BOOL)hostnameEquals:(id)a0;

@end
