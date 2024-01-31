@class PSEVideoProcessor;

@interface MAFlashingLightsProcessor : NSObject

@property (retain, nonatomic) PSEVideoProcessor *pse;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProcessSurface:(struct __IOSurface { } *)a0;
- (id)processSurface:(struct __IOSurface { } *)a0 outSurface:(struct __IOSurface { } *)a1 timestamp:(double)a2 options:(id)a3;

@end
