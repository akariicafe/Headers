@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_kindToOriginalRequestsMapping;
    NSMutableDictionary *_detectorConfigurationOptions;
    NSMutableDictionary *_computeStageDeviceAssignments;
    unsigned long long _detectorModel;
}

- (id)detectorConfigurationOptions;
- (id)originalRequests;
- (void).cxx_destruct;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (void)addOriginalRequest:(id)a0 forKind:(unsigned long long)a1;
- (id)addSceneConfigurationForOriginalRequest:(id)a0;
- (void)addTilingWarningRecorder:(id)a0;
- (id)computeStageDeviceAssignments;
- (void)enumerateOriginalRequestsByKindUsingBlock:(id /* block */)a0;

@end
