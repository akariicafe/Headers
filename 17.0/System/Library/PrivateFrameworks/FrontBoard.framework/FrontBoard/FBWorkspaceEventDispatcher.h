@class NSCountedSet, FBWorkspaceConnectionsStateStore, NSDictionary, NSMutableDictionary, NSMapTable, FBMutableWorkspaceConnectionsState;

@interface FBWorkspaceEventDispatcher : NSObject {
    FBWorkspaceConnectionsStateStore *_store;
    NSDictionary *_preregisteredWorkspaces;
    NSMutableDictionary *_lock_sourcesByPidNumber;
    NSMapTable *_lock_targetsByIdentifier;
    NSCountedSet *_main_incompleteTargetRegistrations;
    NSMutableDictionary *_lock_restartAssertionsByPidNumber;
    FBMutableWorkspaceConnectionsState *_lock_mutableState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (id)init;
- (void)_mainThread_dispatchSceneRequestsFromSource:(id)a0 toTarget:(id)a1;
- (void)noteHandshakeFromSource:(id)a0 withRemnants:(id)a1;
- (id)registerTarget:(id)a0;
- (void).cxx_destruct;
- (id)registerSourceWithProcessHandle:(id)a0;
- (id)_initWithConnectionStore:(id)a0 preregisteredWorkspaces:(id)a1;
- (BOOL)handleSceneRequest:(id)a0 fromSource:(id)a1;
- (void)_flushCalloutsWithCompletion:(id /* block */)a0;
- (void)_mainThread_dispatchHandshakeFromSource:(id)a0 toTarget:(id)a1;

@end
