@class NSArray, OITSUBezierPath, OITSUColor;

@interface MFPPathGradientBrush : MFPGradientBrush {
    OITSUColor *mCenterColor;
    struct CGPoint { double x; double y; } mCenterPoint;
    NSArray *mSurroundColors;
    OITSUBezierPath *mPath;
}

- (void)setPath:(id)a0;
- (void).cxx_destruct;
- (void)setCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)endColor;
- (id)startColor;
- (void)setCenterColor:(id)a0;
- (void)createShading;
- (void)setSurroundColors:(id)a0;

@end
