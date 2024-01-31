@class NSString;

@interface UIShape : NSObject <UIShapeProvider, NSCopying> {
    void /* unknown type, empty encoding */ value;
}

@property (class, nonatomic, readonly) UIShape *rectShape;
@property (class, nonatomic, readonly) UIShape *circleShape;
@property (class, nonatomic, readonly) UIShape *capsuleShape;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

+ (id)_contentShape;
+ (id)fixedRectShapeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)fixedRectShapeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)fixedRectShapeWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerCurve:(long long)a2 maskedCorners:(unsigned long long)a3;
+ (id)rectShapeWithCornerRadius:(double)a0;
+ (id)rectShapeWithCornerRadius:(double)a0 cornerCurve:(long long)a1;
+ (id)rectShapeWithCornerRadius:(double)a0 cornerCurve:(long long)a1 maskedCorners:(unsigned long long)a2;
+ (id)shapeWithBezierPath:(id)a0;
+ (id)shapeWithProvider:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)_resolvedShapeInView:(id)a0;
- (id)resolvedShapeInContext:(id)a0;
- (id)shapeByApplyingInset:(double)a0;
- (id)shapeByApplyingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)shapeWithBezierPath:(id)a0;
- (id)shapeWithProvider:(id)a0;

@end
