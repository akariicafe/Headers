@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer {
    BOOL _custom;
}

@property (nonatomic) struct CGSize { double width; double height; } constraintSize;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double gradientHeight;

+ (id)consumerWithConstraintSize2:(struct CGSize { double x0; double x1; })a0;
+ (id)consumerWithConstraintSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (void)_drawGradientWithContext:(struct CGContext { } *)a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)imageForImage:(id)a0;

@end
