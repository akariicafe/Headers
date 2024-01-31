@interface FIUIChartColor : NSObject {
    struct CGGradient { } *_gradient;
    struct CGColor { } *_color;
}

@property (nonatomic) double threshold;

- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)initWithThreshold:(double)a0 color:(id)a1;
- (id)initWithThreshold:(double)a0 startColor:(id)a1 endColor:(id)a2;

@end
