@class __end_, __end_cap_, NSXPCConnection;
@protocol AUPBServing;

@interface RemoteAUPBServer : NSObject {
    struct vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSObject<OS_dispatch_semaphore> **, std::allocator<NSObject<OS_dispatch_semaphore> *>> { id *__value_; } x1; } replySemas;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<AUPBServing> proxyInterface;
@property (nonatomic) struct OpaqueAUPBServer { } *ref;

- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addSema:(id)a0;
- (void)removeSema:(id)a0;
- (void)signalAllSemaphores;

@end
