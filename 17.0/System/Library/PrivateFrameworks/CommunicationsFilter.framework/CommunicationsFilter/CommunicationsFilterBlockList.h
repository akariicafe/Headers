@class CommunicationsFilterBlockListCache, NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CommunicationsFilterBlockList : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;

- (BOOL)_disconnect;
- (id)init;
- (void)dealloc;
- (id)_sendSynchronousXPCRequest:(id)a0;
- (void)addItemForAllServices:(id)a0;
- (BOOL)isItemInList:(id)a0;
- (void)removeItemForAllServices:(id)a0;
- (void)_sendXPCRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyAllItems;
- (BOOL)_connect;
- (void)_disconnected;

@end
