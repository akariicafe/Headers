@interface QL_UIBezierPath : NSObject

@property (nonatomic) struct CGPath { } *CGPath;
@property (nonatomic) double lineWidth;

+ (id)valueWithCGSize:(struct CGSize { double x0; double x1; })a0;
+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byRoundingCorners:(unsigned long long)a1 cornerRadius:(double)a2;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 cornerRadii:(id)a2 segments:(int)a3 smoothPillShapes:(BOOL)a4;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 cornerRadius:(struct CGSize { double x0; double x1; })a2 segments:(int)a3;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRoundedCorners:(unsigned long long)a1 cornerRadius:(double)a2 segments:(int)a3 legacyCorners:(BOOL)a4;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;

- (id)_initWithCGMutablePath:(struct CGPath { } *)a0;

@end
