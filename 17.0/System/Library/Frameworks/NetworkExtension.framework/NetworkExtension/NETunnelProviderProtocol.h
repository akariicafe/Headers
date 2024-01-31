@class NSString, NSDictionary;

@interface NETunnelProviderProtocol : NEVPNProtocol

@property (readonly) NSString *pluginType;
@property (copy) NSString *designatedRequirement;
@property (copy) NSString *authenticationPluginType;
@property (copy) NSDictionary *vendorInfo;
@property long long authenticationMethod;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSString *providerBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isLegacyPluginType:(id)a0;

- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPluginType:(id)a0;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct __SCNetworkInterface { } *)createInterface;
- (void)copyPasswordsFromKeychainInDomain:(long long)a0;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)setPluginType:(id)a0;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;

@end
