@class NSTimer, PLSearchIndexSceneTaxonomyProvider, PHPhotoLibrary, PSIDatabase;

@interface PHSearchIndex : NSObject

@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (retain, nonatomic) PSIDatabase *unverifiedPsiSearchIndex;
@property (nonatomic) BOOL isCheckingIfTheSearchIndexIsReady;
@property (retain, nonatomic) PSIDatabase *_psiSearchIndex;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PSIDatabase *psiSearchIndex;

+ (BOOL)_ensureSearchIndexIsReadyToBeQueriedForPhotoLibrary:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)stopMonitoringSearchIndexStatus;
- (void)_openQueryConnectionToSearchIndexForPhotoLibrary:(id)a0 completion:(id /* block */)a1;
- (void)preWarmSearchIndexSynchronously:(BOOL)a0 completion:(id /* block */)a1;
- (void)startMonitoringSearchIndexStatus;

@end
