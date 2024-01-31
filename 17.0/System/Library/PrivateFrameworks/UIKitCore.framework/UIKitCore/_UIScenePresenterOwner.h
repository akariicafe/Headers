@class NSString, FBScene, UIScenePresentationManager, NSMutableSet, _UISceneLayerHostContainerView, NSMutableOrderedSet, UIScenePresentationContext, _UIScenePresenter;
@protocol _UIScenePresenterOwnerDelegate;

@interface _UIScenePresenterOwner : NSObject <BSDescriptionProviding, BSInvalidatable> {
    UIScenePresentationManager *_scenePresentationManager;
    _UISceneLayerHostContainerView *_realSceneHostViewsContainer;
    NSMutableOrderedSet *_activePresentersByPriority;
    NSMutableSet *_inactivePresentersByPriority;
    _UIScenePresenter *_prioritizedPresenter;
    BOOL _invalidated;
}

@property (weak, nonatomic) id<_UIScenePresenterOwnerDelegate> delegate;
@property (readonly, nonatomic) id context;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPresenter:(id)a0;
- (BOOL)_isPresenterActive:(id)a0;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)_invalidatePresenter:(id)a0;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_setActivePrioritizedPresenter:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_activatePresenter:(id)a0;
- (void).cxx_destruct;
- (void)_updateHostingStateForScenePresentersIfNecessary;
- (id)activePrioritizedPresenter;
- (void)enumeratePresentersUsingBlock:(id /* block */)a0;
- (id)succinctDescription;
- (void)_updateActivePrioritizedPresenterIfNecessary;
- (id)initWithScenePresentationManager:(id)a0 context:(id)a1;
- (id)presenterWithIdentifier:(id)a0;
- (BOOL)_isPresenterHosting:(id)a0;
- (void)_deactivatePresenter:(id)a0;

@end
