@class UIActivityIndicatorView, UIView, PKPeerPaymentMessagesRoundedRectangleButton, UIButton;

@interface PKPeerPaymentMessagesMultiActionView : UIView {
    PKPeerPaymentMessagesRoundedRectangleButton *_leadingButton;
    PKPeerPaymentMessagesRoundedRectangleButton *_trailingButton;
    UIButton *_centerButton;
    UIActivityIndicatorView *_leadingActivityIndicator;
    UIActivityIndicatorView *_trailingActivityIndicator;
    UIView *_leadingActivityIndicatorBackground;
    UIView *_trailingActivityIndicatorBackground;
}

@property (nonatomic) unsigned long long leadingAction;
@property (nonatomic) unsigned long long trailingAction;
@property (nonatomic) unsigned long long centerAction;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL usesFlexibleButtonWidth;
@property (nonatomic) unsigned long long style;

- (id)init;
- (id)_secondaryButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_primaryButton;
- (id)_axIdentifierForAction:(unsigned long long)a0;
- (void)_handleActionButton:(id)a0;
- (double)_heightForPrimaryButtonForAvailableSize:(struct CGSize { double x0; double x1; })a0;
- (id)_titleForAction:(unsigned long long)a0;
- (void)setActivityIndicatorVisible:(BOOL)a0 forAction:(unsigned long long)a1;
- (void)setCenterButtonVisible:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forStyle:(unsigned long long)a1;

@end
