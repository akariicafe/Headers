@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation {
    int mShapeType;
    double mAngle;
}

- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 shapeType:(int)a4 angle:(double)a5 documentRoot:(id)a6;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 shapeType:(int)a4 documentRoot:(id)a5;
- (BOOL)needsPressedStateBackground;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchEdgeInsets;

@end
