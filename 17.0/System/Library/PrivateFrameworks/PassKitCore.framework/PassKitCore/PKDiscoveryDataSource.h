@class AMSMetrics, NSArray, NSString, NSObject, PKDiscoveryService;
@protocol PKDiscoveryDataSourceDelegate, OS_dispatch_queue;

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver> {
    PKDiscoveryService *_discoveryService;
    AMSMetrics *_AMPMetrics;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _articleLayoutsLock;
    NSArray *_articleLayouts;
    BOOL _updatingArticles;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak, nonatomic) id<PKDiscoveryDataSourceDelegate> delegate;
@property (retain, nonatomic) NSArray *articleLayouts;
@property (nonatomic, getter=isMiniCardsAllowed) BOOL miniCardsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_addDismissActionToArticleLayouts:(id)a0;
- (id)_articleLayoutForItemIdentifier:(id)a0;
- (void)_manifestAllowsMiniCardsWithCompletion:(id /* block */)a0;
- (BOOL)_queue_updateArticleLayouts:(id)a0;
- (void)_updateArticlesWithCompletion:(id /* block */)a0;
- (id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)a0;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)discoveryService:(id)a0 completedCTAForItem:(id)a1;
- (void)discoveryService:(id)a0 receivedUpdatedDiscoveryArticleLayouts:(id)a1;
- (void)displayedDiscoveryItem:(id)a0 isWelcomeCard:(BOOL)a1 afterSwipingToCard:(BOOL)a2 multipleStoryCardsAvailable:(BOOL)a3 callToAction:(long long)a4 cardSize:(long long)a5;
- (void)tappedDiscoveryItem:(id)a0 callToAction:(id)a1 cardSize:(long long)a2;
- (void)updateArticleLayouts;

@end
