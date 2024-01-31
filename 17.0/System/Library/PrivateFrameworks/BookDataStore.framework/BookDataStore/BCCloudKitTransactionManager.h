@class BCCloudKitController, NSMutableDictionary, BDSServiceProxy, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BCCloudKitTransactionManager : NSObject <BCCloudKitTransactionDelegate, BCCloudKitTransactionManagerService>

@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *transactions;
@property (retain, nonatomic) NSMutableDictionary *transactionCompletionCallbacks;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCloudKitController:(id)a0;
- (void)signalDataChangeTransactionForEntityName:(id)a0 notificationName:(id)a1;
- (void)signalFetchChangesTransaction:(id)a0;
- (void)signalFetchChangesTransactionInService:(id)a0;
- (void)signalSyncToCKTransactionForEntityName:(id)a0 syncManager:(id)a1;
- (void)signalSyncToCKTransactionForEntityName:(id)a0 syncManager:(id)a1 completion:(id /* block */)a2;
- (void)transactionCompleted:(id)a0;

@end
