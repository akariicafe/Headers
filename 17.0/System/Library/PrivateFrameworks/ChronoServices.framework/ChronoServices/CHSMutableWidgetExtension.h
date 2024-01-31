@class NSString, CHSExtensionIdentity, NSArray, CHSEntitlementCollection;

@interface CHSMutableWidgetExtension : CHSWidgetExtension

@property (copy, nonatomic) CHSExtensionIdentity *identity;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *containerBundleLocalizedDisplayName;
@property (copy, nonatomic) NSArray *orderedDescriptors;
@property (retain, nonatomic) CHSEntitlementCollection *entitlements;
@property (nonatomic) long long dataProtectionLevel;

- (id)init;
- (void)setEntitlements:(id)a0;
- (void)setIdentity:(id)a0;
- (void)setLocalizedDisplayName:(id)a0;
- (void)setContainerBundleLocalizedDisplayName:(id)a0;
- (void)setDataProtectionLevel:(long long)a0;
- (void)setOrderedDescriptors:(id)a0;

@end
