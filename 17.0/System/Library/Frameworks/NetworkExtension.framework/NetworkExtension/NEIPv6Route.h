@class NSString, NSNumber;

@interface NEIPv6Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *destinationAddress;
@property (readonly) NSNumber *destinationNetworkPrefixLength;
@property (copy) NSString *gatewayAddress;

+ (id)defaultRoute;

- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (BOOL)isDefaultRoute;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDestinationAddress:(id)a0 networkPrefixLength:(id)a1;

@end
