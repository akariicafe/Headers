@class NSMutableDictionary, NSDictionary, UIInteractionProgress, _UIStatesFeedbackGenerator, NSString;
@protocol UIViewControllerContextTransitioning;

@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning, UIForceInteractionController>

@property (retain, nonatomic) UIInteractionProgress *interactionProgress;
@property (nonatomic) unsigned long long targetPresentationPhase;
@property (retain, nonatomic) NSMutableDictionary *animationsByPresentationPhase;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) NSDictionary *viewsParticipatingInCommitTransition;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

+ (id)performCommitTransitionWithDelegate:(id)a0 forViewController:(id)a1 previewViewController:(id)a2 previewInteractionController:(id)a3 completion:(id /* block */)a4;

- (void)updateInteractiveTransition:(double)a0;
- (void)interactionProgressDidUpdate:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (id)init;
- (double)transitionDuration:(id)a0;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (void)_animateCommitTransition:(id)a0;
- (void)_animateDismissTransition:(id)a0;
- (void)_animatePreviewTransition:(id)a0;
- (void)_animateRevealTransition:(id)a0;
- (void)_completeAnimationWithPresentationPhase:(unsigned long long)a0 finished:(BOOL)a1;
- (void)_layoutForPresentationPhase:(unsigned long long)a0;
- (id)initWithInteractionProgress:(id)a0 targetPresentationPhase:(unsigned long long)a1;
- (void)setAnimations:(id /* block */)a0 completion:(id /* block */)a1 forPresentationPhase:(unsigned long long)a2;

@end
