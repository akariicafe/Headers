@class NSData, NSString, CHSExtensionIdentity;

@interface CHSBaseDescriptor : NSObject <NSCopying, NSSecureCoding, BSDescriptionProviding, CHSExtensionIdentifiable> {
    long long _preferredBackgroundStyle;
    BOOL _supportsVibrantContent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSData *localeToken;
@property (readonly, copy, nonatomic) NSString *eventMachServiceName;
@property (readonly, copy, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, nonatomic) unsigned long long supportedFamilies;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, copy, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (readonly, nonatomic) BOOL hiddenBySensitiveUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CHSExtensionIdentity *extensionIdentity;

- (id)containerBundleIdentifier;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)extensionBundleIdentifier;
- (id)_initWithDescriptor:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CHSWidgetRenderStyle { long long x0; BOOL x1; })effectiveRenderStyleForFamily:(long long)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 supportedFamilies:(unsigned long long)a2;
- (id)initWithExtensionIdentity:(id)a0 supportedFamilies:(unsigned long long)a1;
- (BOOL)isLinkedOnOrAfter:(unsigned long long)a0;
- (BOOL)isTransparentForFamily:(long long)a0;
- (BOOL)requiresCARenderingForFamily:(long long)a0;
- (id)sourceDeviceIdentifier;
- (BOOL)wantsMaterialBackgroundForFamily:(long long)a0;

@end
