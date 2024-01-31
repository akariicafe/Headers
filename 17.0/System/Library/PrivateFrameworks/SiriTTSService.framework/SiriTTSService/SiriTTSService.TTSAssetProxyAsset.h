@class TTSAssetType, TTSAssetQuality, NSString, TTSAssetTechnology, NSArray, NSDictionary, NSBundle, NSNumber, TTSAssetSource;

@interface SiriTTSService.TTSAssetProxyAsset : TTSAsset {
    void /* unknown type, empty encoding */ cookie;
    void /* unknown type, empty encoding */ assetQuality;
    void /* unknown type, empty encoding */ bundlePath;
    void /* unknown type, empty encoding */ authorizedBundle;
    void /* unknown type, empty encoding */ proxy_attr;
}

@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) BOOL downloading;

- (void)purge;
- (id)init;
- (void)downloadWithReservation:(id)a0 useBattery:(BOOL)a1 progress:(id /* block */)a2 then:(id /* block */)a3;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void).cxx_destruct;
- (void)purgeImmediately:(BOOL)a0;

@end
