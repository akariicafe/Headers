@class NSString, NSArray;

@interface CLFSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFSettings *sharedInstance;

@property (retain, nonatomic) NSString *adminPasscodeRecoveryAppleID;
@property (nonatomic) BOOL allowSiri;
@property (retain, nonatomic) NSArray *applicationBundleIdentifiers;
@property (nonatomic) BOOL batteryMonitoringEnabled;
@property (nonatomic) BOOL didCompleteSetup;
@property (nonatomic) BOOL emergencyKeypadEnabled;
@property (retain, nonatomic) NSString *listLayout;
@property (nonatomic) BOOL lockScreenClockEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (retain, nonatomic) NSArray *overrideNonClarityApplicationBundleIdentifiers;
@property (nonatomic) BOOL shouldShowTripleClickInstructions;
@property (nonatomic) BOOL volumeButtonsEnabled;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
