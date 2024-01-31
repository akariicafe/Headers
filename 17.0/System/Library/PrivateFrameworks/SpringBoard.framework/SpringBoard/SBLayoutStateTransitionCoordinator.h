@class SBLayoutStateTransitionContext, NSString, NSPointerArray, SBWindowScene, _SBDefaultSceneEntityFrameProvider;
@protocol SBLayoutStateTransitionSceneEntityFrameProvider;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate> {
    NSPointerArray *_observerPointerArray;
    _SBDefaultSceneEntityFrameProvider *_defaultSceneEntityFrameProvider;
}

@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (weak, nonatomic) id<SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) SBLayoutStateTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)removeObserver:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (void)beginTransitionForWorkspaceTransaction:(id)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (void)willEndTransition;
- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (void).cxx_destruct;
- (void)endTransitionWithError:(id)a0;
- (void)addObserver:(id)a0;

@end
