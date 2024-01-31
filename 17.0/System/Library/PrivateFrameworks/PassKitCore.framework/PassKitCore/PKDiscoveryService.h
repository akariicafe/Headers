@class NSObject, NSHashTable, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKDiscoveryService : NSObject <PKDiscoveryServiceExportedInterface> {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)observers;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)beginReporingDiscoveryAnalytics;
- (void)discoveryArticleLayoutsUpdated:(id)a0;
- (void)completedCTAForItem:(id)a0;
- (void)completedDiscoveryItemCTAWithCompletion:(id /* block */)a0;
- (void)deleteRuleWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dialogRequestsChangedForPlacement:(id)a0;
- (void)dialogRequestsForPlacement:(id)a0 completion:(id /* block */)a1;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)discoveryArticleLayoutsWithCompletion:(id /* block */)a0;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)a0 active:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)discoveryEngagementMessagesUpdated;
- (void)discoveryItemWithIdentifier:(id)a0 callToAction:(long long)a1 isScrollable:(BOOL)a2;
- (void)discoveryItemWithIdentifier:(id)a0 callToAction:(long long)a1 wasScrolledToTheBottom:(BOOL)a2;
- (void)discoveryItemWithIdentifier:(id)a0 launchedWithReferralSource:(unsigned long long)a1;
- (void)discoveryItemsWithCompletion:(id /* block */)a0;
- (void)dismissedDiscoveryItemWithIdentifier:(id)a0 callToAction:(long long)a1 cardSize:(long long)a2;
- (void)dismissedDiscoveryItems:(id /* block */)a0;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)a0;
- (void)displayedDiscoveryItemWithIdentifier:(id)a0 isWelcomeCard:(BOOL)a1 afterSwipingToCard:(BOOL)a2 multipleStoryCardsAvailable:(BOOL)a3 callToAction:(long long)a4 cardSize:(long long)a5;
- (void)endReporingDiscoveryAnalytics;
- (id /* block */)errorHandlerForMethod:(SEL)a0 completion:(id /* block */)a1;
- (void)evaluateRulesWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)expandedDiscoveryItemWithIdentifier:(id)a0 callToAction:(long long)a1 afterSwipingToCard:(BOOL)a2 multipleStoryCardsAvailable:(BOOL)a3 cardSize:(long long)a4;
- (void)fetchUserProperties:(id)a0 withParameters:(id)a1 completion:(id /* block */)a2;
- (void)fireEngagementEventNamed:(id)a0 completion:(id /* block */)a1;
- (void)insertDiscoveryEngagementMessages:(id)a0 completion:(id /* block */)a1;
- (void)insertDiscoveryItems:(id)a0 discoveryArticleLayouts:(id)a1 completion:(id /* block */)a2;
- (void)insertRule:(id)a0 completion:(id /* block */)a1;
- (void)manifestAllowsMiniCardsWithCompletion:(id /* block */)a0;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(id /* block */)a0;
- (void)removeDiscoveryMessageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeDiscoveryUserNotificationsWithCompletion:(id /* block */)a0;
- (void)removedAllDiscoveryItems;
- (void)rulesWithCompletion:(id /* block */)a0;
- (void)tappedDiscoveryItemWithIdentifier:(id)a0 callToAction:(long long)a1 cardSize:(long long)a2;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)a0 forAction:(long long)a1 completion:(id /* block */)a2;
- (void)updateDiscoveryItemWithIdentifier:(id)a0 forAction:(long long)a1 completion:(id /* block */)a2;
- (void)updateDiscoveryManifestWithCompletion:(id /* block */)a0;
- (long long)welcomeCardCount;

@end
