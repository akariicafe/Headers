@class UIButton, PKPeerPaymentMessagesMultiActionView, PKPeerPaymentMessagesNumberPadView, UILabel, PKPeerPaymentMessagesAmountStepperView, UIView;

@interface PKPeerPaymentMessagesContentAmountEntryView : UIView {
    UIView *_containerView;
    UILabel *_showKeypadHint;
    UIButton *_showKeypadButton;
    BOOL _usesAccessibilityLayout;
}

@property (readonly, nonatomic) PKPeerPaymentMessagesAmountStepperView *amountStepperView;
@property (readonly, nonatomic) PKPeerPaymentMessagesNumberPadView *numberPadView;
@property (readonly, nonatomic) PKPeerPaymentMessagesMultiActionView *actionView;
@property (readonly, nonatomic) UILabel *balanceLabel;
@property (nonatomic) BOOL isAnimationAllowed;
@property (nonatomic) BOOL isKeypadSupported;
@property (nonatomic) BOOL isExpansionSupported;
@property (nonatomic) double percentExpanded;
@property (nonatomic) double navigationBarHeight;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (unsigned long long)style;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 progressToExpanded:(double)a1 isTemplate:(BOOL)a2;
- (void)_setBalanceLabelVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_setNumberPadVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_setShowKeypadHintVisible:(BOOL)a0 animated:(BOOL)a1;

@end
