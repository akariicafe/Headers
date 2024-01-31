@class BGRBilinearUpsampler, VNMetalContext, VNEspressoResources;
@protocol MTLComputePipelineState;

@interface VNTrackMaskDetector : VNEspressoModelFileBasedDetector {
    VNEspressoResources *initializationModel;
    VNEspressoResources *updateModel;
    struct __CVBuffer { } *highResMaskPixelBuffer;
    BGRBilinearUpsampler *_bilinearUpsampler;
    VNMetalContext *_postProcessingMetalContext;
    id<MTLComputePipelineState> _applyMaskComputeState;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)_loadModelFromFileName:(id)a0 inputBlobNames:(id)a1 outputBlobNames:(id)a2 forComputeDevice:(id)a3 configurationOptions:(id)a4 error:(id *)a5;
- (BOOL)_removeBackgroundFromPixelBuffer:(SEL)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 usingMask:(struct __CVBuffer { } *)a2 offset:(struct __CVBuffer { } *)a3 error:(id *)a4;
- (BOOL)_runInitializerModelWithLockedPixelBuffer:(struct __CVBuffer { } *)a0 forState:(id)a1 error:(id *)a2;
- (BOOL)_runUpdateModelWithLockedPixelBuffer:(struct __CVBuffer { } *)a0 forState:(id)a1 outputQualityEspressoBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a2 error:(id *)a3;
- (struct __CVBuffer { } *)_upsampleLowResMask:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 reference:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
