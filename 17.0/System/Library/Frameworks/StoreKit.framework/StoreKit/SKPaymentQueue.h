@class NSArray, SKStorefront, SKPaymentQueueClient;
@protocol SKPaymentQueueDelegate;

@interface SKPaymentQueue : NSObject {
    id _internal;
}

@property (readonly, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKPaymentQueueDelegate> delegate;
@property (readonly, nonatomic) SKStorefront *storefront;
@property (readonly, nonatomic) NSArray *transactionObservers;
@property (readonly, nonatomic) NSArray *transactions;

+ (BOOL)canMakePayments;
+ (id)defaultQueue;

- (void)storefrontChanged:(id)a0;
- (void)removedTransactions:(id)a0;
- (id)init;
- (void)resumeDownloads:(id)a0;
- (void)dealloc;
- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)cancelDownloads:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)downloadAdded:(id)a0;
- (void)updatedTransactions:(id)a0;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)askToShowMessageWithReplyBlock:(id /* block */)a0;
- (void)receivedPurchaseIntentsForProductIdentifiers:(id)a0;
- (void)pauseDownloads:(id)a0;
- (void)downloadRemoved:(id)a0;
- (void)finishTransaction:(id)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)addPayment:(id)a0;
- (void)addTransactionObserver:(id)a0;
- (id)initWithPaymentQueueClient:(id)a0;
- (void)startDownloads:(id)a0;
- (id)_applyDownloadChangeset:(id)a0;
- (void)_checkForMessages;
- (void)_checkForPurchaseIntents;
- (void)_checkServerQueueForced:(BOOL)a0;
- (void)_completeRestoreWithMessage:(id)a0;
- (id)_copyDownloadIDsForDownloads:(id)a0;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)a0;
- (id)_copyTransactionsFromXPCArray:(id)a0;
- (void)_finishRefreshPayments;
- (void)_handleConnectionDisconnect;
- (void)_handleMessage:(id)a0 connection:(id)a1;
- (id)_initSKPaymentQueue;
- (void)_logEventWithPrimaryError:(id)a0 mappedError:(id)a1 inAppPurchaseID:(id)a2 userAction:(long long)a3;
- (void)_notifyObserversAboutChanges:(id)a0 sendUpdatedDownloads:(BOOL)a1;
- (void)_notifyObserversAboutDownloadChanges:(id)a0;
- (void)_notifyObserversAboutPurchaseIntentsForProducts:(id)a0;
- (void)_notifyObserversAboutRemovals:(id)a0;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)a0;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_processTransaction:(id)a0;
- (void)_processTransactionDict:(id)a0 forTransaction:(id)a1 error:(id)a2;
- (void)_processUpdates:(id)a0 trimUnmatched:(BOOL)a1 sendUpdatedDownloads:(BOOL)a2;
- (void)_removeLocalTransaction:(id)a0;
- (void)_removeNilTransactionObservers;
- (BOOL)_shouldContinueTransactionForMessage:(id)a0;
- (void)_updateDownloadsForMessage:(id)a0;
- (void)_updatePaymentsForMessage:(id)a0;
- (void)_updatedTransactions:(id)a0 restored:(BOOL)a1;
- (void)clearTransactions;
- (void)forceSandboxForBundleIdentifier:(id)a0 untilDate:(id)a1;
- (void)presentCodeRedemptionSheet;
- (void)removeTransactionObserver:(id)a0;
- (void)removeTransactionWithID:(unsigned long long)a0;
- (void)restoreCompletedTransactions;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)a0;
- (void)shouldContinueTransaction:(id)a0 withNewStorefront:(id)a1 replyBlock:(id /* block */)a2;
- (void)showPriceConsentIfNeeded;

@end
