@class UIColor;
@protocol UIActivityIndicatorProvider;

@interface _UIActivityIndicatorViewStyleView : UIView <_UIVisualStyleProviding>

@property (nonatomic) long long activityIndicatorViewStyle;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL hidesWhenStopped;
@property (readonly, weak, nonatomic) id<UIActivityIndicatorProvider> provider;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setUpAnimation;
- (void)tearDownAnimation;

@end
