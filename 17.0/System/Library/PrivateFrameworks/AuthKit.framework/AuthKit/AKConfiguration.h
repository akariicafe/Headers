@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AKConfiguration : NSObject {
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

@property (nonatomic) long long shouldFakeAuthSuccess;
@property (nonatomic) long long shouldDisablePiggybacking;
@property (nonatomic) long long shouldSuppressHSA2Suggestions;
@property (nonatomic) long long shouldAddHSA2CreateHeader;
@property (nonatomic) long long shouldAllowPhoneNumberAccounts;
@property (nonatomic) long long shouldAllowExperimentalMode;
@property (nonatomic) long long shouldHideInternalBuildHeader;
@property (nonatomic) long long shouldHideSeedBuildHeader;
@property (nonatomic) long long shouldAllowDemoMode;
@property (nonatomic) long long shouldAllowTestApplication;
@property (nonatomic) long long shouldEnableTestAccountMode;
@property (nonatomic) long long shouldSuppressModalSheetsInMacBuddy;
@property (nonatomic) long long shouldAlwaysShowWelcome;
@property (nonatomic) long long shouldAutocycleAppsInTiburon;
@property (nonatomic) long long shouldAutocycleAppsInWebTakeover;
@property (nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property (nonatomic) long long requestedCloudPartition;
@property (nonatomic) long long shouldBypassCustodianDeviceCheck;
@property (nonatomic) long long shouldEnableBeneficiaryLiveOn;
@property (nonatomic) long long shouldEnableReefShark;
@property (nonatomic) long long shouldEnablePiggybackingPresence;
@property (nonatomic) long long shouldForceBaaValidation;
@property (nonatomic) long long piggybackingIDMSPresenceOverride;
@property (nonatomic) long long piggybackingLocalPresenceOverride;
@property (nonatomic) long long forceSilentEscrowRecordRepairEnabled;
@property (readonly, nonatomic) unsigned long long internalFeaturesMaskValue;
@property (copy, nonatomic) NSString *lastKnownLocale;
@property (nonatomic) long long shouldAskToBuy;
@property (nonatomic) long long shouldEnableTelemetryOptIn;
@property (nonatomic) long long telemetryOptInGracePeriodOverride;
@property (nonatomic) long long forceHasSOSActiveDevice;
@property (nonatomic) long long forceSOSNeeded;

+ (id)sharedConfiguration;

- (id)init;
- (void)dealloc;
- (long long)shouldRequestPiggybackingPresenceEnforcement;
- (void)setConfigurationValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setOverride:(long long)a0 forKey:(id)a1;
- (id)configurationValueForKey:(id)a0;
- (BOOL)_validCloudPartition:(long long)a0;
- (long long)overrideForKey:(id)a0;

@end
