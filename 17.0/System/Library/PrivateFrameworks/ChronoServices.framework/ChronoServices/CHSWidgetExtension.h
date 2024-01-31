@class NSString, CHSExtensionIdentity, CHSEntitlementCollection, NSArray;

@interface CHSWidgetExtension : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {
    unsigned long long _hashValue;
    BOOL _hasValidHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CHSEntitlementCollection *entitlements;
@property (readonly, nonatomic) CHSExtensionIdentity *identity;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) NSString *containerBundleLocalizedDisplayName;
@property (readonly, copy, nonatomic) NSString *sourceDeviceIdentifier;
@property (readonly, nonatomic) NSArray *orderedDescriptors;
@property (readonly, nonatomic) long long dataProtectionLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptors;
- (id)_init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromExtension:(id)a0;
- (id)initFromExtension:(id)a0 includeIntents:(BOOL)a1;
- (BOOL)isLinkedOnOrAfter:(unsigned long long)a0;

@end
