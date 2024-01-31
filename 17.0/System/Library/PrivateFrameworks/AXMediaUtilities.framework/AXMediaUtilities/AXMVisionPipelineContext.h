@class AXMVisionResult, AXBookendMetric, AXMVisionAnalysisOptions, NSObject, NSDictionary, VNImageRequestHandler, NSMutableArray, AXMPipelineContextInput, NSMutableOrderedSet, AXMSequenceRequestManager, NSMutableSet, NSArray, NSNumber, VNSceneObservation, NSError, AXMetricSession;
@protocol NSSecureCoding, AXMetricContainer, NSCopying, OS_dispatch_queue;

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding> {
    AXMPipelineContextInput *_sourceInput;
    NSDictionary *_sourceParameters;
    BOOL _sourceProvidesOwnResults;
    NSMutableArray *_resultHandlers;
    AXBookendMetric *_piplelineMetric;
    VNSceneObservation *_sceneObservation;
    NSObject<OS_dispatch_queue> *_sceneObservationQueue;
    NSMutableArray *_detectedSceneClassifications;
    NSMutableArray *_mediaAnalysisDetectedSceneClassifications;
    NSMutableOrderedSet *_auxiliaryDetectors;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *features;
@property (retain, nonatomic) NSMutableSet *evaluatedFeatureTypes;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions;
@property (retain, nonatomic) AXMVisionResult *result;
@property (retain, nonatomic) NSNumber *appliedImageOrientation;
@property (retain, nonatomic) AXMetricSession *metricSession;
@property (retain, nonatomic) VNImageRequestHandler *visionImageRequestHandler;
@property (nonatomic) long long imageRegistrationState;
@property (retain, nonatomic) AXMSequenceRequestManager *sequenceRequestManager;
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext;
@property (retain, nonatomic) NSArray *effectiveTextDetectionLocales;
@property (nonatomic) BOOL shouldProcessRemotely;
@property (readonly, nonatomic) NSArray *resultHandlers;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) BOOL sourceProvidesResults;
@property (readonly, nonatomic) BOOL visionImageRequestHandlerIsLoaded;
@property (readonly, nonatomic) NSArray *sceneLabelsForOCRDocumentTypeDetection;
@property (readonly, nonatomic) NSArray *mediaAnalysisSceneLabelsForOCRDocumentTypeDetection;
@property (retain, nonatomic) id<NSCopying> cacheKey;
@property (nonatomic) BOOL shouldCallCompletionHandlersForEngineBusyError;
@property (nonatomic) BOOL shouldCallCompletionHandlersForEmptyResultSet;
@property (nonatomic) BOOL evaluationExclusivelyUsesVisionFramework;
@property (nonatomic) unsigned long long sequenceID;
@property (readonly, nonatomic) AXMPipelineContextInput *sourceInput;
@property (readonly, nonatomic) id<AXMetricContainer> pipelineMetric;

+ (id)contextWithSourceParameters:(id)a0 options:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)errorOccurred:(id)a0;
- (id)sceneObservation;
- (BOOL)_addSignificantEventFeatureGateIfNeededToFeature:(id)a0 category:(id)a1 minimumConfidence:(double)a2;
- (void)_commonInitWithDiagnosticsEnabled:(BOOL)a0;
- (id)_makeRequestHandlerForInput:(id)a0 options:(id)a1;
- (void)addAuxiliaryDetector:(id)a0;
- (void)addEvaluatedFeatureType:(unsigned long long)a0;
- (void)addMediaAnalysisSceneLabelForOCRDocumentTypeDetection:(id)a0;
- (void)addResultHandler:(id /* block */)a0;
- (void)addResultHandlers:(id)a0;
- (void)addSceneLabelForOCRDocumentTypeDetection:(id)a0;
- (void)appendFeature:(id)a0;
- (id)auxiliaryDetectors;
- (void)createSceneObservationIfNilWithBlock:(id /* block */)a0;
- (void)didFinishProcessingContext;
- (id)generateFileNameForImageWithPrefix:(id)a0 extension:(id)a1;
- (id)generateImageRepresentation;
- (id)initWithSourceParameters:(id)a0 options:(id)a1;
- (void)produceImage:(id /* block */)a0;
- (void)removeAllAuxiliaryDetectors;
- (void)setEquivalenceToken:(id)a0;
- (id)visionImageRequestHandlerWithOptions:(id)a0;
- (void)willBeginProcessingContext;

@end
