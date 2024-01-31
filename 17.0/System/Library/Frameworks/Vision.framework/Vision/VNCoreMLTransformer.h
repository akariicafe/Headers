@class VNCoreMLModel;

@interface VNCoreMLTransformer : VNDetector

@property (readonly) VNCoreMLModel *model;

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)initWithOptions:(id)a0 model:(id)a1 error:(id *)a2;
- (BOOL)needsMetalContext;

@end
