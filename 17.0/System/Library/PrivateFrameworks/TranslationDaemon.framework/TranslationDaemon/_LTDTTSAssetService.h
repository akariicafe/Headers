@class NSArray, SiriTTSDaemonSession;

@interface _LTDTTSAssetService : NSObject <_LTDAssetServiceProtocol>

@property (class, retain) SiriTTSDaemonSession *siriTTSSession;
@property (class, copy, nonatomic) NSArray *subscribedVoices;

+ (id)_queue;
+ (id)_preferredName;
+ (id)_availableTTSAssets;
+ (id)_availableTTSAssetsByLanguage;
+ (long long)_genderForLocaleIdentifier:(id)a0;
+ (long long)_preferredGender;
+ (id)_siriVoiceForTTSAsset:(id)a0;
+ (id)_ttsAssetForLanguage:(id)a0 name:(id)a1 gender:(long long)a2;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)a0;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadVoiceAssetsForLanguagePair:(id)a0;
+ (id)installedAssetIdentifiers;
+ (long long)preferredVoiceType;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;
+ (void)setAutoDownloadedAssets:(id)a0;
+ (id)ttsAssetForLocaleIdentifier:(id)a0;
+ (id)voiceForLocaleIdentifier:(id)a0;

@end
