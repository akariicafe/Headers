@class PXUpdater, PXMemoriesSpecManager, NSString;

@interface PXStoryMemoryFeedViewLayoutSpecManager : PXFeedViewLayoutSpecManager <PXChangeObserver>

@property (readonly, nonatomic) long long layoutKind;
@property (readonly, nonatomic) PXMemoriesSpecManager *memoriesSpecManager;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)_invalidateSpec;
- (void)_updateSpec;
- (id)initWithLayoutKind:(long long)a0 extendedTraitCollection:(id)a1;

@end
