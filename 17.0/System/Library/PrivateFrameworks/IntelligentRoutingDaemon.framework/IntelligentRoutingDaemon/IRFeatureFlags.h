@interface IRFeatureFlags : NSObject

@property (readonly, nonatomic, getter=isServiceFeatureEnabled) BOOL serviceFeatureEnabled;
@property (readonly, nonatomic, getter=isPickerPrioritizationFeatureEnabled) BOOL pickerPrioritizationFeatureEnabled;
@property (readonly, nonatomic, getter=isSuggestedRoutingFeatureEnabled) BOOL suggestedRoutingFeatureEnabled;
@property (readonly, nonatomic, getter=isAutomaticRoutingFeatureEnabled) BOOL automaticRoutingFeatureEnabled;
@property (readonly, nonatomic, getter=isSuggestedControlFeatureEnabled) BOOL suggestedControlFeatureEnabled;
@property (readonly, nonatomic, getter=isAutomaticControlFeatureEnabled) BOOL automaticControlFeatureEnabled;
@property (readonly, nonatomic, getter=isTVRemoteControlFeatureEnabled) BOOL tvRemoteControlFeatureEnabled;

+ (id)sharedFeatureFlags;

- (void)_checkForUnitTestingWithFeatureName:(id)a0;

@end
