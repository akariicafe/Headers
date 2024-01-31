@class SBFFeatherBlurView, SPUINavigationSwipeRecognizerDelegate, UIView, SPUIDynamicKeyboardVisualEffectView, SPUITextField, CALayer, UIButton, NSString, SPUISearchHeader, NSLayoutConstraint, SPUINavigationController;
@protocol SPUIUnifiedFieldViewControllerDelegate;

@interface SPUIUnifiedFieldViewController : UIViewController <SPUIUnifiedFieldNavigationDelegate>

@property (readonly) SPUINavigationController *searchNavigationController;
@property (readonly) SPUISearchHeader *searchHeader;
@property (retain) SPUINavigationSwipeRecognizerDelegate *swipeRecognizer;
@property (retain) SPUIDynamicKeyboardVisualEffectView *keyboardVisualEffectView;
@property (retain) SBFFeatherBlurView *topBlur;
@property (retain) NSLayoutConstraint *leadingConstraint;
@property (retain) NSLayoutConstraint *trailingConstraint;
@property (retain) UIButton *backButton;
@property (retain) UIView *originalLeftView;
@property (retain) SPUITextField *fakeTextField;
@property (retain) UIView *fakeOriginalLeftView;
@property BOOL handlingKeyboardFrameChange;
@property BOOL tryToLayoutForBadFrame;
@property (weak, nonatomic) id<SPUIUnifiedFieldViewControllerDelegate> delegate;
@property (readonly) CALayer *searchProtectorLayer;
@property (readonly) double keyboardProtectorHeight;
@property (readonly, getter=isUnifiedFieldDocked) BOOL unifiedFieldDocked;
@property (readonly) struct CGSize { double x0; double x1; } unifiedFieldSize;
@property (readonly) struct CGSize { double x0; double x1; } dockedUnifiedFieldSize;
@property (readonly) double unifiedFieldCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewIsCanvasForField:(id)a0;
+ (double)insetMarginsForSearchField;

- (void)keyboardFrameChanged:(id)a0;
- (void)resetSearchFieldContentWithSearchToken:(id)a0 text:(id)a1 wantsBackButton:(BOOL)a2 transitionCoordinator:(id)a3;
- (void)dismissSingleLevelViewController;
- (id)initWithNavigationController:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (long long)preferredUserInterfaceStyle;
- (void)keyboardWillShow:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)doALayoutPass;
- (id)generateBackButton;
- (void)processStateForeground;

@end
