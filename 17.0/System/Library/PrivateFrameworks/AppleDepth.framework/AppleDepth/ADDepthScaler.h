@interface ADDepthScaler : NSObject

@property (readonly, nonatomic) float interpThreshold;
@property (readonly, nonatomic) float noDepthOutputValue;

+ (id)defaultScaler;
+ (id)scalerWithInterpThreshold:(float)a0 andNoDepthOutputValue:(float)a1;

- (long long)scaleDepthBuffer:(struct __CVBuffer { } *)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toBuffer:(struct __CVBuffer { } *)a2;
- (long long)scaleDepthBuffer:(struct __CVBuffer { } *)a0 withZoomFactor:(float)a1 toBuffer:(struct __CVBuffer { } *)a2;

@end
