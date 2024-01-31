@class HMIVideoAnalyzerConfiguration, NSString, HMIFaceClassifierVIP, HMISessionEntityManager, NSDictionary, HMITorsoClassifier, HMFOSTransaction, HMISignificantActivityFcosDetector, NSMutableArray;

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMICameraVideoFrameAnalyzer, HMFLogging>

@property (class, readonly) NSDictionary *classHierarchyMap;

@property (readonly) NSDictionary *mediumConfidenceThresholds;
@property (readonly) NSDictionary *highConfidenceThresholds;
@property (readonly) HMISignificantActivityFcosDetector *significantActivityFcosDetector;
@property (readonly) NSMutableArray *backgroundEvents;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundTimeStamp;
@property (readonly) HMIFaceClassifierVIP *faceClassifier;
@property (readonly) HMITorsoClassifier *torsoClassifier;
@property (retain, nonatomic) HMFOSTransaction *transaction;
@property (readonly) HMIVideoAnalyzerConfiguration *analyzerConfiguration;
@property (readonly) HMISessionEntityManager *sessionEntityManager;
@property (readonly) struct CGSize { double x0; double x1; } inputDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)desLabelIndexForEventClass:(Class)a0;
+ (id)labelIndexForEventClass:(Class)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterestForMotionDetections:(id)a0 foregroundEvents:(id)a1 frameSize:(struct CGSize { double x0; double x1; })a2;
- (id)flushAndGetAnalysisStateUpdateForHome:(id)a0 enableFaceClassification:(BOOL)a1;
- (id)_analyzerEventsFromObjectDetections:(id)a0;
- (id)_eventsWithClassificationsFromEvents:(id)a0 videoFrame:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 homeUUID:(id)a3;
- (id)_eventsWithSessionEntitiesFromEvents:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 homeUUID:(id)a3;
- (id)_filterPackageEvents:(id)a0 backgroundEvents:(id)a1;
- (id)_predictEventsFromCropPixelBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)_simulatedEventForEventClass:(Class)a0;
- (id)_targetEventsSetFromEventTriggers:(long long)a0 enableFaceClassification:(BOOL)a1 enableTorsoRecognition:(BOOL)a2;
- (id)analyzeBackgroundFrame:(id)a0 packageEvents:(id)a1 newBackgroundEvents:(id)a2 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)analyzeFrame:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)eventsWithFaceEventsFromTorsoEventsFromEvents:(id)a0 homeUUID:(id)a1;
- (id)getAnalyzerEvents:(id)a0 eventTriggers:(long long)a1 enableFaceClassification:(BOOL)a2 enableTorsoRecognition:(BOOL)a3;
- (id)getPackageEvents:(id)a0 foregroundEvents:(id)a1 newBackgroundEvents:(id)a2 backgroundTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)initWithMediumConfidenceThresholds:(id)a0 highConfidenceThresholds:(id)a1 analyzerConfiguration:(id)a2 error:(id *)a3;
- (id)recognizeEvents:(id)a0 frame:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 homeUUID:(id)a3;

@end
