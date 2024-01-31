@class NSArray, ICDocCamImageCache;

@interface ICDocCamScanCacheItem : NSObject

@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (retain, nonatomic) NSArray *docInfos;

- (id)init;
- (void).cxx_destruct;
- (void)doneBuildingCache;
- (id)imageForScanDataDelegateIdentifier:(id)a0;
- (id)initWithImageCache:(id)a0 docInfos:(id)a1;
- (void)deleteCacheImages;
- (id)docInfoForScanDataDelegate:(id)a0;

@end
