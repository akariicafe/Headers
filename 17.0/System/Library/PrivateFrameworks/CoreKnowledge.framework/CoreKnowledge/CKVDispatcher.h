@class NSString, CKVSettings, CKVIndexManager, CKVDonateConnectionFactory, NSObject, NSXPCListener, CKVDonationManager, CKVTaskHandler;
@protocol OS_dispatch_queue, CKVAdminServiceProvider;

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    CKVIndexManager *_indexManager;
    CKVDonateConnectionFactory *_donateConnectionFactory;
    NSObject<CKVAdminServiceProvider> *_adminServiceProvider;
    CKVSettings *_settings;
    CKVTaskHandler *_taskHandler;
    CKVDonationManager *_donationManager;
}

@property (readonly, nonatomic) NSXPCListener *donateServiceListener;
@property (readonly, nonatomic) NSXPCListener *adminServiceListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDispatcher;

- (BOOL)handleDistributedNotificationEventWithName:(id)a0;
- (id)init;
- (void)runMaintenanceWithShouldDefer:(id /* block */)a0 completion:(id /* block */)a1;
- (void)registerXPCActivities;
- (id)initWithQueue:(id)a0 indexManager:(id)a1 donateConnectionFactory:(id)a2 adminServiceProvider:(id)a3 taskHandler:(id)a4 settings:(id)a5;
- (id)_listenerWithMachServiceName:(id)a0 delegate:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)handleDarwinNotificationEventWithName:(id)a0;
- (void)runMigration:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setupXPCListeners;
- (BOOL)_donateServiceShouldAcceptNewConnection:(id)a0;
- (void)handleBridgeActivityUpdate:(id)a0;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;

@end
