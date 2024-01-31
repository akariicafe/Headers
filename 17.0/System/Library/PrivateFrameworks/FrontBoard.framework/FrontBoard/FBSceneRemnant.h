@class NSString, FBWorkspace, FBSSceneSettings, FBSSceneDefinition, BSAtomicSignal, NSObject, BSSimpleAssertion, FBSSceneClientSettings, FBSSceneParameters;
@protocol OS_dispatch_queue;

@interface FBSceneRemnant : NSObject <BSInvalidatable> {
    FBSSceneParameters *_parameters;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    BSAtomicSignal *_invalidated;
}

@property (readonly, weak, nonatomic) FBWorkspace *_workspace;
@property (readonly, nonatomic, getter=_hasBeenInvalidated) BOOL _invalidated;
@property (readonly, copy, nonatomic) FBSSceneClientSettings *_clientSettings;
@property (readonly, nonatomic) BSSimpleAssertion *_assertion;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition;
@property (readonly, copy, nonatomic) FBSSceneSettings *lastSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithIdentity:(id)a0 client:(id)a1 workspace:(id)a2 parameters:(id)a3 assertionQueue:(id)a4 assertion:(id)a5;

@end
