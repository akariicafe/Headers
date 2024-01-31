@class NSMutableSet;

@interface MessageListThreadHelper : MessageListItemHelper {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemIDsNeedingReloadLock;
}

@property (retain, nonatomic) NSMutableSet *collapsingItemIDs;
@property (retain, nonatomic) NSMutableSet *expandingItemIDs;
@property (retain, nonatomic) NSMutableSet *itemIDsNeedingReloadPostUpdate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)_isNextItemAnExpandedItemID:(id)a0 snapshot:(id)a1;
- (BOOL)_isNextItemAnExpandedThreadItemID:(id)a0 snapshot:(id)a1;
- (void)addExpandingThreadWithItemID:(id)a0;
- (void)addItemIDsNeedingReloadPostUpdate:(id)a0;
- (void)collapseMessageListItem:(id)a0;
- (id)collapsingOrExpandingItemIDs;
- (void)expandMessageListItem:(id)a0;
- (BOOL)isThreadExpandingWithItemID:(id)a0;
- (id)itemIDsForReloadAfterDeletingItemIDs:(id)a0 snapshot:(id)a1;
- (id)itemIDsForReloadAfterInsertingItemsAfterItemID:(id)a0 snapshot:(id)a1;
- (id)itemIDsInExpandedThread:(id)a0 snapshot:(id)a1;
- (BOOL)needsFlushSeparatorForItemID:(id)a0 snapshot:(id)a1;
- (id)popItemIDsNeedingReloadPostUpdate;
- (void)removeExpandingThreadWithItemID:(id)a0;
- (long long)styleForMessageListItem:(id)a0;
- (id)threadItemIDForItemInExpandedThread:(id)a0 snapshot:(id)a1;

@end
