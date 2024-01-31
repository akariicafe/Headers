@class NSCountedSet, NSString, NSMutableDictionary, REElementRelevanceEngine, REUpNextScheduler, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface RELiveElementCoordinator : REElementCoordinator <REElementDataSourceControllerDelegate, REElementRelevanceEngineDelegate, REElementDataSourceActivityDelegate, REDataSourceManagerObserver> {
    REElementRelevanceEngine *_relevanceEngine;
    NSMutableDictionary *_elementIdElementMap;
    REUpNextScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_controllerQueue;
    unsigned long long _scheduleCount;
    BOOL _reloadImmediately;
    NSCountedSet *_remainingInsertOperations;
    NSCountedSet *_remainingRemoveOperations;
    unsigned long long _currentReloadTryCount;
    NSMutableSet *_refreshedElements;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeElement:(id)a0;
- (void)relevanceEngine:(id)a0 didInsertElement:(id)a1 atPath:(id)a2;
- (void)relevanceEngine:(id)a0 didMoveElement:(id)a1 fromPath:(id)a2 toPath:(id)a3;
- (void)relevanceEngine:(id)a0 didRemoveElement:(id)a1 atPath:(id)a2;
- (id)predictionForElement:(id)a0;
- (void)_queue_reload;
- (id)initWithRelevanceEngine:(id)a0;
- (id)predictionForElementAtPath:(id)a0;
- (void)_onqueue_async:(id /* block */)a0;
- (void)_enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)_enumerateSectionsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_predictionForElement:(id)a0;
- (void)_queue_addElement:(id)a0 toSection:(id)a1;
- (void)_queue_refreshElement:(id)a0;
- (void)_queue_reloadElement:(id)a0;
- (void)_queue_removeElement:(id)a0;
- (void)_queue_scheduleContentUpdate:(BOOL)a0;
- (void)addElement:(id)a0 toSection:(id)a1;
- (void)dataSource:(id)a0 didBeginActivity:(id)a1;
- (void)dataSource:(id)a0 didFinishActivity:(id)a1;
- (void)dataSourceManager:(id)a0 didLoadDataSourceController:(id)a1;
- (void)dataSourceManager:(id)a0 willUnloadDataSourceController:(id)a1;
- (void)elementDataSourceController:(id)a0 didAddElement:(id)a1 toSection:(id)a2;
- (void)elementDataSourceController:(id)a0 didRefreshElement:(id)a1;
- (void)elementDataSourceController:(id)a0 didReloadElement:(id)a1;
- (void)elementDataSourceController:(id)a0 didRemoveElement:(id)a1;
- (BOOL)elementDataSourceController:(id)a0 isElementVisible:(id)a1;
- (void)elementDataSourceController:(id)a0 performBatchUpdates:(id /* block */)a1;
- (id)elementForElementId:(id)a0;
- (id)elementRankerForSection:(id)a0;
- (id)elementRelevanceEngine;
- (id)featureMapForElement:(id)a0 trainingContext:(id)a1;
- (id)featureMapForElementId:(id)a0 trainingContext:(id)a1;
- (id)featureProviderForElement:(id)a0;
- (id)featureProviderForElementAtPath:(id)a0;
- (void)relevanceEngine:(id)a0 didUpdateRelevanceOfElement:(id)a1;
- (void)relevanceEngine:(id)a0 elementWasAdded:(id)a1;
- (void)relevanceEngine:(id)a0 elementWasRemoved:(id)a1;
- (void)relevanceEngine:(id)a0 performedBatchUpdates:(id /* block */)a1;

@end
