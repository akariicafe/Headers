@class UIView;

@interface HRWDVisualEffectView : UIVisualEffectView

@property (retain, nonatomic) UIView *tintView;

+ (id)tintViewWithBlurEffectStyle:(long long)a0 color:(id)a1;
+ (id)ultraLightTintView;

- (id)initWithEffect:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
