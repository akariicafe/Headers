@class _LTAssetProgress, NSString, TTSAsset;

@interface _LTDTTSAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSString *_language;
    NSString *_assetName;
    NSString *_ltIdentifier;
}

@property (readonly, retain, nonatomic) TTSAsset *ttsAsset;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelFromAsset:(id)a0;

- (long long)downloadSize;
- (long long)formatVersion;
- (id)assetName;
- (id)assetId;
- (BOOL)isInstalled;
- (unsigned long long)state;
- (BOOL)isDownloading;
- (id)identifier;
- (long long)assetVersion;
- (long long)contentVersion;
- (id)supportedLanguages;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (unsigned long long)assetType;
- (id)getLocalFileUrl;
- (id)initWithAssetIdentifier:(id)a0;
- (BOOL)canBePurged;
- (long long)unarchivedSize;
- (id)assetLanguage;
- (id)assetTypeName;
- (BOOL)isPremiumTextLID;
- (id)managedAssetType;
- (long long)requiredCapabilityIdentifier;

@end
