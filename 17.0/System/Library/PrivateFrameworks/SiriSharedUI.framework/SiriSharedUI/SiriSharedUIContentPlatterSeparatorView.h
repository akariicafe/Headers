@class UIView;

@interface SiriSharedUIContentPlatterSeparatorView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (void)_setupBackgroundView;
- (double)_scale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupBackgroundViewSmall;

@end
