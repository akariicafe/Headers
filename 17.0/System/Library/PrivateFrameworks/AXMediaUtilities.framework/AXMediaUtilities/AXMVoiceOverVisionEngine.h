@class AXMNSFWDetectorNode, AXMMediaAnalysisCaptionDetectorNode, AXMObjectDetectorNode, AXMProminentObjectsDetectorNode, AXMCaptionDetectorNode, AXMFaceDetectorNode, AXMSignificantEventDetectorNode, AXMSceneDetectorNode, AXMTraitDetectorNode, AXMMediaAnalysisSceneDetectorNode, AXMMediaAnalysisFaceDetectorNode, AXMMediaAnalysisTextDetectorNode;

@interface AXMVoiceOverVisionEngine : AXMAXElementVisionEngine

@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector;
@property (weak, nonatomic) AXMObjectDetectorNode *objectDetector;
@property (weak, nonatomic) AXMFaceDetectorNode *faceDetector;
@property (weak, nonatomic) AXMTraitDetectorNode *traitDetector;
@property (weak, nonatomic) AXMProminentObjectsDetectorNode *prominentObjectsDetector;
@property (weak, nonatomic) AXMCaptionDetectorNode *captionDetector;
@property (weak, nonatomic) AXMNSFWDetectorNode *nsfwDetector;
@property (weak, nonatomic) AXMSignificantEventDetectorNode *significantEventDetector;
@property (weak, nonatomic) AXMMediaAnalysisSceneDetectorNode *madSceneDetector;
@property (weak, nonatomic) AXMMediaAnalysisFaceDetectorNode *madFaceDetector;
@property (weak, nonatomic) AXMMediaAnalysisTextDetectorNode *madTextDetector;
@property (weak, nonatomic) AXMMediaAnalysisCaptionDetectorNode *madCaptionDetector;
@property (nonatomic) unsigned long long genderStrategy;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)configuredOptionsDisableAllDetectors:(id /* block */)a0 elementOptions:(unsigned int)a1 textRecognitionLevel:(id /* block */)a2 textDetectionLocales:(id /* block */)a3 preferringFullCaptions:(BOOL)a4;

@end
