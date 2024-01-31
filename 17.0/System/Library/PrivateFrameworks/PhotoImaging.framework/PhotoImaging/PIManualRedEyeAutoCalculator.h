@interface PIManualRedEyeAutoCalculator : PIRedEyeAutoCalculator {
    struct CGPoint { double x; double y; } _location;
    double _touchDiameter;
}

- (id)_options;
- (void)_configureRequest:(id)a0;
- (id)initWithComposition:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 touchDiameter:(double)a2;

@end
