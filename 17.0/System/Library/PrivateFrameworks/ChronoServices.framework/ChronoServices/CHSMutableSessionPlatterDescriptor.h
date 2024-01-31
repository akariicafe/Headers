@class NSData, NSString, CHSExtensionIdentity;

@interface CHSMutableSessionPlatterDescriptor : CHSSessionPlatterDescriptor

@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (nonatomic) long long preferredBackgroundStyle;
@property (nonatomic) BOOL supportsVibrantContent;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (nonatomic) unsigned long long supportedFamilies;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *widgetDescription;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSData *activityAttributesType;

- (void)setExtensionIdentity:(id)a0;
- (void)setSupportedFamilies:(unsigned long long)a0;
- (void)setContainerBundleIdentifier:(id)a0;
- (void)setSupportsVibrantContent:(BOOL)a0;
- (void)setDisplayName:(id)a0;
- (void)setSdkVersion:(id)a0;
- (void)setPlatform:(unsigned long long)a0;
- (void)setLocaleToken:(id)a0;
- (void)setEventMachServiceName:(id)a0;
- (void)setPreferredBackgroundStyle:(long long)a0;
- (void)setExtensionBundleIdentifier:(id)a0;
- (void)setWidgetDescription:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActivityAttributesType:(id)a0;

@end
