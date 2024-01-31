@class UIColor;

@interface CPSEntityStylesDropShadow : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;

- (void).cxx_destruct;
- (void)applyShadowToLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectsForSource:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shadowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 unionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 positionTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a3;

@end
