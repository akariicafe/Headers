@class VisionCoreE5RTInferenceFunctionDescriptor, VisionCoreE5RTExecutionContext;

@interface VNE5RTBasedDetector : VNDetector {
    VisionCoreE5RTInferenceFunctionDescriptor *_functionDescriptor;
    VisionCoreE5RTExecutionContext *_executionContext;
}

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)E5RTProgramLibraryCompilationOptionsForModelSource:(id)a0 error:(id *)a1;
+ (id)E5RTFunctionDescriptorForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)E5RTProgramLibraryForModelURL:(id)a0 error:(id *)a1;
+ (id)classificationIdentifiersForConfigurationOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)newE5RTExecutionContextForFunctionDescriptor:(id)a0 configurationOptions:(id)a1 error:(id *)a2;
- (id)newE5RTExecutionInputsForFunctionDescriptor:(id)a0 croppedPixelBuffer:(struct __CVBuffer { } *)a1 options:(id)a2 error:(id *)a3;
- (id)observationsFromE5RTExecutionOutputs:(id)a0 forFunctionDescriptor:(id)a1 originatingRequestSpecifier:(id)a2 options:(id)a3 error:(id *)a4;

@end
