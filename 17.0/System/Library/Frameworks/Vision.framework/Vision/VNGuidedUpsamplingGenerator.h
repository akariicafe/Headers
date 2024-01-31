@interface VNGuidedUpsamplingGenerator : VNDetector

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;

- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)_renderCIImage:(id)a0 toBuffer:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 rowBytes:(unsigned long long)a4 format:(unsigned int)a5 vnciContextManager:(id)a6 error:(id *)a7;
- (struct __CVBuffer { } *)_renderCIImage:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(unsigned int)a3 vnciContextManager:(id)a4 error:(id *)a5;

@end
