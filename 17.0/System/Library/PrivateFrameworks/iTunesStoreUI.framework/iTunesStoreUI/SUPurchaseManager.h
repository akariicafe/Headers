@class NSMutableArray, NSString, NSDictionary, NSMutableSet, SSEventMonitor, NSNumber, SUQueueSessionManager;
@protocol SUPurchaseManagerDelegate;

@interface SUPurchaseManager : NSObject <SSPurchaseRequestDelegatePrivate, SSEventMonitorDelegate, SUContinuationDelegate, SSDownloadManagerObserver, SSPurchaseRequestDelegate> {
    SSEventMonitor *_eventMonitor;
    NSMutableSet *_inflightContinuations;
    NSMutableArray *_observedDownloadManagers;
    NSMutableArray *_pendingContinuations;
    NSMutableArray *_pendingPurchases;
    NSMutableArray *_purchaseRequests;
    BOOL _showingErrorDialogs;
    long long _updatesCount;
    BOOL _waitingForAuthentication;
}

@property (nonatomic) id<SUPurchaseManagerDelegate> delegate;
@property (retain, nonatomic) SUQueueSessionManager *queueSessionManager;
@property (copy, nonatomic) NSNumber *accountDSID;
@property (copy, nonatomic) NSDictionary *tidHeaders;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) long long numberOfPendingPurchases;
@property (readonly, nonatomic) NSMutableSet *futurePurchases;
@property (readonly, nonatomic) NSMutableSet *purchasedItemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)endUpdates;
- (id)init;
- (void)dealloc;
- (void)requestDidFinish:(id)a0;
- (void)beginUpdates;
- (void)eventMonitor:(id)a0 receivedEventWithName:(id)a1 userInfo:(id)a2;
- (void)purchaseRequest:(id)a0 purchaseDidFail:(id)a1 withError:(id)a2;
- (void)purchaseRequest:(id)a0 purchaseDidSucceed:(id)a1;
- (void)purchaseRequest:(id)a0 purchaseDidSucceedWithResponse:(id)a1;
- (void)_removePlaceholdersForPurchase:(id)a0;
- (void)addExternalDownloads:(id)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (id)_accountDSIDForPurchase:(id)a0;
- (void)_addBatchForPurchases:(id)a0 options:(id)a1;
- (void)_dialogDidFinish:(id)a0;
- (id)_downloadManagerForDownloadKind:(id)a0;
- (void)_enqueueContinuations:(id)a0;
- (void)_enqueueExternalDownload:(id)a0;
- (void)_enqueuePurchases:(id)a0;
- (BOOL)_issuePurchaseRequestForPurchases:(id)a0;
- (BOOL)_needsAuthenticationForPurchases:(id)a0;
- (id)_newDictionaryForWebScriptValue:(id)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (id)_newExternalDownloadWithDictionary:(id)a0;
- (id)_newExternalDownloadWithDownloadDictionary:(id)a0;
- (id)_newExternalDownloadWithItemDictionary:(id)a0;
- (id)_newPurchaseBatchForPurchases:(id)a0;
- (void)_performNextAction;
- (void)_removePurchaseRequest:(id)a0;
- (void)_schedulePurchaseCallback:(id)a0 forPurchases:(id)a1;
- (void)_showDialogsForErrors:(id)a0;
- (void)_startContinuations:(id)a0;
- (void)_startPurchases:(id)a0;
- (void)addExternalDownloads:(id)a0 withOptions:(id)a1 inContext:(struct OpaqueJSContext { } *)a2;
- (void)addFuturePurchase:(id)a0;
- (BOOL)addPurchaseBatch:(id)a0;
- (void)addPurchasedItemIdentifier:(unsigned long long)a0;
- (void)addPurchasedItemIdentifiers:(id)a0;
- (void)cancelFuturePurchase:(id)a0;
- (void)continuation:(id)a0 failedWithError:(id)a1;
- (void)continuationFinished:(id)a0;
- (id)copyPurchaseForScriptObject:(id)a0;
- (id)copyPurchaseForScriptObject:(id)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (void)enqueueScriptPurchases:(id)a0;
- (BOOL)itemIdentifierIsPurchased:(unsigned long long)a0;
- (BOOL)itemIdentifierIsPurchasing:(unsigned long long)a0;
- (id)newPurchaseBatchForItems:(id)a0 offers:(id)a1;
- (void)purchaseScriptObject:(id)a0;
- (void)purchaseScriptObject:(id)a0 withOptions:(id)a1 inContext:(struct OpaqueJSContext { } *)a2;
- (void)removePurchasedItemIdentifier:(unsigned long long)a0;

@end
