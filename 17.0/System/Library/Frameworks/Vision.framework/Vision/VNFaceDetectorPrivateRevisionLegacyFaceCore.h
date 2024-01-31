@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector

+ (id)_convertVNOptionsToFaceCoreSetupOptions:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)_convertVNOptionsToFaceCoreDetectOptions:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)_convertVNOptionsToFaceCoreExtractOptions:(id)a0;
+ (id)_convertVNOptionsToFaceCoreOptions:(id)a0 optionsMap:(id)a1;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;

@end
