@class NSXPCListenerEndpoint, NSSet, NSXPCConnection, MuxNotificationSink, NSError, FrameworkCache;

@interface CoreTelephonyClientMux : NSObject <MuxNotificationSinkDelegate> {
    struct map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::less<__unsafe_unretained id>, std::allocator<std::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>> { struct __tree<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__map_value_compare<__unsafe_unretained id, std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::less<__unsafe_unretained id>>, std::allocator<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<__unsafe_unretained id, std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::less<__unsafe_unretained id>>> { unsigned long long __value_; } __pair3_; } __tree_; } _delegates;
    NSSet *_currentSelectorSet;
    struct map<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>, std::less<__CTAssertionType *>, std::allocator<std::pair<__CTAssertionType *const, std::pair<dispatch::queue, void (^)(NSError *)>>>> { struct __tree<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, std::__map_value_compare<__CTAssertionType *, std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, std::less<__CTAssertionType *>>, std::allocator<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<__CTAssertionType *, std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, std::less<__CTAssertionType *>>> { unsigned long long __value_; } __pair3_; } __tree_; } _clientCallback;
    FrameworkCache *_cache;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } xpcQueue;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) MuxNotificationSink *notificationSink;
@property (retain, nonatomic) NSError *reconnectError;

- (void)addDelegate:(id)a0 queue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a1;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)createCTAssertionForConnectionType:(int)a0 allocator:(struct __CFAllocator { } *)a1 proxy:(id)a2;
- (void)removeAssertionForInvalidationNotification:(struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)a0;
- (id)cachedValueForSelector:(SEL)a0;
- (void)removeDelegate:(id)a0;
- (void)_computeNotificationSetForced_sync:(id /* block */)a0;
- (void)_ensureConnectionSetup_sync:(BOOL)a0;
- (void)_computeNotificationSet_sync:(id /* block */)a0;
- (void)sink:(id)a0 handleNotification:(id)a1;
- (id)initWithSink:(id)a0;
- (id)proxyWithQueue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a0 errorHandler:(id /* block */)a1;
- (void)_computeNotificationSet_sync:(BOOL)a0 completion:(id /* block */)a1;
- (id).cxx_construct;
- (unsigned long long)_getAssertionTypeId;
- (void)cacheValue:(id)a0 forSelector:(SEL)a1;
- (void)_connect_sync;
- (void).cxx_destruct;
- (void)_computeNotificationSetForced_sync;
- (void)_ensureConnectionSetup_sync;
- (id)synchronousProxyWithErrorHandler:(id /* block */)a0;
- (void)_registerForNotifications_sync:(id)a0 shouldForce:(BOOL)a1 completion:(id /* block */)a2;
- (id)proxyWithErrorHandler_sync:(id /* block */)a0;
- (void)_setReconnectError_sync:(id)a0;
- (void)registerBlockForInvalidationNotification:(struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)a0 callbackQueue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a1 callback:(id /* block */)a2;
- (void)_initializeConnection_sync;
- (id)initWithEndpoint:(id)a0 sink:(id)a1;
- (void)_sendConnectionInvalidatedNotification_sync:(id)a0;

@end
