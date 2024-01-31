@interface TTSSiriAssetManager : NSObject

+ (id)voiceResourceForLanguage:(id)a0 voiceType:(long long)a1;
+ (void)downloadVoiceResourceForLanguage:(id)a0 completion:(id /* block */)a1;
+ (BOOL)spaceCheck:(id)a0;
+ (id)ttsAssetFromVoiceAsset:(id)a0;
+ (id)voiceIdentifierForType:(long long)a0 footprint:(long long)a1 language:(id)a2 name:(id)a3;
+ (id)_assetFilterForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4 locallyAvailable:(BOOL)a5;
+ (id)_assetTechnologyForVoiceType:(long long)a0;
+ (id)deprecatedVoicesMap;
+ (id)_footprintForType:(long long)a0;
+ (id)assetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4;
+ (long long)_footprintForQuality:(id)a0;
+ (id)_siriAssetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4 locallyAvailable:(BOOL)a5;
+ (id)voiceAssetFromTTSAsset:(id)a0;
+ (id)installedAssetsForLanguage:(id)a0 voiceType:(long long)a1;
+ (id)voiceIdentifierForAsset:(id)a0;
+ (void)purgeAsset:(id)a0;
+ (id)convertTTSLanguageCodeToSiriLanguageCode:(id)a0;
+ (void)downloadAsset:(id)a0 progressHandler:(id /* block */)a1;
+ (id)_assetsForLanguage:(id)a0 voiceType:(long long)a1 installedOnly:(BOOL)a2;
+ (id)_assetTypesForVoiceType:(long long)a0;
+ (id)assetsForLanguage:(id)a0 voiceType:(long long)a1;
+ (id)installedAssetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4;
+ (id)_siriAssetForLanguage:(id)a0 gender:(long long)a1 footprint:(long long)a2 voiceName:(id)a3 voiceType:(long long)a4;
+ (void)stopDownload:(id)a0;
+ (long long)_voiceTypeForAssetTechnology:(id)a0;
+ (id)installedVoiceResourceForLanguage:(id)a0;

@end
