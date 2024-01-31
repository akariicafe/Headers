@class NSString, NSMapTable, NSHashTable;

@interface SKClientBroker : NSObject <SKClientProtocol> {
    NSMapTable *_clients;
    NSHashTable *_subscriptionStatusListeners;
    NSHashTable *_storefrontListeners;
    NSHashTable *_transactionListeners;
    NSHashTable *_messageListeners;
    NSHashTable *_purchaseIntentListeners;
    NSString *_storefrontIdentifier;
    int _storefrontChangedToken;
    int _unfinishedTransactionsToken;
    int _receivedPurchaseIntentsToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultBroker;

- (void)storefrontChanged:(id)a0;
- (void)removedTransactions:(id)a0;
- (id)init;
- (void)dealloc;
- (void)unregisterStorefrontListener:(id)a0;
- (void)unregisterMessageListener:(id)a0;
- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)downloadAdded:(id)a0;
- (void)unregisterSubscriptionStatusListener:(id)a0;
- (void)receivedTransactions:(id)a0;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)registerStorefrontListener:(id)a0;
- (void)registerPurchaseIntentsListener:(id)a0;
- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (id)_unfinishedTransactionsNotificationName;
- (void)updatedTransactions:(id)a0;
- (void)unregisterClientWithIdentifier:(id)a0;
- (void)_handleUnfinishedTransactionsNotification;
- (void)registerMessageListener:(id)a0;
- (void)_storefrontObserverRemoved;
- (void)_purchaseIntentObserverRemoved;
- (void)_checkStorefrontChangedNotify:(BOOL)a0;
- (void)registerSubscriptionStatusListener:(id)a0;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)hasAnyMessageListenersWithReply:(id /* block */)a0;
- (void)_purchaseIntentObserverAdded;
- (void).cxx_destruct;
- (void)askToShowMessageWithReplyBlock:(id /* block */)a0;
- (void)unregisterTransactionListener:(id)a0;
- (void)receivedPurchaseIntentsForProductIdentifiers:(id)a0;
- (void)pendingMessages:(id)a0;
- (void)downloadRemoved:(id)a0;
- (void)receivedStatuses:(id)a0;
- (void)_cancelNotifyTokenIfValid:(int)a0;
- (BOOL)hasTransactionListener;
- (void)registerTransactionListener:(id)a0;
- (void)unregisterPurchaseIntentsListener:(id)a0;
- (void)_checkForPendingPurchaseIntents;
- (void)_storefrontObserverAdded;

@end
