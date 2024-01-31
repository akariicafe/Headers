@class UIBezierPath, NSString;

@interface _UIShape : NSObject <NSCopying>

@property (readonly, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) NSString *cornerCurve;
@property (readonly, nonatomic) unsigned long long cornerMask;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) BOOL isRect;
@property (readonly, nonatomic) UIBezierPath *outline;
@property (readonly, nonatomic) _UIShape *zeroOriginShape;

+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerCurve:(id)a2;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerCurve:(id)a2 cornerMask:(unsigned long long)a3;
+ (id)shapeWithPath:(id)a0;

- (id)shapeConvertedFromCoordinateSpace:(id)a0 toCoordinateSpace:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
