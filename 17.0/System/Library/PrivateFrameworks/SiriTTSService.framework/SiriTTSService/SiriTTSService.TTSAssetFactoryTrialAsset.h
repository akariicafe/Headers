@class TTSAssetType, TTSAssetQuality, NSArray, NSString, TTSAssetTechnology, NSBundle, TTSAssetSource, NSNumber;

@interface SiriTTSService.TTSAssetFactoryTrialAsset : TTSAsset {
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ factorName;
}

@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) BOOL locallyAvailable;

- (void)purge;
- (id)init;
- (void).cxx_destruct;

@end
