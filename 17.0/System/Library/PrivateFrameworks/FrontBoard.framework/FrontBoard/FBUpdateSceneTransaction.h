@class FBSceneManager, NSString, FBSSceneSettings, FBScene, FBSSceneDefinition, FBSSceneTransitionContext, FBSSceneSpecification, FBWaitForSceneDestructionTransaction, FBSSceneParameters;
@protocol FBSynchronizedTransactionDelegate;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction> {
    FBSceneManager *_sceneManager;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    FBWaitForSceneDestructionTransaction *_destructionTransaction;
    unsigned long long _transactionID;
    BOOL _readyToCommit;
    BOOL _didCommit;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly, nonatomic) BOOL destroyed;
@property (nonatomic) BOOL waitsForSceneCommit;
@property (readonly, nonatomic) FBSSceneSettings *newSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (BOOL)isReadyForSynchronizedCommit;
- (void)sceneDidInvalidate:(id)a0;
- (void)_childTransactionDidComplete:(id)a0;
- (id)specification;
- (void)_begin;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithSceneToUpdate:(id)a0 newSettings:(id)a1 transitionContext:(id)a2;
- (void)_updateScene;
- (id)scene;
- (id)settings;
- (void)_commitSceneOrWait;
- (id)initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)_commitSceneUpdate:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_noteDidCommit:(BOOL)a0;
- (void)_noteWillCommit;
- (void)_createScene;
- (id)initWithSceneIdentifier:(id)a0 process:(id)a1 parameters:(id)a2 transitionContext:(id)a3;
- (void)_noteWillUpdate;
- (id)newSettings;
- (id)_initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)performSynchronizedCommit;
- (void)addObserver:(id)a0;
- (void)_noteDidCreate;
- (void)_performCommit;

@end
