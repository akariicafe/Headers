@class UIStackView, NSString, UIInterfaceActionGroupView, SUUIContextActionsConfiguration, NSMutableArray, UIVisualEffectView, SUUIContextActionsPresentationController, UIGestureRecognizer;

@interface SUUIContextActionsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) SUUIContextActionsConfiguration *configuration;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) UIInterfaceActionGroupView *contextActionView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView;
@property (nonatomic) struct CGPoint { double x; double y; } gestureRecognizerInitialLocation;
@property (nonatomic, getter=hasAppliedSystemRecognizer) BOOL appliedSystemRecognizer;
@property (retain, nonatomic) SUUIContextActionsPresentationController *transitionPresentationController;
@property (nonatomic, getter=isOrbPresentation) BOOL orbPresentation;
@property (retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (double)transitionDuration:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)animateTransition:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)interfaceAction:(id)a0 invokeActionHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)viewTapped:(id)a0;
- (void)_applySystemRecognizer;
- (void)_reloadViewsConfiguration;
- (id)_transitionPresentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)systemProvidedGestureRecognzierTriggered:(id)a0;

@end
