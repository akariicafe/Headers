@class UIButton;
@protocol PKPaymentSetupTransferCardDelegate;

@interface PKPaymentSetupTransferCardView : UIView

@property (retain, nonatomic) UIButton *transferBalanceButton;
@property (weak, nonatomic) id<PKPaymentSetupTransferCardDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createSubviews;
- (void)_transferBalanceButtonTapped:(id)a0;

@end
