@class NSURL, NSString, ACAccount;

@interface ADCoreSettings : ADSingleton

@property (retain, nonatomic) NSURL *defaultServerURL;
@property (retain, nonatomic) NSURL *defaultConfigurationServerURL;
@property (nonatomic) int segmentRetrievalInterval;
@property (nonatomic) int maxSegmentSendInterval;
@property (nonatomic) double jingleTimeoutInterval;
@property (nonatomic) double adServerTimeoutInterval;
@property (nonatomic) double NSURLConnectionTimeout;
@property (nonatomic) double NSURLTransactionTimeout;
@property (retain, nonatomic) NSString *osIdentifier;
@property (retain, nonatomic) NSString *osVersionAndBuild;
@property (retain, nonatomic) NSString *longBuildVersion;
@property (retain, nonatomic) NSString *shortBuildVersion;
@property (retain, nonatomic) NSString *shortModelType;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int connectionType;
@property (nonatomic) float timezone;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *storefrontLocalizationLanguage;
@property (readonly, nonatomic) BOOL isRestrictedRegion;
@property (readonly, nonatomic) BOOL isManagedAppleID;
@property (readonly, nonatomic) BOOL isManagediTunesAccount;
@property (readonly, nonatomic) BOOL isManagediCloudAccount;
@property (nonatomic) BOOL isPersonalizedAdsEnabled;
@property (readonly, nonatomic) BOOL educationModeEnabled;
@property (nonatomic) int runState;
@property (retain, nonatomic) NSString *iTunesStorefront;
@property (readonly, nonatomic) ACAccount *iTunesStoreAccount;
@property (readonly, nonatomic) NSString *iTunesAccountDSID;
@property (readonly, nonatomic) NSString *customJinglePayload;
@property (readonly, nonatomic) ACAccount *iCloudAccount;
@property (readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property (readonly, nonatomic) NSString *iCloudDSID;
@property (readonly) BOOL unitTesting;

+ (id)sharedInstance;

- (id)init;
- (int)deviceRunStateForBundleIdentifier:(id)a0;
- (BOOL)purpleBuddyWillRun;
- (BOOL)isRestrictedByScreenTime;
- (void)reloadStorefront:(id /* block */)a0;
- (void)reloadNoServicesRestrictions;
- (void).cxx_destruct;
- (BOOL)isAccountRestricted;
- (void)setIdentifierForAdvertisingAllowed:(BOOL)a0;
- (void)expire;
- (id)adprivacydBag;
- (id)deviceDescription;

@end
