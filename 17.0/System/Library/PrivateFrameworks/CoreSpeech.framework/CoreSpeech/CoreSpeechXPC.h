@class CoreSpeechXPCFakeModelMonitor;

@interface CoreSpeechXPC : NSObject <CoreSpeechXPCProtocol>

@property (retain, nonatomic) CoreSpeechXPCFakeModelMonitor *fakeAssetMonitor;

+ (id)accessoryModelTypeToString:(long long)a0;
+ (void)logLanguageMismatchMetricWithJarvisSelectedLocale:(id)a0 jarvisTriggerMode:(long long)a1;

- (void).cxx_destruct;
- (void)_fetchVoiceTriggerInstalledAssetWithLanguage:(id)a0 completion:(id /* block */)a1;
- (void)_handleFakeHearstModelRequest:(id)a0 majorVersion:(unsigned long long)a1 minorVersion:(unsigned long long)a2 downloadedModels:(id)a3 preinstalledModels:(id)a4 completion:(id /* block */)a5;
- (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
- (id)getAccessoryFallbackFamilyLocal:(id)a0 fromLocaleMap:(id)a1;
- (id)getAccessoryFallbackLocalTable;
- (id)initWithFakeMonitor:(id)a0;
- (void)installedVoiceTriggerAssetForLanguageCode:(id)a0 completion:(id /* block */)a1;
- (id)selectFallbackModelForLocale:(id)a0 downloadedModels:(id)a1 preinstalledModels:(id)a2 rtLocaleMap:(id)a3;
- (void)voiceTriggerJarvisLanguageList:(id)a0 jarvisSelectedLanguage:(id)a1 completion:(id /* block */)a2;
- (void)voiceTriggerRTModelWithRequestOptions:(id)a0 downloadedModels:(id)a1 preinstalledModels:(id)a2 completion:(id /* block */)a3;

@end
