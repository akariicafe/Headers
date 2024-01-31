@class BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (id)new;
+ (id)serviceName;
+ (id)serviceWithDefaultShellEndpoint;
+ (BOOL)currentProcessServicesDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (id)_remoteTarget;
- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)a0;
- (void)openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (void)openApplication:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)_openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;

@end
