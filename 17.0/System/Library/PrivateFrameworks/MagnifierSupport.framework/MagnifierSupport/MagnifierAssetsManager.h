@class AXAssetController, NSString, NSDictionary, NSURL, AXMagnifierAssetPolicy, NSArray;
@protocol MagnifierAssetsManagerDelegate;

@interface MagnifierAssetsManager : NSObject <AXAssetControllerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _didTryWaitingForAssetLookup;
    AXAssetController *_assetController;
    AXMagnifierAssetPolicy *_assetPolicy;
    NSArray *_cachedAssets;
    NSArray *_cachedDownloadableAssets;
    NSArray *_assetsNeedingDownload;
    NSDictionary *_expectedDownloadSizes;
    NSDictionary *_totalInstalledSizes;
    NSDictionary *_assetDownloadPercent;
    BOOL _assetDownloadFailed;
    AXAssetController *_imageCaptionAssetController;
}

@property (copy, nonatomic) NSURL *doorAttributesBaseURL;
@property (copy, nonatomic) NSDictionary *doorAttributesAssetProperties;
@property (copy, nonatomic) NSURL *signDetectorBaseURL;
@property (copy, nonatomic) NSDictionary *signDetectorAssetProperties;
@property (weak, nonatomic) id<MagnifierAssetsManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)assetController:(id)a0 asset:(id)a1 downloadProgressTotalWritten:(long long)a2 totalExpected:(long long)a3 isStalled:(BOOL)a4 expectedTimeRemaining:(double)a5;
- (id)init;
- (void)_performWithLock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetController:(id)a0 didFinishPurgingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (id)_modelURLForType:(unsigned long long)a0 baseURL:(id)a1;
- (id)modelURLForType:(unsigned long long)a0 timeout:(double)a1;
- (void)refreshAssets;
- (id)baseURLForType:(unsigned long long)a0;
- (void)_updateAsset:(id)a0;
- (void)_updateDownloadedValuesForAsset:(id)a0;
- (BOOL)assetDownloadFailed;
- (id)assetPropertiesForModelType:(unsigned long long)a0;
- (id)downloadAssetsWithName:(id)a0;
- (void)downloadImageCaptionAssets;
- (void)manageImageCaptionModelAssets:(id)a0;
- (double)totalDownloadedWithName:(id)a0;
- (long long)totalSizeExpectedWithName:(id)a0;
- (long long)totalSizeOccupiedWithName:(id)a0;

@end
