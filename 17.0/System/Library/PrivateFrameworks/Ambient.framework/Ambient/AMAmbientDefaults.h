@class NSDictionary;

@interface AMAmbientDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL enableAmbientMode;
@property (nonatomic) BOOL alwaysOnEnabled;
@property (nonatomic) BOOL nightModeEnabled;
@property (nonatomic) BOOL bumpToWakeEnabled;
@property (nonatomic) BOOL motionToWakeEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) BOOL notificationsPreviewOnTapOnlyEnabled;
@property (nonatomic, getter=isFirstPresentation) BOOL firstPresentation;
@property (copy, nonatomic) NSDictionary *lastSelectedConfigurations;
@property (nonatomic) BOOL ignoreBatteryChargingForPresentation;
@property (nonatomic) unsigned long long lifetimePresentationCounter;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
