@class NSString, NSArray, NSDictionary, NSData, NSDate;

@interface WFSetupDataInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ appleID;
    void /* unknown type, empty encoding */ networks;
    void /* unknown type, empty encoding */ networkPasswords;
    void /* unknown type, empty encoding */ localePreferences;
    void /* unknown type, empty encoding */ timeZone;
    void /* unknown type, empty encoding */ accessibilitySettings;
    void /* unknown type, empty encoding */ firstName;
    void /* unknown type, empty encoding */ deviceModel;
    void /* unknown type, empty encoding */ deviceClass;
    void /* unknown type, empty encoding */ deviceName;
    void /* unknown type, empty encoding */ backupUUID;
    void /* unknown type, empty encoding */ dateOfLastBackup;
    void /* unknown type, empty encoding */ locationServicesData;
    void /* unknown type, empty encoding */ siriAssistantLanguageCode;
    void /* unknown type, empty encoding */ productVersion;
    void /* unknown type, empty encoding */ prescriptionRecords;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ version;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ keyboards;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ usesSameAccountForiTunes;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isConnectedToWiFi;
@property (nonatomic, readonly) NSArray *networks;
@property (nonatomic, readonly) NSArray *networkPasswords;
@property (nonatomic, readonly) NSDictionary *localePreferences;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isAutomaticTimeZoneEnabled;
@property (nonatomic, readonly) NSString *timeZone;
@property (nonatomic, readonly) NSData *accessibilitySettings;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasHomeButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isRestoring;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isBackupEnabled;
@property (nonatomic, readonly) NSDate *dateOfLastBackup;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isOptedInToLocationServices;
@property (nonatomic, readonly) NSData *locationServicesData;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isOptedInToFindMyDevice;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isOptedInToDeviceAnalytics;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isOptedInToAppAnalytics;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ siriAssistantIsEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ siriVoiceTriggerIsEnabled;
@property (nonatomic, readonly) NSString *siriAssistantLanguageCode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ siriAssistantOutputVoice;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ siriDataSharingIsEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ dictationIsEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ suppressDictationOptIn;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ deviceTermsIdentifier;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ anisetteDataProvider;
@property (nonatomic, readonly) NSArray *prescriptionRecords;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyboards:(id)a0 appleID:(id)a1 usesSameAccountForiTunes:(BOOL)a2 isConnectedToWiFi:(BOOL)a3 networks:(id)a4 networkPasswords:(id)a5 localePreferences:(id)a6 isAutomaticTimeZoneEnabled:(BOOL)a7 timeZone:(id)a8 accessibilitySettings:(id)a9 firstName:(id)a10 deviceModel:(id)a11 deviceClass:(id)a12 hasHomeButton:(BOOL)a13 isRestoring:(BOOL)a14 deviceName:(id)a15 backupUUID:(id)a16 isBackupEnabled:(BOOL)a17 dateOfLastBackup:(id)a18 isOptedInToLocationServices:(BOOL)a19 isOptedInToDeviceAnalytics:(BOOL)a20 locationServicesData:(id)a21 isOptedInToFindMyDevice:(BOOL)a22 isOptedInToAppAnalytics:(BOOL)a23 siriAssistantIsEnabled:(BOOL)a24 siriVoiceTriggerIsEnabled:(BOOL)a25 siriAssistantLanguageCode:(id)a26 siriAssistantOutputVoice:(id)a27 siriDataSharingIsEnabled:(BOOL)a28 dictationIsEnabled:(BOOL)a29 suppressDictationOptIn:(BOOL)a30 deviceTermsIdentifier:(long long)a31 productVersion:(id)a32 anisetteDataProvider:(id)a33 prescriptionRecords:(id)a34;

@end
