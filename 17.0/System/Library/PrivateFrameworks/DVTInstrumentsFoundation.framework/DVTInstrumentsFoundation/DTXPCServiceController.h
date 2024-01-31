@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DTXPCServiceController : NSObject {
    NSMutableDictionary *_registrationDictsByPid;
    NSObject<OS_dispatch_queue> *_guard;
    NSObject<OS_dispatch_queue> *_execMonitorQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)_configureInstance:(id)a0 identifier:(id)a1 servicePid:(int)a2 environment:(id)a3 arguments:(id)a4 options:(id)a5;
- (void)_matchRemove:(id /* block */)a0;
- (void)_registryModify:(BOOL)a0 identifier:(id)a1 parent:(int)a2 client:(id)a3 block:(id /* block */)a4;
- (void)registerClient:(id)a0 forXPCService:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4 handler:(id /* block */)a5;
- (void)releaseAssertionsMadeByClient:(id)a0;
- (void)requestDebugLaunchOfDaemonWithSpecifier:(id)a0 programPath:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4 handler:(id /* block */)a5;
- (void)unregisterClient:(id)a0 withIdentifier:(id)a1 parent:(int)a2;

@end
