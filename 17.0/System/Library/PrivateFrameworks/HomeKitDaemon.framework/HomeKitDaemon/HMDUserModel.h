@class HMDAccountHandle, NSString, NSArray, HMDAccountIdentifier, CKRecordID, NSData, NSDictionary, HMUserHomeAccessSettings, NSNumber;

@interface HMDUserModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSString *changeTag;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSNumber *camerasAccessLevel;
@property (retain, nonatomic) NSNumber *announceAccessAllowed;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSNumber *analysisAccessSelection;
@property (retain, nonatomic) NSNumber *audioAnalysisUserDropInAccessLevel;
@property (retain, nonatomic) NSArray *allowedAccessoryUUIDStrings;
@property (retain, nonatomic) NSArray *allowedAccessoryCategories;
@property (retain, nonatomic) NSArray *allowedRoomUUIDStrings;
@property (readonly, copy, nonatomic) HMUserHomeAccessSettings *homeAccessSettings;
@property (retain, nonatomic) NSString *idsMergeIdentifier;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) NSData *reverseShareToken;
@property (retain, nonatomic) NSNumber *allowExplicitContent;
@property (retain, nonatomic) NSNumber *allowiTunesAccount;
@property (retain, nonatomic) NSNumber *dolbyAtmosEnabled;
@property (retain, nonatomic) NSNumber *losslessMusicEnabled;
@property (retain, nonatomic) NSNumber *playbackInfluencesEnabled;
@property (retain, nonatomic) NSNumber *siriIdentifyVoiceEnabled;
@property (copy, nonatomic) NSNumber *ownerAddSceneButtonPresentedCount;
@property (copy, nonatomic) NSNumber *ownerCompletedSwitchingHomesOnboardingUI;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessCodeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAnnounceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraUpgradeOfferBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedHomeTheaterOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedNaturalLightingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedUserSplitMediaAccountWarning;
@property (copy, nonatomic) NSNumber *ownerDismissedWalletKeyExpressModeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedWelcomeUI;
@property (copy, nonatomic) NSNumber *ownerHasUserSeenRMVNewLanguageNotification;
@property (retain, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (retain, nonatomic) NSArray *accessoriesWithPersonalRequestsEnabled;
@property (retain, nonatomic) NSArray *accessoriesWithMediaContentProfileEnabled;
@property (retain, nonatomic) NSArray *accessoriesWithListeningHistoryEnabled;
@property (retain, nonatomic) NSString *photosPersonDataZoneUUIDString;
@property (retain, nonatomic) NSNumber *sharePhotosFaceClassifications;
@property (retain, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;

+ (id)properties;
+ (id)shareTokenFromKeyedArchiveData:(id)a0;
+ (id)cd_getHMDUserFromMKFUser:(id)a0;
+ (id)cd_getMKFUserFromUUID:(id)a0;
+ (id)keyedArchiveToken:(id)a0;

- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
