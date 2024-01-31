@class SBWindowScene, SBTransientOverlayPresentationManager, SBWorkspaceTransientOverlay, BSProcessHandle;
@protocol SBTransientOverlayPresenting;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) BOOL shouldDismissSiriUponPresentation;
@property (nonatomic) BOOL shouldPreserveAppSwitcher;
@property (retain, nonatomic) id<SBTransientOverlayPresenting> scenePresenter;
@property (retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager;
@property (retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay;
@property (nonatomic) long long transitionType;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (weak, nonatomic) SBWindowScene *windowScene;

- (id)init;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
