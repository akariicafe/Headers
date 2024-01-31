@class NSString, FBSceneManagerObserver, NSMutableDictionary, FBSceneEventQueue, FBSMutableSceneDefinition, NSMutableArray, FBSMutableSceneParameters, NSMutableOrderedSet, NSMapTable;
@protocol FBSceneWorkspaceDelegate, BSInvalidatable;

@interface FBSceneWorkspace : NSObject <FBSceneCreating_Internal, FBSceneEventQueueDelegate, FBWorkspaceEventDispatcherTarget, FBSceneEventCoordinating, BSDescriptionProviding> {
    id<BSInvalidatable> _eventDispatcherTargetRegistration;
    FBSceneManagerObserver *_delegate;
    NSMutableOrderedSet *_lock_observers;
    NSMutableDictionary *_allScenesByID;
    NSMapTable *_providerToScenesMap;
    FBSceneEventQueue *_eventQueue;
    NSMutableArray *_pendingIdleEvents;
    unsigned long long _synchronizationBlockDepth;
    FBSMutableSceneDefinition *_buildingDefinition;
    FBSMutableSceneParameters *_buildingParameters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
    BOOL _supportsLegacy;
    BOOL _suppressConnectionHandshakes;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<FBSceneWorkspaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier;

+ (id)debugDescription;
+ (id)sceneIdentityTokenForIdentifier:(id)a0 workspaceIdentifier:(id)a1;
+ (id)workspaceWithIdentifier:(id)a0;

- (void)setSpecification:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)setClientIdentity:(id)a0;
- (void)didReceiveSceneRequest:(id)a0 fromHandle:(id)a1;
- (id)init;
- (void)eventQueueDidUnlock:(id)a0;
- (void)scene:(id)a0 handleUpdateToSettings:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (id)sceneIdentityTokenForIdentifier:(id)a0;
- (id)delegate;
- (void)setIdentifier:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)succinctDescriptionBuilder;
- (void)scene:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (id)allScenes;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)configureParameters:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)scene:(id)a0 enumerateAndCalloutToObserversWithEventName:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)sceneWithIdentifier:(id)a0;
- (void)eventQueueDidDrain:(id)a0;
- (id)createScene:(id /* block */)a0;
- (id)succinctDescription;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (id)createSceneWithDefinition:(id)a0;
- (void)setDelegate:(id)a0;
- (id)sceneWithIdentityToken:(id)a0;
- (void)scene:(id)a0 deactivateAndInvalidate:(BOOL)a1 withError:(id)a2 block:(id /* block */)a3;
- (void)didReceiveHandshake:(id)a0;

@end
