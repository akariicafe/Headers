@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SLDServiceCenter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyConcurrentQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mainConnectionSetupQueue;
@property (retain, nonatomic) NSXPCConnection *conn;

+ (id)sharedCenter;

- (id)init;
- (void).cxx_destruct;
- (void)_ensureMainConnectionSynchronously;
- (id)_synchronousRemoteObjectProxy;
- (id)connectionForServiceClass:(Class)a0;

@end
