@class PXStoryModel, NSString, NSError, PXStoryResourcesPreloader;

@interface PXStoryResourcesPreloadingController : PXStoryController <PXStoryResourcesPreloadingCoordinatable> {
    PXStoryResourcesPreloader *_preloader;
}

@property (nonatomic) BOOL canStartPreloading;
@property (nonatomic) long long bufferingEvents;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isSongResourcesPreloadingEnabled;
@property (readonly, nonatomic) BOOL shouldSkipInitialSegment;
@property (readonly, nonatomic) float loadingFractionComplete;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) BOOL isCompleted;
@property (readonly, nonatomic) unsigned long long isCompletedChangeDescriptor;
@property (nonatomic) BOOL isPreloadingEnabled;

- (void)setIsActive:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)setIsCompleted:(BOOL)a0;
- (void)_invalidateCanStartPreloading;
- (void)_invalidateCurrentPlaybackTimeOnPreloader;
- (void)_invalidateCurrentSegmentIdentifierOnPreloader;
- (void)_invalidatePreloadingRequest;
- (void)_invalidateReadinessStatus;
- (void)_updateCanStartPreloading;
- (void)_updateCurrentPlaybackTimeOnPreloader;
- (void)_updateCurrentSegmentIdentifierOnPreloader;
- (void)_updatePreloadingRequest;
- (void)_updateReadinessStatus;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithModel:(id)a0 mediaProvider:(id)a1;
- (id)initWithObservableModel:(id)a0;
- (void)setIsSongResourcesPreloadingEnabled:(BOOL)a0;
- (void)setLoadingFractionComplete:(float)a0;
- (void)setShouldSkipInitialSegment:(BOOL)a0;

@end
