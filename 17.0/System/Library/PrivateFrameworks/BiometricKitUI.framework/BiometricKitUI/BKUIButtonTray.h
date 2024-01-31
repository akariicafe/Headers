@class NSArray, UIView, NSLayoutConstraint, UIButton;
@protocol UITraitChangeRegistration, BKUIButtonTrayActionDelegate;

@interface BKUIButtonTray : UIView

@property (nonatomic) BOOL inSheet;
@property (retain, nonatomic) UIView *bottomPaddingView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (retain, nonatomic) UIButton *nextStateButton;
@property (retain, nonatomic) UIView *nextStateButtonContainer;
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerHorizontalPositionConstraint;
@property (retain, nonatomic) UIButton *bottomLinkButton;
@property (retain, nonatomic) UIButton *topLinkButton;
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerBottomConstraintTall;
@property (retain, nonatomic) NSLayoutConstraint *escapeHatchButtonLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *escapeHatchButtonTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *escapeHatchButtonBottomConstraint;
@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL willUseActionDelegate;
@property (weak, nonatomic) id<BKUIButtonTrayActionDelegate> actionDelegate;

- (long long)displayState;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_bottomPadding;
- (void)showRetryButton;
- (void)_layoutInternalButtonsForDisplayState:(long long)a0;
- (void)continueButtonPressed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willUseActionDelegate:(BOOL)a1;
- (void)linkButtonPressed:(id)a0;
- (id)nextStateButtonContainerHorizontalPositionConstraint:(BOOL)a0;
- (void)topLinkButtonPressed:(id)a0;
- (void)updateButtonLayout;

@end
