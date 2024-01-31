@interface PXContentPrivacySettings : PXSettings

@property (nonatomic) long long simulationMode;
@property (nonatomic) long long simulatedAuthenticationType;
@property (nonatomic) BOOL shouldAlwaysShowUnlockButtonInContentUnavailableViews;
@property (nonatomic) long long authenticationBehaviorUponAppearing;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (BOOL)contentPrivacyEnabled;

@end
