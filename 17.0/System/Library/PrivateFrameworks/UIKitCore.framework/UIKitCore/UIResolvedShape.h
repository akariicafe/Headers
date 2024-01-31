@class UIBezierPath, UIShape, NSString;

@interface UIResolvedShape : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ cachedShape;
}

@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) UIShape *shape;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)_shapeByClippingToShape:(id)a0;
- (id)_shapeByConvertingFromSpace:(id)a0 toSpace:(id)a1;
- (id)shapeByApplyingInset:(double)a0;
- (id)shapeByApplyingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
