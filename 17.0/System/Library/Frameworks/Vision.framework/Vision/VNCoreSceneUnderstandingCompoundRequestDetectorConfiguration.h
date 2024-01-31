@class NSMutableArray, NSMutableDictionary;
@protocol MLComputeDeviceProtocol;

@interface VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration : NSObject {
    id<MLComputeDeviceProtocol> _mainStageComputeDevice;
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (id)detectorConfigurationOptions;
- (id)originalRequests;
- (void).cxx_destruct;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (id)initWithMainStageComputeDevice:(id)a0;
- (id)addCityNatureConfigurationForOriginalRequest:(id)a0;
- (id)addEntityNetClassificationConfigurationForOriginalRequest:(id)a0;
- (id)addImageAestheticsConfigurationForOriginalRequest:(id)a0;
- (id)addImageClassificationConfigurationForOriginalRequest:(id)a0;
- (id)addImageFingerprintsConfigurationForOriginalRequest:(id)a0;
- (id)addImageSaliencyAConfigurationForOriginalRequest:(id)a0;
- (id)addImageSaliencyOConfigurationForOriginalRequest:(id)a0;
- (id)addJunkConfigurationForOriginalRequest:(id)a0;
- (void)addOriginalRequest:(id)a0;
- (id)addRecognizeObjectsConfigurationForOriginalRequest:(id)a0;
- (id)addSceneprintConfigurationForOriginalRequest:(id)a0;
- (id)addSignificantEventConfigurationForOriginalRequest:(id)a0;
- (id)addVN5kJNH3eYuyaLxNpZr5Z7ziConfigurationForOriginalRequest:(id)a0;
- (void)cacheResultsInRequestPerformingContext:(id)a0;
- (id)mainStageComputeDevice;

@end
