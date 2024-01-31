@class NSString, NSXPCConnection;

@interface DTStoreKitService : DTXService <ASDOctaneClientProtocol> {
    NSXPCConnection *_connectionToDaemon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;
+ (BOOL)_commandRequiresBundleID:(unsigned long long)a0;
+ (id)_dataUsingCompatibilityTimeRateFrom:(id)a0 currentVersion:(int)a1;
+ (void)_sendMessage:(id)a0 onConnection:(id)a1 completion:(id /* block */)a2;
+ (void)removeConfigurationDataForBundleID:(id)a0 connection:(id)a1 completion:(id /* block */)a2;
+ (void)syncConfigurationData:(id)a0 forBundleID:(id)a1 connection:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxy:(id *)a0;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (void)transactionDeleted:(unsigned long long)a0 forBundleID:(id)a1;
- (void)transactionUpdated:(id)a0 forBundleID:(id)a1;
- (id)_descriptionForServiceCommand:(unsigned long long)a0;
- (void)_disconnectServiceConnection;
- (BOOL)_handleBuyProductMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleChangeAutoRenewStatusMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleCompleteAskToBuyTransactionMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleDeleteAllTransactionsMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleDiscoverAppsMessage:(id)a0 error:(id *)a1;
- (BOOL)_handleFetchTransactionsMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleGetConfigurationMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleObserveTransactionsMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleRemoveConfigurationMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleSyncConfigurationMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_handleUpdateTransactionMessage:(id)a0 forBundleID:(id)a1 error:(id *)a2;
- (BOOL)_processMessage:(id)a0 error:(id *)a1;
- (void)_sendGenericSuccessResponseForMessage:(id)a0;
- (void)receiveEventOfType:(long long)a0 eventData:(id)a1 identifier:(id)a2;

@end
