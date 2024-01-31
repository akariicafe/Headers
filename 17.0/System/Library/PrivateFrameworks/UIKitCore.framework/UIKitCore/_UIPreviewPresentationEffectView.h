@class UIColor;

@interface _UIPreviewPresentationEffectView : UIView

@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (copy, nonatomic) UIColor *shadowColor;
@property (nonatomic) BOOL shouldRasterizeForTransition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)blurRadius;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)setBlurRadius:(double)a0;

@end
