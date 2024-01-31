@class LAUICheckmarkLayer, UIView;

@interface PKAccountBillPaymentCheckmarkRingView : UIView

@property (retain, nonatomic) UIView *ringView;
@property (retain, nonatomic) LAUICheckmarkLayer *checkmarkLayer;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithRingView:(id)a0;

@end
