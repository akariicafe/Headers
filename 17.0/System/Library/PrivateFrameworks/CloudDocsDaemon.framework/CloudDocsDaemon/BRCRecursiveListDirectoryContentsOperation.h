@class BRCItemID, BRCListDirectoryContentsOperation, NSMutableSet, BRCServerZone, NSMutableArray;

@interface BRCRecursiveListDirectoryContentsOperation : BRCAutoCancelOperation <BRCListOperationDelegate> {
    BRCServerZone *_serverZone;
    NSMutableSet *_itemsToList;
    BRCItemID *_rootItemID;
    BRCListDirectoryContentsOperation *_activeListOp;
    NSMutableSet *_itemsFailedListing;
    NSMutableArray *_recursiveListCompletionBlocks;
}

@property (nonatomic) BOOL rescheduleApply;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_finishIfBlockedFromListing;
- (void)addRecursiveDirectoryListCompletionBlock:(id /* block */)a0;
- (void)fetchNextItemToList;
- (id)initWithItemID:(id)a0 zone:(id)a1 isUserWaiting:(BOOL)a2;
- (void)listNextItem;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (void)listOrFetchNextItem;

@end
