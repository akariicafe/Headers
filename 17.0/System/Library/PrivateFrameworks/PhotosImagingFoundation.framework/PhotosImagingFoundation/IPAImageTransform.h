@protocol IPAImageGeometry;

@interface IPAImageTransform : NSObject <IPAImageTransform> {
    id<IPAImageGeometry> _inputGeometry;
    id<IPAImageGeometry> _intrinsicGeometry;
}

+ (id)compositeTransforms:(id)a0;
+ (id)identityTransformForGeometry:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)inverseTransform;
- (BOOL)canAlignToPixelsExactly;
- (id)initWithInputGeometry:(id)a0 intrinsicGeometry:(id)a1;
- (id)inputGeometry;
- (id)intrinsicGeometry;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct Vector2d { double x0; double x1; })mapVector:(struct Vector2d { double x0; double x1; })a0;

@end
