@interface VNFaceprintUpgradeDetector : VNEspressoprintUpgradeDetector

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (Class)espressoprintClass;
+ (BOOL)isSupportedUpgradeFromPreviousEspressoprint:(id)a0 toNewLowResolutionEspressoprint:(id)a1;

- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;

@end
