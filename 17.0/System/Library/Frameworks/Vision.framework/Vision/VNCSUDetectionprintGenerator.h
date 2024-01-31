@interface VNCSUDetectionprintGenerator : VNDetector

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (BOOL)_getCSUDetectionprintNetworkConfiguration:(id *)a0 forConfigurationOptions:(id)a1 error:(id *)a2;

- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)_observationsFromNetworkOutput:(id)a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;
- (BOOL)needsMetalContext;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
