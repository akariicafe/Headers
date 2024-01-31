@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface HCXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue;
@property (nonatomic) unsigned long long requestedUpdates;

+ (id)clientWithConnection:(id)a0;

- (void)dealloc;
- (void)teardownConnection;
- (id)initWithConnection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0 errorBlock:(id /* block */)a1;
- (void)setWantsUpdates:(BOOL)a0 forIdentifier:(unsigned long long)a1;
- (BOOL)wantsUpdatesForIdentifier:(unsigned long long)a0;

@end
