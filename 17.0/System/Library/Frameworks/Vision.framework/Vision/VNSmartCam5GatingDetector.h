@class VisionCoreSmartCam5InferenceNetworkDescriptor, NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator;

@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector {
    VisionCoreSmartCam5InferenceNetworkDescriptor *_inferenceNetworkDescriptor;
    NSDictionary *_documentIdentifierToSceneLabels;
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;
}

@property (readonly, copy) NSArray *supportedDocumentElementIdentifiers;

+ (id)_inferenceNetworkDescriptorForConfiguration:(id)a0 error:(id *)a1;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelPathForConfiguration:(id)a0 error:(id *)a1;
+ (BOOL)providesSceneLabelsForConfiguration:(id)a0;
+ (BOOL)providesSegmentationLabelsForConfiguration:(id)a0;
+ (id)sceneLabelsFilePathForConfiguration:(id)a0 error:(id *)a1;
+ (id)segmentationLabelsFilePathForConfiguration:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 qosClass:(unsigned int)a3 error:(id *)a4;
- (id)supportedClassificationIdentifiersWithOptions:(id)a0 error:(id *)a1;

@end
