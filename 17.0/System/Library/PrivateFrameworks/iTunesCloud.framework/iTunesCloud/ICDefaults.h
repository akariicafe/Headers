@class NSDate, NSString, NSDictionary, NSNumber, NSUserDefaults;

@interface ICDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSUserDefaults *_musicUserDefaults;
}

@property (class, readonly, nonatomic) ICDefaults *standardDefaults;

@property (readonly, nonatomic) NSUserDefaults *internalDefaults;
@property (copy, nonatomic) NSNumber *cachedSharedControlsCapability;
@property (nonatomic) BOOL socialProfileSupported;
@property (copy, nonatomic) NSString *cloudMediaLibraryUID;
@property (readonly, nonatomic) NSString *defaultStoreFront;
@property (copy, nonatomic) NSDictionary *cachedSubscriptionStatus;
@property (copy, nonatomic) NSDictionary *cachedMusicUserTokens;
@property (copy, nonatomic) NSDictionary *pushNotificationState;
@property (copy, nonatomic) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property (copy, nonatomic) NSNumber *lastActiveAccountDSID;
@property (copy, nonatomic) NSDictionary *lastCookieHeadersForRevokingMusicUserTokens;
@property (copy, nonatomic) NSDate *lastAllowedInteractiveAuthenticationTime;
@property (copy, nonatomic) NSDictionary *authServiceClientTokenCache;
@property (nonatomic) double lastAuthenticationDialogResponseTime;
@property (copy, nonatomic) NSDictionary *lastKnownLocalStoreAccountProperties;
@property (copy, nonatomic) NSDictionary *lastKnownSubscriptionStatusBaseCacheKey;
@property (copy, nonatomic) NSDictionary *accountNotificationsShowInLibraryDictionary;
@property (copy, nonatomic) NSString *lastKnownHouseholdID;
@property (nonatomic) BOOL shouldForceStreamingOnlyKeysForPlayback;
@property (nonatomic) BOOL automaticDownloadsEnabled;
@property (nonatomic) BOOL ignoreExtendedCertificateValidation;
@property (readonly, nonatomic) BOOL bypassBagSanityChecks;
@property (copy, nonatomic) NSString *deviceModelOverride;
@property (copy, nonatomic) NSNumber *deviceClassOverride;
@property (copy, nonatomic) NSNumber *fairPlayDeviceTypeOverride;
@property (copy, nonatomic) NSString *productVersionOverride;
@property (copy, nonatomic) NSString *hardwarePlatformOverride;
@property (copy, nonatomic) NSString *productPlatformOverride;
@property (copy, nonatomic) NSNumber *networkTypeOverride;
@property (copy, nonatomic) NSNumber *networkLinkQualityOverride;
@property (copy, nonatomic) NSNumber *chargingStateOverride;
@property (copy, nonatomic) NSNumber *batteryLevelOverride;
@property (readonly, nonatomic) BOOL shouldForceiPhoneBehaviors;
@property (readonly, copy, nonatomic) NSNumber *authServiceClientTokenTimeToLive;
@property (readonly, copy, nonatomic) NSNumber *requestTimeoutOverride;
@property (nonatomic) BOOL shouldRunAgeVerification;
@property (copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (nonatomic, getter=isExplicitContentAllowedForCurrentYear) BOOL explicitContentAllowedForCurrentYear;
@property (nonatomic, getter=isExplicitContentAllowedForExpirationYear) BOOL explicitContentAllowedForExpirationYear;
@property (nonatomic, getter=isGrazingPathEnabled) BOOL grazingPathEnabled;
@property (readonly, nonatomic, getter=isPrivacyAcknowledgementDisabledForMusic) BOOL privacyAcknowledgementDisabledForMusic;
@property (nonatomic) BOOL shouldForcePrivacyAcknowledgementRequiredForMusic;
@property (readonly, nonatomic) BOOL shouldForceLibraryRecommendationAnalysis;
@property (readonly, nonatomic) BOOL allowLowAffinityRecommendations;
@property (readonly, nonatomic) BOOL shouldOverrideSubscriptionStatusToGlide;
@property (readonly, nonatomic) BOOL shouldReduceLibraryRecommendationsXPCInterval;
@property (readonly, nonatomic) BOOL shouldTreatSubscriptionStatusAsExpired;
@property (readonly, nonatomic) BOOL shouldTreatSagaAddComputerCallAsFailed;
@property (readonly, nonatomic) BOOL shouldTreatInitialSagaImportAsFailed;
@property (readonly, nonatomic) BOOL shouldTreatSubscriptionStatusCheckAsIncomplete;
@property (readonly, nonatomic) BOOL shouldTreatFavoritingEntityRequestAsFailed;
@property (readonly, nonatomic, getter=isLegacyStoreCacheBusterEnabled) BOOL legacyStoreCacheBusterEnabled;
@property (readonly, nonatomic) BOOL shouldBypassURLBagCache;
@property (readonly, copy, nonatomic) NSNumber *secureKeyRenewalTimeOverride;
@property (copy, nonatomic) NSDictionary *lastKnownUserAgeVerificationState;
@property (readonly, nonatomic) BOOL enableMultipathTCP;

- (id)init;
- (id)_musicUserDefaults;
- (void)_setOrRemoveObject:(id)a0 forKey:(id)a1;
- (void)_setOrRemoveInternalDefaultsObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldSpoofIPhoneRequestProperties;
- (void)deleteAutomaticDownloadsKey;
- (void)synchronize;
- (BOOL)_shouldSpoofIPadRequestProperties;

@end
