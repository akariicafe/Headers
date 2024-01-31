@class FKTextDetector, NSMutableDictionary, CIContext;

@interface CITextDetector : CIDetector {
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
    FKTextDetector *textDetector;
}

@property (retain, nonatomic) CIContext *context;

- (void)dealloc;
- (id)adjustedImageFromImage:(id)a0 orientation:(int)a1 inverseCTM:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })ctmForImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(int)a1;
- (id)featuresInImage:(id)a0;
- (id)featuresInImage:(id)a0 options:(id)a1;
- (id)initWithContext:(id)a0 options:(id)a1;

@end
