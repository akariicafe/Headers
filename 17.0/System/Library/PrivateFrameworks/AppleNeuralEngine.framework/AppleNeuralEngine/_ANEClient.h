@class _ANEVirtualClient, NSArray, NSMutableDictionary, _ANEDaemonConnection;

@interface _ANEClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _ANEDaemonConnection *_fastConn;
}

@property (readonly, nonatomic) _ANEDaemonConnection *conn;
@property (readonly, nonatomic) BOOL allowRestrictedAccess;
@property (readonly, nonatomic) _ANEDaemonConnection *fastConn;
@property (readonly, nonatomic) NSArray *priorityQ;
@property (readonly, nonatomic) _ANEVirtualClient *virtualClient;
@property (readonly, nonatomic) NSMutableDictionary *connectionsUsedForLoadingModels;
@property (readonly, nonatomic) NSMutableDictionary *connections;
@property (readonly, nonatomic) BOOL isRootDaemon;

+ (void)initialize;
+ (id)new;
+ (id)sharedConnection;
+ (id)sharedPrivateConnection;

- (id)init;
- (void)dealloc;
- (BOOL)compileModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)compiledModelExistsFor:(id)a0;
- (BOOL)endRealTimeTask;
- (BOOL)unloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)compiledModelExistsMatchingHash:(id)a0;
- (BOOL)mapIOSurfacesWithModel:(id)a0 request:(id)a1 cacheInference:(BOOL)a2 error:(id *)a3;
- (BOOL)evaluateWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (void).cxx_destruct;
- (BOOL)echo:(id)a0;
- (BOOL)beginRealTimeTask;
- (void)purgeCompiledModel:(id)a0;
- (void)purgeCompiledModelMatchingHash:(id)a0;
- (BOOL)loadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)evaluateRealTimeWithModel:(id)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (BOOL)loadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)unloadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (void)unmapIOSurfacesWithModel:(id)a0 request:(id)a1;
- (BOOL)isVirtualClient;
- (BOOL)buffersReadyWithModel:(id)a0 inputBuffers:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (id)connectionForLoadingModel:(id)a0 options:(id)a1;
- (id)connectionUsedForLoadingModel:(id)a0;
- (BOOL)doBuffersReadyWithModel:(id)a0 inputBuffers:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doEnqueueSetsWithModel:(id)a0 outputSet:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doEvaluateDirectWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doLoadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)doPrepareChainingWithModel:(id)a0 options:(id)a1 chainingReq:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)doUnloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)enqueueSetsWithModel:(id)a0 outputSet:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (id)fastConnWithoutLock;
- (id)initWithRestrictedAccessAllowed:(BOOL)a0;
- (BOOL)prepareChainingWithModel:(id)a0 options:(id)a1 chainingReq:(id)a2 qos:(unsigned int)a3 error:(id *)a4;

@end
