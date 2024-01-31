@class NEIPv6Settings, NEIPv4Settings;

@interface NEVPNProtocolPPP : NEVPNProtocol

@property long long authenticationMethod;
@property BOOL verboseLoggingEnabled;
@property (copy) NEIPv4Settings *IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings;

+ (BOOL)supportsSecureCoding;

- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyLegacyDictionaryComplete:(BOOL)a0;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;

@end
