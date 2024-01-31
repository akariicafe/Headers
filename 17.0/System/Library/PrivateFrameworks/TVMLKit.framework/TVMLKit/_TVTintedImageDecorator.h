@class IKColor;

@interface _TVTintedImageDecorator : TVImageScaleDecorator

@property (readonly, retain, nonatomic) IKColor *tintColor;

- (void).cxx_destruct;
- (id)decoratorIdentifier;
- (void)drawInContext:(id)a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithTintColor:(id)a0;

@end
