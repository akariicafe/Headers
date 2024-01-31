@class NSString, NSMutableArray, FPItemCollection;
@protocol FPItemCollectionIndexPathBasedDelegate;

@interface DOCItemCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate>

@property (retain) FPItemCollection *itemCollection;
@property (retain) NSMutableArray *subscribers;
@property (retain) NSMutableArray *delegates;
@property (retain) id<FPItemCollectionIndexPathBasedDelegate> soleUpdatableDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)addSubscriber:(id /* block */)a0;
- (void)removeSubscriber:(id)a0;
- (id)initWithItemCollection:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collection:(id)a0 didDeleteItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)collection:(id)a0 didMoveItemsFromIndexPaths:(id)a1 toIndexPaths:(id)a2;
- (void)collection:(id)a0 didPerformBatchUpdateWithReplayBlock:(id /* block */)a1;
- (void)collection:(id)a0 didUpdateItemsAtIndexPaths:(id)a1 changes:(id)a2;
- (id)__delegates;
- (void)_enumerateItemCollectionIndexPathBasedDelegatesWithBlock:(id /* block */)a0;
- (void)_purgeOrphanedContainers;
- (void)addItemCollectionDelegate:(id)a0;
- (void)notifySubscribers;
- (void)removeItemCollectionDelegate:(id)a0;

@end
