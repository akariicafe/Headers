@class MessageListItemHelper, UICollectionView, EFLocked, NSObject, EFPromise, MessageListCollectionHelper, MessageListViewControllerState, MessageListThreadHelper, MessageListCellLayoutValuesHelper, NSString, EMMessageList, NSSet, EMCachingContactStore, NSMutableSet, EMObjectID;
@protocol MessageListSectionDataSourceProvider, OS_os_log, MessageListSectionDataSourceSelectionModelProvider, EFCancelable, MessageListSectionDataSourceDelegate;

@interface MessageListSectionDataSource : NSObject <MessageListThreadHelperDelegate, EMMessageListChangeObserver, MessageListCellDisclosureDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timedOutItemIDsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _nextUpdateNeedsCleanSnapshotLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _isRefreshingLock;
    BOOL _shouldAlertOnBlankCell;
}

@property (retain, nonatomic) EFPromise *initialLoadCompletedPromise;
@property (retain, nonatomic) EFLocked *failedItemIDs;
@property (retain, nonatomic) NSMutableSet *timedOutItemIDs;
@property (nonatomic) BOOL hasReloadedForTimeOut;
@property (nonatomic) BOOL nextUpdateNeedsCleanSnapshot;
@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) id<EFCancelable> shouldAlertOnBlankCellToken;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) Class listCellClass;
@property (retain, nonatomic) EMMessageList *messageList;
@property (retain, nonatomic) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (retain, nonatomic) MessageListThreadHelper *threadHelper;
@property (retain, nonatomic) MessageListItemHelper *itemHelper;
@property (retain, nonatomic) MessageListCollectionHelper *collectionHelper;
@property (retain, nonatomic) MessageListViewControllerState *state;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_os_log> *signpostLog;
@property (readonly, nonatomic) EMObjectID *objectID;
@property (readonly, nonatomic) NSString *section;
@property (weak, nonatomic) id<MessageListSectionDataSourceDelegate> delegate;
@property (weak, nonatomic) id<MessageListSectionDataSourceProvider> provider;
@property (weak, nonatomic) id<MessageListSectionDataSourceSelectionModelProvider> selectionModelProvider;
@property (readonly, copy) NSSet *expandedThreadItemIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeWithCount:(long long)a0;
+ (BOOL)isEmptyChange:(id)a0;
+ (BOOL)isFirstChange:(id)a0;
+ (BOOL)isValidChange:(id)a0;
+ (id)publicDescriptionForChange:(id)a0;
+ (id)skippedChange;

- (void)stopObserving;
- (void)dealloc;
- (void)refresh;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)reconfigureItemsAtIndexPaths:(id)a0;
- (void)collection:(id)a0 addedItemIDs:(id)a1 before:(id)a2;
- (void)collectionDidFinishInitialLoad:(id)a0;
- (void)collection:(id)a0 movedItemIDs:(id)a1 before:(id)a2;
- (void)didFinishRecoveryForCollection:(id)a0;
- (void)collection:(id)a0 addedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 changedItemIDs:(id)a1;
- (void)collection:(id)a0 deletedItemIDs:(id)a1;
- (void)collection:(id)a0 movedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 replacedExistingItemID:(id)a1 withNewItemID:(id)a2;
- (void)didFinishRemoteSearchForCollection:(id)a0;
- (void)collection:(id)a0 addedItemIDs:(id)a1 toThreadWithItemID:(id)a2 after:(id)a3 unreadItemIDs:(id)a4;
- (void)collection:(id)a0 addedItemIDs:(id)a1 toThreadWithItemID:(id)a2 before:(id)a3 unreadItemIDs:(id)a4;
- (void)collection:(id)a0 changedItemIDs:(id)a1 itemIDsWithCountChanges:(id)a2;
- (void)collection:(id)a0 didFinishInitialLoadForThreadWithItemID:(id)a1;
- (void)collection:(id)a0 oldestItemsUpdatedForMailboxes:(id)a1;
- (id)configuredCollectionViewCellForCollectionView:(id)a0 indexPath:(id)a1 itemID:(id)a2;
- (void)_addedItemIDs:(id)a0 before:(BOOL)a1 existingItemID:(id)a2 toThreadWithItemID:(id)a3 inCollection:(id)a4;
- (void)_configureCell:(id)a0 atIndexPath:(id)a1 itemID:(id)a2;
- (void)_deleteItemsWithIDs:(id)a0 fromCollection:(id)a1 useImmediateCompletion:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_enumerateItemIDs:(id)a0 block:(id /* block */)a1;
- (void)_maybeReloadForTimedOutItemIDs;
- (void)_performDataSourceUpdateAnimated:(BOOL)a0 cleanSnapshot:(BOOL)a1 prepare:(id /* block */)a2 update:(id /* block */)a3 completion:(id /* block */)a4;
- (id)_preparedMessageListItemIDs;
- (void)_recoverFailedItemIDsForCollection:(id)a0 completion:(id /* block */)a1;
- (void)_recoverFailedItemIDsForCollection:(id)a0 excluding:(id)a1 completion:(id /* block */)a2;
- (void)_reloadItemsWithItemIDs:(id)a0;
- (void)_reloadPreparedItemIDsForCollection:(id)a0 completion:(id /* block */)a1;
- (void)_updateSelectionStateForItemsWithIDs:(id)a0 inThreadWithItemID:(id)a1 snapshot:(id)a2 shouldDeselectMessages:(BOOL)a3;
- (void)applyFilterPredicate:(id)a0 ignoreMessagesPredicate:(id)a1;
- (void)beginObservingAnimated:(BOOL)a0 cleanSnapshot:(BOOL)a1;
- (id)configuredReusableSupplementaryViewForCollectionView:(id)a0 elementKind:(id)a1 indexPath:(id)a2;
- (void)deleteItemsWithIDs:(id)a0 useImmediateCompletion:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)didScheduleReadInteractionForItemID:(id)a0;
- (void)didSelectDisclosureButtonForMessageListItem:(id)a0 disclosureEnabled:(BOOL)a1;
- (BOOL)hasSupplementaryViewOfKind:(id)a0;
- (id)initWithIdentifier:(id)a0 section:(id)a1 collectionView:(id)a2 listCellClass:(Class)a3 messageList:(id)a4 initialLoadCompletedPromise:(id)a5 layoutValuesHelper:(id)a6 state:(id)a7;
- (id)itemIDsInExpandedThread:(id)a0;
- (id)messageListItemForItemID:(id)a0 indexPath:(id)a1 receiver:(id)a2 completion:(id /* block */)a3;
- (BOOL)messageListItemHelper:(id)a0 anyExpandedThreadContainsItemID:(id)a1;
- (BOOL)messageListItemHelper:(id)a0 isItemIDExpandedThread:(id)a1;
- (BOOL)messageListItemHelper:(id)a0 isItemIDSelected:(id)a1;
- (void)messageListThreadHelper:(id)a0 didCollapseMessageListItem:(id)a1;
- (void)messageListThreadHelper:(id)a0 didExpandMessageListItem:(id)a1;
- (id)relatedItemIDsForSelectedItemID:(id)a0 snapshot:(id)a1;
- (void)replaceMessageList:(id)a0 initialLoadCompletedPromise:(id)a1;
- (BOOL)shouldAlwaysShowSupplementaryViewOfKind:(id)a0;
- (id)threadItemIDForItemInExpandedThread:(id)a0;

@end
