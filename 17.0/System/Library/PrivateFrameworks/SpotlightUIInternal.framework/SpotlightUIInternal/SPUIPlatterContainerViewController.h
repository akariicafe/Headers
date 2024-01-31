@class NUIContainerBoxView, NSString, UIVisualEffectView, SPUINavigationController, UIView, UIGestureRecognizer;

@interface SPUIPlatterContainerViewController : UIViewController <NUIContainerViewDelegate, UIGestureRecognizerDelegate, SPUINavigationControllerDelegate>

@property (retain) NUIContainerBoxView *view;
@property (retain) UIView *platterBackgroundView;
@property (retain) UIVisualEffectView *visualEffectView;
@property (retain) SPUINavigationController *navController;
@property (retain) UIGestureRecognizer *tapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHardwareKeyboardAttached;

- (id)initWithNavigationController:(id)a0;
- (void)dealloc;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)platterVisualEffectView;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)hardwareKeyboardAvailabilityChangedAnimated:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMarginsForContainer;
- (void)navigationViewDidInvalidateSizeAnimated:(BOOL)a0;

@end
