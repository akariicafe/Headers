@class INIntent, NSString, CHSExtensionIdentity, CHSIntentReference;

@interface CHSWidget : NSObject <BSXPCSecureCoding, BSDescriptionProviding, CHSWidgetPersonality, CHSWidgetIdentifiable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) CHSIntentReference *intentReference;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, copy, nonatomic) NSString *sourceDeviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) CHSExtensionIdentity *extensionIdentity;

+ (BOOL)supportsBSXPCSecureCoding;

- (BOOL)matchesPersonality:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)matches:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 family:(long long)a3 intent:(id)a4;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3 activityIdentifier:(id)a4;
- (id)widgetByReplacingIntent:(id)a0;
- (id)_loggingIdentifierWithMetrics:(id)a0;
- (id)_loggingIdentifierWithMetrics:(id)a0 prefix:(id)a1;
- (id)_loggingIdentifierWithoutMetrics;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 family:(long long)a3 intent:(id)a4 activityIdentifier:(id)a5;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 family:(long long)a2 intentReference:(id)a3 activityIdentifier:(id)a4;
- (id)initWithPersonality:(id)a0 family:(long long)a1 intent:(id)a2;
- (id)initWithWidgetIdentity:(id)a0 family:(long long)a1 intent:(id)a2 activityIdentifier:(id)a3;

@end
