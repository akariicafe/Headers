@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (id)initSingleton;
- (id)getOfflineDictationStatusForLanguage:(id)a0;
- (id)dictationSLSEnabledLanguages;
- (id)languageCode;
- (BOOL)isSmartLanguageSelectionEnabled;
- (BOOL)suppressDataSharingOptIn;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (BOOL)isOnDeviceDictationSupportMissingAssetForLanguage:(id)a0;
- (BOOL)suppressDictationOptIn;
- (id)manualEndpointingThreshold;
- (void).cxx_destruct;
- (BOOL)isOnDeviceDictationSupportAvailableForLanguage:(id)a0;
- (long long)dataSharingOptInStatus;
- (BOOL)dictationIsEnabled;
- (BOOL)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)a0;
- (void)afPreferencesChanged:(id)a0;

@end
