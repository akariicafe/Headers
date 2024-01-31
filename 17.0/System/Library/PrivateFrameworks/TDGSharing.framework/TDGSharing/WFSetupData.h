@class NSArray, NSString, WFSetupDataInternal, NSDictionary, NSData, NSDate;

@interface WFSetupData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) WFSetupDataInternal *underlyingSwiftObject;
@property (readonly, copy, nonatomic) NSArray *keyboards;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic) BOOL usesSameAccountForiTunes;
@property (readonly, nonatomic) BOOL isConnectedToWiFi;
@property (readonly, copy, nonatomic) NSArray *networks;
@property (readonly, copy, nonatomic) NSArray *networkPasswords;
@property (readonly, copy, nonatomic) NSDictionary *localePreferences;
@property (readonly, nonatomic) BOOL isAutomaticTimeZoneEnabled;
@property (readonly, copy, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) NSData *accessibilitySettings;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *deviceModel;
@property (readonly, copy, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) BOOL hasHomeButton;
@property (readonly, nonatomic) BOOL isRestoring;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *backupUUID;
@property (readonly, nonatomic) BOOL isBackupEnabled;
@property (readonly, copy, nonatomic) NSDate *dateOfLastBackup;
@property (readonly, nonatomic) BOOL isOptedInToLocationServices;
@property (readonly, nonatomic) NSData *locationServicesData;
@property (readonly, nonatomic) BOOL isOptedInToFindMyDevice;
@property (readonly, nonatomic) BOOL isOptedInToDeviceAnalytics;
@property (readonly, nonatomic) BOOL isOptedInToAppAnalytics;
@property (readonly, nonatomic) BOOL siriAssistantIsEnabled;
@property (readonly, nonatomic) BOOL siriVoiceTriggerIsEnabled;
@property (readonly, copy, nonatomic) NSString *siriAssistantLanguageCode;
@property (readonly, copy, nonatomic) NSString *siriAssistantOutputVoice;
@property (readonly, nonatomic) BOOL siriDataSharingIsEnabled;
@property (readonly, nonatomic) BOOL dictationIsEnabled;
@property (readonly, nonatomic) BOOL suppressDictationOptIn;
@property (readonly, nonatomic) long long deviceTermsIdentifier;
@property (readonly, copy, nonatomic) NSString *productVersion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyboards:(void *)a0 appleID:(id)a1 usesSameAccountForiTunes:(BOOL)a2 isConnectedToWiFi:(BOOL)a3 networks:(id)a4 networkPasswords:(id)a5 localePreferences:(id)a6 isAutomaticTimeZoneEnabled:(BOOL)a7 timeZone:(id)a8 accessibilitySettings:(id)a9 firstName:(id)a10 deviceModel:(id)a11 deviceClass:(id)a12 hasHomeButton:(BOOL)a13 isRestoring:(BOOL)a14 deviceName:(id)a15 backupUUID:(id)a16 isBackupEnabled:(BOOL)a17 dateOfLastBackup:(id)a18 isOptedInToLocationServices:(BOOL)a19 isOptedInToDeviceAnalytics:(BOOL)a20 locationServicesData:(id)a21 isOptedInToFindMyDevice:(BOOL)a22 isOptedInToAppAnalytics:(BOOL)a23 siriAssistantIsEnabled:(BOOL)a24 siriVoiceTriggerIsEnabled:(BOOL)a25 siriAssistantLanguageCode:(id)a26 siriAssistantOutputVoice:(id)a27 siriDataSharingIsEnabled:(BOOL)a28 dictationIsEnabled:(BOOL)a29 suppressDictationOptIn:(BOOL)a30 deviceTermsIdentifier:(long long)a31 productVersion:(id)a32 anisetteDataProvider:(id)a33 prescriptionRecords:(id)a34;

@end
