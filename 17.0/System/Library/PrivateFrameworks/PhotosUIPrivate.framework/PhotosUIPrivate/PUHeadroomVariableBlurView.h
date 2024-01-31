@class UIImage, CAFilter;

@interface PUHeadroomVariableBlurView : UIView

@property (readonly, nonatomic) CAFilter *blurFilter;
@property (retain, nonatomic) UIImage *currentBlurMaskImage;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)backdropLayer;
- (void).cxx_destruct;
- (void)_updateBlurProperties;

@end
