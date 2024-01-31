@class CKVTaskHandler, NSString, CKVIndexManager, CKVSettings, NSObject;
@protocol OS_dispatch_queue, KVDonateServiceProvider;

@interface CKVAdminServiceFactory : NSObject <CKVAdminServiceProvider> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CKVIndexManager *_indexManager;
    CKVTaskHandler *_taskHandler;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
    CKVSettings *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adminService;
- (id)initWithQueue:(id)a0 indexManager:(id)a1 settings:(id)a2 donateTaskProvider:(id)a3 coalescenceManager:(id)a4 serviceProvider:(id)a5;

@end
