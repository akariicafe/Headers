@class NSMutableDictionary, NSXPCConnection, NSTimer, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NTKBundleComplicationMigrationServiceClient : NSObject {
    NSTimer *_invalidationTimer;
    unsigned long long _transactionCount;
    NSMutableDictionary *_requestToCompletion;
    NSMutableDictionary *_cachedResults;
    NSDictionary *_typeMigrationCache;
}

@property (copy, nonatomic) id /* block */ connectionProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)_queue_clearInvalidationTimer;
- (void)_queue_decrementTransactionCount;
- (void)_queue_incrementTransactionCount;
- (void)_queue_loadTypeLookupForDevice:(id)a0 completion:(id /* block */)a1;
- (void)_queue_serviceRequest:(id)a0 retryBudget:(unsigned long long)a1;
- (void)_queue_updateInvalidationTimer;
- (void)_setupConnectionIfNeeded;
- (void)generateTypeLookupForDevice:(id)a0 completion:(id /* block */)a1;
- (void)serviceRequest:(id)a0 completion:(id /* block */)a1;

@end
