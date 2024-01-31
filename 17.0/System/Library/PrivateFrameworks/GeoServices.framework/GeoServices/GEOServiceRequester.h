@class NSArray, GEOOfflineStateManager, NSMapTable;

@interface GEOServiceRequester : NSObject {
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingRequestsLock;
    NSArray *_networkOperationClasses;
    Class _offlineOperationClass;
    GEOOfflineStateManager *_stateManagerOverride;
}

@property (retain, nonatomic) NSArray *networkOperationClasses;
@property (retain, nonatomic) Class offlineOperationClass;
@property (retain, nonatomic) GEOOfflineStateManager *offlineStateManager;

- (id)init;
- (id)_validateResponse:(id)a0;
- (void).cxx_destruct;
- (void)_removeAllOperationsForRequest:(id)a0;
- (void)_cancelRequest:(id)a0;
- (id)_keyForRequest:(id)a0;
- (void)_addOperation:(id)a0 forRequest:(id)a1;
- (id)_currentOperationForRequest:(id)a0;
- (id)_operationClassForTraits:(id)a0 requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1 forCohort:(id)a2 config:(id)a3 error:(id *)a4;
- (void)_request:(id)a0 completed:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldTryNextOperationForError:(id)a0 fromOperation:(id)a1;
- (void)_startWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 options:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (void)_startWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 options:(unsigned long long)a5 willSendRequestHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (id)_takeCurrentOperationForRequest:(id)a0;

@end
