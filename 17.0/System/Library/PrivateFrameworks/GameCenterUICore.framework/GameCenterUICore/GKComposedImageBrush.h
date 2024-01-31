@class UIImage;

@interface GKComposedImageBrush : GKImageBrush

@property (retain, nonatomic) UIImage *maskImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } maskInsets;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 input:(id)a2;
- (double)scaleForInput:(id)a0;

@end
