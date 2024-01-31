@class NSString;

@interface SUControllerConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL useSUCore;
@property (nonatomic) long long preservePreparedMaxAttempts;
@property (nonatomic) BOOL vpnOnDemandAsInternal;
@property (nonatomic) BOOL performAutoScan;
@property (nonatomic) BOOL performAutoDownloadAndPrepare;
@property (nonatomic) BOOL performAutoInstall;
@property (nonatomic) BOOL autoAcceptTermsAndConditions;
@property (nonatomic) long long autoActivityCheckPeriod;
@property (nonatomic) long long autoInstallForceMaxWait;
@property (nonatomic) long long autoInstallWindowBeginHour;
@property (nonatomic) long long autoInstallWindowBeginMinute;
@property (nonatomic) long long autoInstallWindowEndHour;
@property (nonatomic) long long autoInstallWindowEndMinute;
@property (nonatomic) BOOL downloadDocAsset;
@property (nonatomic) BOOL ignoreRamping;
@property (retain, nonatomic) NSString *installPhaseOSBackgroundImagePath;
@property (nonatomic) BOOL supervisedMDM;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) long long delayPeriod;
@property (nonatomic) BOOL restrictToFullReplacement;
@property (nonatomic) BOOL allowSameVersionUpdates;
@property (nonatomic) BOOL useSpecifiedInstallWindow;
@property (nonatomic) BOOL expiredSpecifiedAsExpired;
@property (nonatomic) BOOL hideIndicationMayReboot;
@property (nonatomic) BOOL internalDefaultsAsExternal;
@property (nonatomic) BOOL requirePrepareSize;
@property (nonatomic) BOOL installWindowAsDeltas;
@property (retain, nonatomic) NSString *updateMetricContext;
@property (retain, nonatomic) NSString *prerequisiteBuildVersion;
@property (retain, nonatomic) NSString *prerequisiteProductVersion;
@property (retain, nonatomic) NSString *asReleaseType;
@property (retain, nonatomic) NSString *simulatorCommandsFile;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_storeStringToDefaults:(id)a0 toValue:(id)a1;
- (id)_copyStringFromDefaults:(id)a0 usingDefault:(id)a1;
- (long long)_decodeInteger:(id)a0 forKey:(id)a1 withLimit:(long long)a2;
- (long long)_limitedInteger:(id)a0 checkingValue:(long long)a1 forKey:(id)a2 withLimit:(long long)a3;
- (long long)_loadBooleanFromDefaults:(id)a0 releaseType:(long long)a1 externalDefault:(BOOL)a2 internalDefault:(BOOL)a3 isStoredInverted:(BOOL)a4;
- (BOOL)_loadBooleanFromDefaults:(id)a0 usingDefault:(BOOL)a1 isStoredInverted:(BOOL)a2;
- (long long)_loadIntegerFromDefaults:(id)a0 releaseType:(long long)a1 externalDefault:(long long)a2 internalDefault:(long long)a3 withLimit:(long long)a4;
- (long long)_loadIntegerFromDefaults:(id)a0 usingDefault:(long long)a1 withLimit:(long long)a2;
- (BOOL)_runningOnAppleTV;
- (BOOL)_storeBooleanToDefaults:(id)a0 toValue:(BOOL)a1 isStoredInverted:(BOOL)a2;
- (long long)_storeIntegerToDefaults:(id)a0 toValue:(long long)a1;
- (id)changeSummary:(long long)a0;
- (id)initFromDefaults:(long long)a0;
- (void)modify:(id)a0 usingMask:(long long)a1;

@end
