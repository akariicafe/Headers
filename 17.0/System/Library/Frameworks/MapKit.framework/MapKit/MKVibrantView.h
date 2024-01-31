@interface MKVibrantView : UIVisualEffectView

@property (nonatomic) long long style;

- (void)setBackgroundColor:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContinuousCornerRadius:(double)a0;
- (id)initWithEffect:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
