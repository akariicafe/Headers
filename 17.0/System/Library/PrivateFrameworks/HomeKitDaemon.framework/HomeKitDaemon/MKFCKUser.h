@class NSDate, NSString, NSUUID, HAPPairingIdentity, CKRecordID, NSSet, NSDictionary, CKDeviceToDeviceShareInvitationToken, MKFCKHome, MKFCKOutgoingInvitation;

@interface MKFCKUser : MKFCKHomeObject

@property (copy, nonatomic) NSString *accountHandle;
@property (nonatomic) long long analysisAccessSelection;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long camerasAccessLevel;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSString *homeAccessCode;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *idsMergeIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) BOOL ownerActivityNotificationsEnabledForPersonalRequests;
@property (nonatomic) long long ownerAddSceneButtonPresentedCount;
@property (nonatomic) BOOL ownerAllowExplicitContent;
@property (nonatomic) BOOL ownerAllowiTunesAccount;
@property (retain, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;
@property (nonatomic) BOOL ownerCompletedSwitchingHomesOnboardingUI;
@property (nonatomic) BOOL ownerDismissedAccessCodeOnboarding;
@property (nonatomic) BOOL ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) BOOL ownerDismissedAnnounceOnboarding;
@property (nonatomic) BOOL ownerDismissedCameraRecordingOnboarding;
@property (nonatomic) BOOL ownerDismissedCameraRecordingSetupBanner;
@property (nonatomic) BOOL ownerDismissedCameraUpgradeOfferBanner;
@property (nonatomic) BOOL ownerDismissedHomeTheaterOnboarding;
@property (nonatomic) BOOL ownerDismissedIdentifyVoiceOnboarding;
@property (nonatomic) BOOL ownerDismissedIdentifyVoiceSetupBanner;
@property (nonatomic) BOOL ownerDismissedNaturalLightingOnboarding;
@property (nonatomic) BOOL ownerDismissedTVViewingProfileOnboarding;
@property (nonatomic) BOOL ownerDismissedTVViewingProfileSetupBanner;
@property (nonatomic) BOOL ownerDismissedUserSplitMediaAccountWarning;
@property (nonatomic) BOOL ownerDismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) BOOL ownerDismissedWelcomeUI;
@property (nonatomic) BOOL ownerDolbyAtmosEnabled;
@property (nonatomic) BOOL ownerHasUserSeenRMVNewLanguageNotification;
@property (nonatomic) BOOL ownerLosslessMusicEnabled;
@property (nonatomic) BOOL ownerPlaybackInfluencesEnabled;
@property (nonatomic) BOOL ownerSiriIdentifyVoiceEnabled;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) long long privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (nonatomic) BOOL sharePhotosFaceClassifications;
@property (nonatomic) long long uniqueIDForAccessories;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *automations;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKOutgoingInvitation *invitation;
@property (retain, nonatomic) MKFCKHome *ownedHome;
@property (retain, nonatomic) NSSet *personsFromPhotos;

+ (id)fetchRequest;

- (BOOL)isOwner;
- (id)_resolveSharedUserDataRootWithContext:(id)a0;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportOwnerUserSettingsFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importOwnerUserSettingsIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)importSharedUserSettingsIntoLocalModel:(id)a0 context:(id)a1;

@end
