@class NSArray, NSString;

@interface TRISystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEnrolledInBetaProgram;
@property (retain, nonatomic) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) BOOL logUserSettingsLanguageCode;
@property (nonatomic) BOOL logUserSettingsRegionCode;
@property (nonatomic) BOOL logUserKeyboardEnabledInputMode;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasAne;
@property (retain, nonatomic) NSString *aneVersion;
@property (nonatomic) BOOL isAutomatedTestDevice;

+ (BOOL)_hasAne;
+ (id)_carrierCountryIsoCode;
+ (BOOL)_isDiagnosticsAndUsageEnabled;
+ (id)_sysEnabledInputModeIdentifiers;
+ (id)loadSystemInfo;
+ (BOOL)_isSeedBuild;
+ (id)systemInfoFromFile:(id)a0;
+ (BOOL)_isAutomatedTestDevice;
+ (id)info;
+ (id)_carrierBundleIdentifier;
+ (id)_persistentSystemInfoPath;
+ (id)_aneVersion;
+ (id)createSystemInfoWithFactorProvider:(id)a0;
+ (BOOL)_sysIsEnrolledInBetaProgram;

- (BOOL)saveToFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initFromSystemWithFactorProvider:(id)a0;
- (BOOL)save;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
