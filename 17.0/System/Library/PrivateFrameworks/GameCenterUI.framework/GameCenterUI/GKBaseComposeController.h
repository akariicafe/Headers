@class NSString, GKContiguousContainerView, NSArray, GKTextView, NSLayoutConstraint, UIView, UIScrollView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate>

@property (retain, nonatomic) GKContiguousContainerView *headerFieldContainer;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double scrollContentInsetAdjustY;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *messageFieldTrailingConstraint;
@property (nonatomic) BOOL showHeaderFieldContainer;
@property (retain, nonatomic) UIScrollView *backgroundView;
@property (retain, nonatomic) NSArray *composeHeaderFields;
@property (retain, nonatomic) GKTextView *messageField;
@property (nonatomic) UIView *intendedFirstResponder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownKeyboardFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (void)_adjustContentInsetForShowingKeyboard:(BOOL)a0;
- (BOOL)_gkWantsCustomRightBarButtonItemInViewService;
- (void)_scrollSelectedTextToVisible;
- (void)keyboardWillHideShow:(id)a0;
- (void)messageFieldTextDidChange;
- (void)setMessageFieldText:(id)a0;
- (id)viewMetricsForContainerView:(id)a0;

@end
