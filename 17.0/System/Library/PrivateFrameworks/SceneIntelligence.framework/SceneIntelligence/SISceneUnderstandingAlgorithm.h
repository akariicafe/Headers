@class SIScaler, SISceneUnderstandingResult, SISceneUnderstanding;

@interface SISceneUnderstandingAlgorithm : NSObject {
    SISceneUnderstanding *_segmentation;
    SISceneUnderstandingResult *_result;
    SIScaler *_scalerOne;
}

+ (struct CGSize { double x0; double x1; })outputResolution;

- (void).cxx_destruct;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 normalsOutput:(struct __IOSurface { } *)a3 orientation:(long long)a4;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0 andComputeEngine:(long long)a1;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 normalsOutput:(struct __IOSurface { } *)a3;

@end
