@interface PBSqueezeFilter : PBFilter {
    float lastInputX;
    float lastInputY;
    float lastInputRadius;
    float lastInputScale;
    float _inputAmount;
    BOOL firstTime;
}

@property struct CGPoint { double x; double y; } inputPoint;
@property float inputAmount;

- (void)setDefaults;
- (void)setInputAmount:(float)a0;
- (float)inputAmount;
- (BOOL)needsWrapMirror;
- (void)applyParametersToCIFilter:(BOOL)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)ciFilterName;

@end
