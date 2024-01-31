@class NSArray, NEVPNProtocol;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *exceptionApps;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;
@property (nonatomic, getter=isDisconnectOnDemandEnabled) BOOL disconnectOnDemandEnabled;
@property (nonatomic, getter=isOnDemandUserOverrideDisabled) BOOL onDemandUserOverrideDisabled;
@property (copy) NSArray *onDemandRules;
@property (copy) NEVPNProtocol *protocol;
@property long long tunnelType;

- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
