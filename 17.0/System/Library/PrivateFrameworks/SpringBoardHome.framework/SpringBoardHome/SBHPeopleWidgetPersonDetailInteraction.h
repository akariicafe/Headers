@class UIView, NSString, SBHViewControllerTransition, SBHPeopleWidgetPersonDetailInteractionContext, PPLPeopleEntityViewController, MTMaterialView, SBHPeopleWidgetPersonDetailInteractionSettings, SBIconView;
@protocol SBHModalInteractionDelegate;

@interface SBHPeopleWidgetPersonDetailInteraction : NSObject <SBHViewControllerTransitionDelegate, SBHPeopleWidgetPersonDetailAnimationContext, SBIconViewObserver, PPLPeopleEntityViewControllerDelegate, SBHModalInteraction>

@property (readonly, nonatomic) SBHPeopleWidgetPersonDetailInteractionSettings *settings;
@property (retain, nonatomic) PPLPeopleEntityViewController *personViewController;
@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContentFrame;
@property (nonatomic) double sourceContentCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContentFrame;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) UIView *backgroundTintView;
@property (retain, nonatomic) UIView *touchBlockingView;
@property (retain, nonatomic) SBHViewControllerTransition *transition;
@property (readonly, copy, nonatomic) SBHPeopleWidgetPersonDetailInteractionContext *interactionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *homeScreenContentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } homeScreenContentFrame;
@property (readonly, nonatomic) SBIconView *sourceView;
@property (readonly, nonatomic) SBIconView *referenceView;
@property (readonly, nonatomic) double targetContentCornerRadius;
@property (weak, nonatomic) id<SBHModalInteractionDelegate> modalInteractionDelegate;

- (void)iconViewDidBecomeWindowless:(id)a0;
- (void)iconViewWasDiscarded:(id)a0;
- (void)iconViewWasRecycled:(id)a0;
- (void).cxx_destruct;
- (void)_handleTapToDismiss:(id)a0;
- (void)_setUpMatchMoveAnimationForBackgroundView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceContentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetContentFrame;
- (id)animatorForTransition:(id)a0;
- (void)beginInteractionAnimated:(BOOL)a0;
- (void)endInteractionAnimated:(BOOL)a0;
- (id)initWithInteractionContext:(id)a0;
- (void)peopleEntityViewControllerDidRequestDismissal:(id)a0;
- (void)prepareTransition:(id)a0;
- (void)transitionDidProgressToEndState:(id)a0;
- (void)transitionDidReturnToBeginningState:(id)a0;
- (void)transitionWillProgressToEndState:(id)a0;
- (void)transitionWillReturnToBeginningState:(id)a0;

@end
