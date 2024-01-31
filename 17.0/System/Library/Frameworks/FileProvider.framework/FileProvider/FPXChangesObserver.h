@class NSString, NSMutableArray, NSData;

@interface FPXChangesObserver : FPXObserver <NSFileProviderChangeObserver> {
    NSMutableArray *_changedItems;
    NSMutableArray *_deletedItemIDs;
    NSData *_originalSyncAnchor;
}

@property (copy) id /* block */ finishedBlock;
@property (nonatomic) long long suggestedBatchSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 nsFileProviderRequest:(id)a2;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)a0 moreComing:(BOOL)a1;
- (void)didUpdateItems:(id)a0;
- (void).cxx_destruct;
- (void)didDeleteItemsWithIdentifiers:(id)a0;
- (void)finishEnumeratingWithError:(id)a0;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 previousChangeToken:(id)a2 nsFileProviderRequest:(id)a3;

@end
