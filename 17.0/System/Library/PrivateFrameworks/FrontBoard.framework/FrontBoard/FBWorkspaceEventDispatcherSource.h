@class NSString, NSSet, BSSimpleAssertion, NSMutableDictionary, RBSProcessHandle;

@interface FBWorkspaceEventDispatcherSource : NSObject <BSInvalidatable> {
    BSSimpleAssertion *_underlyingAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSSet *_lock_remnants;
    NSMutableDictionary *_lock_requestsByTargetIdentifier;
}

@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_initWithProcessHandle:(id)a0 underlyingAssertion:(id)a1;
- (id)consumeRemnantsPassingTest:(id /* block */)a0;
- (void)noteHandshakeWithRemnants:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)enqueueSceneRequest:(id)a0;
- (id)dequeueSceneRequestsForTargetIdentifier:(id)a0;

@end
