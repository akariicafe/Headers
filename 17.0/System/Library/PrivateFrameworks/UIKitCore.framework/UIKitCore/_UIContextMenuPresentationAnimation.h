@class _UIContextMenuLayoutArbiterOutput, _UIContextMenuAnimator, NSString, _UIContextMenuReparentingContainerView, UIViewPropertyAnimator, UITargetedPreview, _UIPortalView, _UIContextMenuUIController, UIViewFloatAnimatableProperty, _UIGroupCompletion;

@interface _UIContextMenuPresentationAnimation : NSObject <_UIClickPresentationTransition>

@property (weak, nonatomic) _UIContextMenuUIController *uiController;
@property (nonatomic) BOOL isDismissTransition;
@property (nonatomic) BOOL isSingleItemMenu;
@property (retain, nonatomic) _UIPortalView *reparentingPortalView;
@property (retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress;
@property (copy, nonatomic) id /* block */ reparentingAnimationBlock;
@property (copy, nonatomic) id /* block */ accessoryAnimationBlock;
@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout;
@property (retain, nonatomic) _UIGroupCompletion *groupCompletion;
@property (retain, nonatomic) UITargetedPreview *stashedDismissalPreview;
@property (retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator;
@property (nonatomic) unsigned long long dismissalStyle;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_containerView;
- (id)_backgroundView;
- (void).cxx_destruct;
- (id)_accessoryViews;
- (BOOL)_shouldAnimateBackgroundEffects;
- (void)_actuallyPerformTransition;
- (void)_anchorTransitionViewToTargetedPreview:(id)a0;
- (id)_dismissalPreviewForSecondaryItemPreview:(id)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; struct CGPoint { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })_dismissedMenuLayoutForPresentedLayout:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; struct CGPoint { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })a0 previewLayout:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CAPoint3D { double x0; double x1; double x2; } x1; struct CGPoint { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })a1 anchor:(struct { unsigned long long x0; unsigned long long x1; double x2; double x3; long long x4; })a2;
- (BOOL)_hasVisibleBackground;
- (void)_installAccessories;
- (BOOL)_isDismissingToDrag;
- (id)_menuView;
- (void)_performReduceMotionAppearanceTransition;
- (void)_performReduceMotionDisappearanceTransition;
- (id)_platterTransitionView;
- (id)_platterView;
- (void)_prepareAnimatablePropertyBasedAnimations;
- (void)_prepareOverallAnimationCompletion;
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)a0;
- (void)_presentation_applyBackgroundEffectWithProgress:(double)a0;
- (id)_secondarySourcePreviews;
- (void)_setBackgroundVisible:(BOOL)a0;
- (id)_targetedPreviewForDismissalAnimation;
- (void)_updateAccessoryAttachment:(id)a0;
- (id)initWithUIController:(id)a0 asDismissal:(BOOL)a1;
- (void)performTransition;
- (void)prepareTransitionToView:(id)a0;
- (void)transitionDidEnd:(BOOL)a0;

@end
