@class NSString, NSSet, FBSWorkspaceSceneRequestOptions;

@interface FBWorkspaceSceneRequest : NSObject <FBSceneObserver> {
    id /* block */ _lock_completion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_responded;
}

@property (readonly, copy, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) FBSWorkspaceSceneRequestOptions *options;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithError:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)sceneDidActivate:(id)a0;
- (void).cxx_destruct;
- (void)_respondWithScene:(id)a0 error:(id)a1;
- (id)initWithTargetIdentifier:(id)a0;
- (id)initWithTargetIdentifier:(id)a0 actions:(id)a1 completion:(id /* block */)a2;
- (id)initWithTargetIdentifier:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)observeScene:(id)a0;
- (BOOL)requiresModernDispatcher;
- (void)respondWithScene:(id)a0;

@end
