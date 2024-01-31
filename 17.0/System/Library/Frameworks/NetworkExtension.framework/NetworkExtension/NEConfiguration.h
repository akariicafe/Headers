@class NSUUID, NEContentFilter, NSString, NEPathController, NEAppPush, NEVPNApp, NEDNSProxy, NEAOVPN, NEProfileIngestionPayloadInfo, NEDNSSettingsBundle, NERelayConfiguration, NEVPN;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEProfileIngestionPluginDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    long long _appPermissionType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *pluginType;
@property (readonly, getter=isTransparentProxy) BOOL transparentProxy;
@property (readonly) long long grade;
@property (readonly) NSUUID *identifier;
@property (copy) NSString *application;
@property (copy) NSString *name;
@property (copy) NSString *applicationName;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *externalIdentifier;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo;
@property (copy) NEVPN *VPN;
@property (copy) NEAOVPN *alwaysOnVPN;
@property (copy) NEVPNApp *appVPN;
@property (copy) NEContentFilter *contentFilter;
@property (copy) NEPathController *pathController;
@property (copy) NEDNSProxy *dnsProxy;
@property (copy) NEDNSSettingsBundle *dnsSettings;
@property (copy) NEAppPush *appPush;
@property (copy) NERelayConfiguration *relay;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)configurationWithProfilePayload:(id)a0 grade:(long long)a1;
+ (id)configurationWithProfilePayload:(id)a0;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (BOOL)setMailDomains:(id)a0;
- (BOOL)setCertificates:(id)a0;
- (BOOL)setCertificates:(id)a0 keyRefs:(id)a1 specs:(id)a2;
- (BOOL)setExcludedDomains:(id)a0;
- (id)getPendingCertificateUUIDs:(id)a0;
- (unsigned long long)hash;
- (id)generateSignature;
- (BOOL)setProfileInfo:(id)a0;
- (BOOL)setPayloadInfoIdentity:(id)a0;
- (BOOL)setCalendarDomains:(id)a0 accountIdentifiers:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)clearSystemKeychain;
- (id)getCertificates;
- (id)getPendingCertificateInfo:(id)a0;
- (BOOL)setPayloadInfoCommon:(id)a0 payloadOrganization:(id)a1;
- (void)applyOverrides;
- (void)copyPasswordsFromSystemKeychain;
- (BOOL)setSMBDomains:(id)a0;
- (id)description;
- (BOOL)setContactsDomains:(id)a0;
- (id)initWithName:(id)a0 grade:(long long)a1;
- (void).cxx_destruct;
- (BOOL)setRestrictDomains:(BOOL)a0;
- (BOOL)setContactsDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)setPerAppUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setMailDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setPerAppRuleSettings:(id)a0 withAppIdentifier:(id)a1;
- (BOOL)setAssociatedDomains:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getConfigurationIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)setAppLayerVPNUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setCalendarDomains:(id)a0;
- (id)descriptionWithOptions:(unsigned long long)a0;

@end
