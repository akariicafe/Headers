@class NSSet, NSMutableSet, NSMapTable;
@protocol WBSHistoryStore;

@interface WBSHistoryDeletionPlan : NSObject {
    id<WBSHistoryStore> _store;
    NSSet *_excludedItems;
    NSSet *_excludedVisits;
}

@property (readonly, nonatomic) NSSet *triggeringItems;
@property (readonly, nonatomic) NSSet *triggeringVisits;
@property (readonly, nonatomic) NSMutableSet *discoveredItemsToDelete;
@property (readonly, nonatomic) NSSet *discoveredVisitsToDelete;
@property (readonly, nonatomic) NSSet *allItemsToDelete;
@property (readonly, nonatomic) NSSet *allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property (readonly, nonatomic) NSMapTable *allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property (readonly, nonatomic) NSMapTable *updatedLastVisitsByItem;
@property (readonly, nonatomic) BOOL wasPrepared;

- (void).cxx_destruct;
- (id)initWithSQLiteStore:(id)a0 discoveredItemsToDelete:(id)a1;
- (id)initWithSQLiteStore:(id)a0 triggeringItems:(id)a1 excludingItems:(id)a2 visits:(id)a3 reason:(long long)a4;
- (id)initWithSQLiteStore:(id)a0 triggeringVisits:(id)a1 excludingItems:(id)a2 visits:(id)a3;
- (id)initWithSQLiteStore:(id)a0 triggeringVisits:(id)a1 updatedLastVisitsByItem:(id)a2;

@end
