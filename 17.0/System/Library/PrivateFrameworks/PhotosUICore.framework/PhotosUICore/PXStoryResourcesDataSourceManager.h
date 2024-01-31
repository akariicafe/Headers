@class PXStoryConfiguration, PXUpdater, PXStoryRecipe, PXStoryRecipeManager, PXStoryResourcesDataSource, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryResourcesDataSourceManager : PXObservable <PXStoryMutableResourcesDataSourceManager, PXChangeObserver, PXStoryQueueParticipant>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXStoryConfiguration *configuration;
@property (retain, nonatomic) PXStoryRecipe *recipe;
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager;
@property (readonly, nonatomic) PXStoryResourcesDataSource *dataSource;
@property (readonly, nonatomic) BOOL isDataSourceFinal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (void)_updateDataSource;
- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)_invalidateDataSource;
- (void)setDataSource:(id)a0;
- (void)reloadDataSource;
- (void)_invalidateIsDataSourceFinal;
- (void)_invalidateRecipe;
- (void)_updateIsDataSourceFinal;
- (void)_updateRecipe;
- (id)initWithRecipeManager:(id)a0;
- (void)setIsDataSourceFinal:(BOOL)a0;

@end
