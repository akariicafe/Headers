@class NSMutableDictionary, VisionCoreSceneNetInferenceNetworkDescriptor;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject {
    VisionCoreSceneNetInferenceNetworkDescriptor *_inferenceNetworkDescriptor;
    NSMutableDictionary *_originatingRequestSpecifierToOperationPoints;
}

- (void).cxx_destruct;
- (id)initWithInferenceNetworkDescriptor:(id)a0;
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)a0 error:(id *)a1;

@end
