@class NSObject;
@protocol UICoordinateSpace;

@interface PXNonuniformTransform : NSObject <NSCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    double _minimumScale;
    double _maximumScale;
}

+ (id)horizontallyDominantTransformWithSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coordinateSpace:(id)a2 minimumScale:(double)a3 maximumScale:(double)a4;
+ (id)identityTransform;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)inverseTransform;
- (double)_adjustedZoomScale:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransformForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;

@end
