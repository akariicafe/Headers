@class CAGradientLayer;

@interface AFUIASPCoverView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;

+ (double)screenScale;
+ (id)ASPCoverViewColor;
+ (id)coverForeground:(BOOL)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isRightToLeft:(BOOL)a2 withTextWidth:(double)a3;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initCoverBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRightToLeft:(BOOL)a1;
- (id)initCoverViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRightToLeft:(BOOL)a1 withTextWidth:(double)a2;

@end
