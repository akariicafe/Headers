@class TrackedMessageListItems, NSArray, NSString, NSMutableSet, EFDebouncer, EFFuture, EMMailbox;
@protocol EFCancelable, MessageListSelectionModelDataSource, MessageListSelectionModelDelegate;

@interface MessageListSelectionModel : NSObject <EFPubliclyDescribable>

@property (weak, nonatomic) id<MessageListSelectionModelDataSource> dataSource;
@property (weak, nonatomic) id<MessageListSelectionModelDelegate> delegate;
@property (nonatomic) long long type;
@property (retain, nonatomic) TrackedMessageListItems *trackedItems;
@property (retain, nonatomic) NSMutableSet *itemIDsPendingConfiguration;
@property (retain, nonatomic) NSMutableSet *itemIDsMissingMessageListItem;
@property (retain, nonatomic) NSArray *trackedMailboxes;
@property (nonatomic) long long trackedItemsCount;
@property (nonatomic) long long trackedItemsWillMoveToTrash;
@property (nonatomic) long long trackedItemsArchiveByDefault;
@property (nonatomic) long long trackedItemsSupportArchiving;
@property (retain, nonatomic) EFDebouncer *predictionDebouncer;
@property (retain, nonatomic) EFFuture *mailboxPredictionFuture;
@property (nonatomic) BOOL shouldRestoreSelection;
@property (readonly, nonatomic) long long preserveSelectionTimeout;
@property (retain, nonatomic) id<EFCancelable> restoreSelectionCancelable;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL isSelectAll;
@property (readonly, nonatomic) BOOL isSelectionValid;
@property (readonly, nonatomic) EMMailbox *predictedMoveMailbox;
@property (nonatomic, getter=isMultipleSelectionActive) BOOL multipleSelectionActive;
@property (readonly, nonatomic) NSMutableSet *itemsToDeselectAfterMultipleSelection;
@property (nonatomic, getter=isPerformingDataSourceUpdates) BOOL performingDataSourceUpdates;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearAll;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (id)itemIDs;
- (id)currentMessageListItemSelection;
- (void)__updatePredictionWithSelection:(id)a0;
- (BOOL)_allChildrenSelected:(id)a0;
- (void)_scheduleMailboxPredictionUpdate;
- (BOOL)_trackItemIDs:(id)a0 updateCount:(BOOL)a1;
- (void)_untrackAllItemIDs;
- (BOOL)_untrackItemIDs:(id)a0 updateCount:(BOOL)a1;
- (id)cascadedItemIDsForItemID:(id)a0 isSelecting:(BOOL)a1;
- (void)configureSelectionForItemID:(id)a0;
- (unsigned long long)deleteSelectionState;
- (id)deselectItemWithItemID:(id)a0;
- (void)didExpandThreadItemID:(id)a0 addedItemIDs:(id)a1;
- (void)disableSelectAll;
- (void)enableSelectAllWithMailboxes:(id)a0;
- (BOOL)isSelectedItemID:(id)a0;
- (id)itemIDsToUnselectForItemID:(id)a0;
- (void)preserveSelection;
- (id)selectItemWithItemID:(id)a0;
- (id)selectionWithMessageListItems:(id)a0 mailboxes:(id)a1;
- (void)willCollapseThreadItemID:(id)a0;

@end
