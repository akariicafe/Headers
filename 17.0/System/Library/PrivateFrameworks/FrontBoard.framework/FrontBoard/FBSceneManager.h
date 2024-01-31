@class FBSceneWorkspace;
@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject {
    FBSceneWorkspace *_workspace;
}

@property (nonatomic, setter=_setSuppressConnectionHandshakes:) BOOL _suppressConnectionHandshakes;
@property (weak, nonatomic) id<FBSceneManagerDelegate> delegate;

+ (id)sharedInstance;
+ (id)observeKeyboardSceneAvailability:(id /* block */)a0;
+ (void)_clearKeyboardScene;
+ (id)keyboardScene;
+ (void)synchronizeChanges:(id /* block */)a0;
+ (void)setKeyboardScene:(id)a0;

- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (id)init;
- (void)destroyScene:(id)a0 withTransitionContext:(id)a1;
- (void)removeObserver:(id)a0;
- (id)createLegacySceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (id)_createSceneWithDefinition:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 transitionContext:(id)a3 fromRemnant:(id)a4 usingClientProvider:(id)a5 completion:(id /* block */)a6;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (id)newSceneIdentityTokenForIdentity:(id)a0;
- (id)createSceneWithIdentifier:(id)a0 parameters:(id)a1 clientProvider:(id)a2 transitionContext:(id)a3;
- (id)description;
- (id)createSceneWithDefinition:(id)a0 initialParameters:(id)a1;
- (void).cxx_destruct;
- (id)sceneWithIdentifier:(id)a0;
- (id)debugDescription;
- (BOOL)_isSynchronizingSceneUpdates;
- (id)scenesPassingTest:(id /* block */)a0;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (id)createSceneWithDefinition:(id)a0;
- (id)createSceneWithIdentifier:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 clientProvider:(id)a3 transitionContext:(id)a4;
- (void)addObserver:(id)a0;
- (id)sceneFromIdentityToken:(id)a0;

@end
