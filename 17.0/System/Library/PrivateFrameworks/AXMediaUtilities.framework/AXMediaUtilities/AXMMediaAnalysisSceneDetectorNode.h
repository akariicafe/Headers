@class MADVISceneClassificationRequest;

@interface AXMMediaAnalysisSceneDetectorNode : AXMEvaluationNode

@property (retain, nonatomic, setter=_setSceneClassificationRequest:) MADVISceneClassificationRequest *_sceneClassificationRequest;
@property (nonatomic) unsigned int taxonomyOptions;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)addNSFWResultToContext:(id)a0 forIdentifier:(id)a1 confidence:(double)a2 markAsSensitiveCaptionContent:(BOOL)a3;
+ (BOOL)addSignificantEventResultToContext:(id)a0 forIdentifier:(id)a1 confidence:(double)a2 markAsSensitiveCaptionContent:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_addNSFWClassificationObservations:(id)a0 toContext:(id)a1;
- (void)_addRecognizedObjectObservations:(id)a0 toContext:(id)a1;
- (void)_addSaliencyImageObservations:(id)a0 toContext:(id)a1;
- (void)_addSceneClassificationObservations:(id)a0 toContext:(id)a1;
- (void)_addSceneDetectorFeaturesToContext:(id)a0 fromResults:(id)a1;
- (void)_addSignificantEventClassificationObservations:(id)a0 toContext:(id)a1;
- (BOOL)_shouldIncludeSceneLabelForOCRDocumenTypeDetection:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;

@end
