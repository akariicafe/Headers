@class NSDate, NSMutableDictionary, NSMapTable, NSMutableSet, FPSpotlightQueryDescriptor, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, FPSpotlightCollectorDelegate;

@interface FPSpotlightCollector : NSObject {
    NSMutableDictionary *_itemsByBundleAndCSID;
    NSMutableDictionary *_itemsByProviderAndCollaborationIdentifier;
    BOOL _suspended;
    unsigned long long _numberOfRecoveryAttempts;
    NSDate *_lastStartOfRecovery;
    NSMapTable *_queryToMountPoint;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) NSMutableArray *queries;
@property (nonatomic, getter=isGathering) BOOL gathering;
@property (nonatomic) unsigned long long itemsOrigin;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (weak, nonatomic) id<FPSpotlightCollectorDelegate> delegate;
@property (readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor;

+ (id)processingQueue;
+ (id)_recursiveDescription;

- (void)_clear;
- (void)_removeObserver:(id)a0;
- (void)_addObserver:(id)a0;
- (id)allItems;
- (id)initWithDescriptor:(id)a0;
- (void)_start;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)suspend;
- (id)allObservers;
- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (void)_stop;
- (void)queryDidFinishGathering:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)_shouldRemoveItemsFromObserver:(id)a0;
- (id)_allItemsForMountPoint:(id)a0;
- (BOOL)_areItemsTransientFromBundleIdentifier:(id)a0;
- (id)_createQueriesForMountPoints:(id)a0;
- (id)_createQueryForMountPoint:(id)a0;
- (unsigned long long)_itemsOriginForItems:(id)a0;
- (id)_mountPointForExistingSearchQuery:(id)a0;
- (id)_mountPointsForDescriptor;
- (void)_regather;
- (void)_removeItemsForQuery:(id)a0 mountPoint:(id)a1;
- (BOOL)_shouldFilterUpdatesForObserver:(id)a0;
- (id)allItemsForObserver:(id)a0;
- (id)filterItems:(id)a0 forObserver:(id)a1 excludedItemIDs:(id *)a2;
- (BOOL)isQueryCancelled:(id)a0;
- (void)mountPointsDidChange:(id)a0;
- (void)query:(id)a0 didFinishWithError:(id)a1;
- (void)query:(id)a0 didRemoveItemsWithCSIdentifiers:(id)a1 inBundle:(id)a2;
- (void)query:(id)a0 didUpdateItems:(id)a1;
- (void)setNeedsItemsOriginUpdate;

@end
