@class IMMomentShareCache, NSURL, PXStaticDisplayAssetsDataSource, PHMomentShare;

@interface CKMomentSharePreviewAssetsDataSourceManager : PXAssetsDataSourceManager {
    IMMomentShareCache *_momentShareCache;
    PXStaticDisplayAssetsDataSource *_currentDataSource;
}

@property (readonly, nonatomic) NSURL *momentShareURL;
@property (readonly, nonatomic) PHMomentShare *momentShare;

- (id)init;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)_fetchMomentShare;
- (void)_handleFetchedMomentShare:(id)a0 error:(id)a1;
- (void)_momentShareCacheDidChange:(id)a0;
- (id)initWithMomentShareURL:(id)a0;

@end
