@class NSHashTable, NSString, PXSectionedDataSource, PXSectionedChangeDetailsRepository, PXUpdater, PXSectionedSelectionManager, NSObject, PXSectionedDataSourceManager, PXSelectionSnapshot, PXFeedViewLayoutSpecManager;
@protocol PXFeedViewActionPerformer, PXFeedViewLayoutSpec, PXFeedItemLayoutFactory, PXFeedPlaceholderFactory, PXAnonymousViewController, OS_dispatch_queue, PXAssetCollectionActionPerformerDelegate;

@interface PXFeedViewModel : PXObservable <PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSHashTable *accessoryTapToRadarDiagnosticsProviders;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *dataSourceChangeHistory;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) id<PXFeedViewLayoutSpec> spec;
@property (readonly, weak, nonatomic) id<PXFeedViewActionPerformer> actionPerformer;
@property (readonly, weak, nonatomic) id<PXAssetCollectionActionPerformerDelegate> assetCollectionActionPerformerDelegate;
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (readonly, nonatomic) id<PXFeedItemLayoutFactory> itemLayoutFactory;
@property (readonly, nonatomic) id<PXFeedPlaceholderFactory> placeholderFactory;
@property (readonly, nonatomic) PXFeedViewLayoutSpecManager *specManager;
@property (readonly, nonatomic) BOOL wantsEmbeddedScrollView;
@property (readonly, copy, nonatomic) id /* block */ visibleRectChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (void)setSelectionSnapshot:(id)a0;
- (void)_updateDataSource;
- (void)_invalidateSelectionSnapshot;
- (void)setIsActive:(BOOL)a0;
- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setActionPerformer:(id)a0;
- (void)didPerformChanges;
- (void)setPresentingViewController:(id)a0;
- (void)_setNeedsUpdate;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)setSpec:(id)a0;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateDataSource;
- (void)setDataSource:(id)a0;
- (void)_invalidateSpec;
- (void)_updateSelectionSnapshot;
- (void)_updateSpec;
- (id)initWithDataSourceManager:(id)a0 specManager:(id)a1 itemLayoutFactory:(id)a2 placeholderFactory:(id)a3 wantsEmbeddedScrollView:(BOOL)a4 visibleRectChangeObserver:(id /* block */)a5;
- (id)initWithFeedViewConfiguration:(id)a0;
- (void)registerAccessoryTapToRadarDiagnosticsProvider:(id)a0;
- (void)setAssetCollectionActionPerformerDelegate:(id)a0;

@end
