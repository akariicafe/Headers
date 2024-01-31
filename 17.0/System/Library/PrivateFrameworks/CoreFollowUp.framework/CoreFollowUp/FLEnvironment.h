@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (BOOL)isUnlocked;
- (id)init;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (id)supportedNotifyingAppIds;
- (BOOL)isInternal;
- (double)oneDayTimeInterval;
- (id)stressBundleIdentifiers;
- (BOOL)shouldShowUnapprovedItems;
- (BOOL)shouldHideAllFollowUps;
- (void).cxx_destruct;
- (BOOL)stressMode;
- (id)supportedBundleIdentifiers;
- (BOOL)normalizeExpirationToMidnight;

@end
