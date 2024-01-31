@class NSString, UIViewController;
@protocol WFCompactPlatterPresentation, UIViewControllerTransitionCoordinator;

@interface WFCompactPlatterPresentationController : UIPresentationController <WFCompactPlatterContentContainer>

@property (nonatomic) long long transitionState;
@property (weak, nonatomic) id<UIViewControllerTransitionCoordinator> activeTransitionCoordinator;
@property (readonly, nonatomic) UIViewController<WFCompactPlatterPresentation> *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredSizeForPresentingInContainerViewOfSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentedViewFrameInContainerView:(id)a0 containerViewSize:(struct CGSize { double x0; double x1; })a1 withSizeCalculation:(BOOL)a2 ofPresentedPlatter:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })usableFrameForPresentingInContainerViewOfSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dealloc;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_containerIgnoresDirectTouchEvents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfDismissedViewInContainerView;
- (void)keyboardWillChange;
- (double)maximumExpectedHeightForPlatterPresentation:(id)a0;
- (void)platterPresentationDidInvalidateSize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentedViewFrameInContainerViewOfSize:(struct CGSize { double x0; double x1; })a0 withSizeCalculation:(BOOL)a1;
- (void)updatePresentedViewFrameAnimatedAlongsideKeyboard:(BOOL)a0;

@end
