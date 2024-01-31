@class NSString, NSHashTable, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, OS_os_transaction, BSInvalidatable;

@interface CRSSessionService : NSObject <CRSSessionClientToServerInterface, BSServiceConnectionListenerDelegate>

@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSHashTable *connections;
@property (retain, nonatomic) NSObject<OS_os_transaction> *idleExitTransaction;
@property (retain, nonatomic) id<BSInvalidatable> watchdogMonitoringAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)a0;
- (void)_connectionQueue_removeConnection:(id)a0;

@end
