@class NSDictionary;

@interface MKFCKSharedUserPrivateRoot : MKFCKSharedUserData

@property (nonatomic) long long addSceneButtonPresentedCount;
@property (retain, nonatomic) NSDictionary *characteristicAuthorizationData;
@property (nonatomic) BOOL completedSwitchingHomesOnboardingUI;
@property (nonatomic) BOOL dismissedAccessCodeOnboarding;
@property (nonatomic) BOOL dismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) BOOL dismissedAnnounceOnboarding;
@property (nonatomic) BOOL dismissedCameraRecordingOnboarding;
@property (nonatomic) BOOL dismissedCameraRecordingSetupBanner;
@property (nonatomic) BOOL dismissedCameraUpgradeOfferBanner;
@property (nonatomic) BOOL dismissedHomeTheaterOnboarding;
@property (nonatomic) BOOL dismissedIdentifyVoiceOnboarding;
@property (nonatomic) BOOL dismissedIdentifyVoiceSetupBanner;
@property (nonatomic) BOOL dismissedNaturalLightingOnboarding;
@property (nonatomic) BOOL dismissedTVViewingProfileOnboarding;
@property (nonatomic) BOOL dismissedTVViewingProfileSetupBanner;
@property (nonatomic) BOOL dismissedUserSplitMediaAccountWarning;
@property (nonatomic) BOOL dismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) BOOL dismissedWelcomeUI;
@property (nonatomic) BOOL hasUserSeenRMVNewLanguageNotification;

+ (id)fetchRequest;
+ (id)rootKeyPath;
+ (unsigned long long)cloudStoreTypes;
+ (id)createWithHomeModelID:(id)a0 persistentStore:(id)a1 context:(id)a2;

@end
