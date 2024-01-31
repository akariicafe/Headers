@class NSString, HDProfile, HDSHWidgetSchedulingManager, HDSHAccessibilityAssertionManager;

@interface HDSHProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider>

@property (readonly, nonatomic) HDSHAccessibilityAssertionManager *accessibilityAssertionManager;
@property (readonly, nonatomic) HDSHWidgetSchedulingManager *widgetSchedulingManager;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;

@end
