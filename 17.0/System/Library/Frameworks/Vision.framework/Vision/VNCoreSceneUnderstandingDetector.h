@interface VNCoreSceneUnderstandingDetector : VNDetector

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)_specialCaseRecognizedObjectsDuplicationsForOriginatingRequestSpecifier:(id)a0;
+ (id)allCityNatureIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allClassificationIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allRecognizedObjectIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allSignificantEventIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithConfigurationOptions:(id)a0 error:(id *)a1;
+ (BOOL)handlesRequestClass:(Class)a0 revision:(unsigned long long)a1;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)needsMetalContext;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
