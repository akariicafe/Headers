@class CHSWidgetMetrics, NSString, CHSWidget, NSArray, CHSExtensionIdentity, CHSConfiguredWidgetContainerDescriptor, CHSWidgetDisplayProperties;
@protocol CHSWidgetRefreshStrategy;

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, CHSWidgetConfigurationReference, NSCopying, NSMutableCopying, NSSecureCoding, CHSWidgetPersonality, CHSWidgetIdentifiable> {
    CHSConfiguredWidgetContainerDescriptor *_weak_container;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) CHSConfiguredWidgetContainerDescriptor *container;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic, getter=isSuggestion) BOOL suggestion;
@property (readonly, nonatomic, getter=isSystemConfigured) BOOL systemConfigured;
@property (readonly, nonatomic) unsigned long long supportedColorSchemes;
@property (readonly, copy, nonatomic) NSArray *supportedRenderSchemes;
@property (readonly, nonatomic) BOOL supportsLowLuminance;
@property (readonly, nonatomic) BOOL showsWidgetLabel;
@property (readonly, copy, nonatomic) CHSWidgetDisplayProperties *displayProperties;
@property (readonly, nonatomic) id<CHSWidgetRefreshStrategy> refreshStrategy;
@property (readonly, nonatomic) BOOL supportsTinting;
@property (readonly, nonatomic) BOOL showsComplicationLabel;
@property (readonly, nonatomic) unsigned long long supportedRenderingModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) CHSExtensionIdentity *extensionIdentity;

+ (id)new;

- (BOOL)matchesPersonality:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithDescriptor:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)_setContainer:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)matches:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 isSuggestion:(BOOL)a3 isSystemConfigured:(BOOL)a4;

@end
