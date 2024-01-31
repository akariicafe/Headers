@class SNAudioStreamAnalyzer, NSArray, NSString, NSMutableDictionary, SNDetectSoundRequest, NSObject;
@protocol OS_dispatch_queue, AXSDDetectorManagerDelegate;

@interface AXSDDetectorManager : NSObject <SNResultsObserving> {
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSMutableDictionary *_currentAssetIdsByType;
    NSMutableDictionary *_currentRequestsByAssetID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyzerQueue;
@property (weak, nonatomic) id<AXSDDetectorManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *currentDetectors;
@property (retain, nonatomic) SNDetectSoundRequest *currentGeneralApplianceRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detectorRequestForDetector:(id)a0;
+ (id)detectorRequestForGeneralApplianceDetector;
+ (void)initializeModelMap;
+ (id)modelPathForURL:(id)a0 detectionType:(id)a1;
+ (void)setTestBundle:(id)a0;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (BOOL)addAllDetectors;
- (BOOL)removeDetector:(id)a0;
- (void)_addCurrentRequest:(id)a0 withDetector:(id)a1;
- (BOOL)_addRequestToAnalyzer:(id)a0;
- (BOOL)_testAudioFile:(id)a0;
- (id)_currentAssetIDForDetectionType:(id)a0;
- (id)_currentRequestForDetectionType:(id)a0;
- (id)_currentRequests;
- (void)_removeAllRequestsFromAnalyzer;
- (void)_removeCurrentRequestForDetectionType:(id)a0;
- (void)_removeRequestFromAnalyzer:(id)a0;
- (BOOL)_startDetectionWithFormat:(id)a0;
- (void)_stopDetection;
- (BOOL)addDetector:(id)a0;
- (BOOL)addDetectorType:(id)a0;
- (BOOL)addGeneralApplianceDetector;
- (id)detectorRequestForDetectionType:(id)a0;
- (void)processAudioBuffer:(id)a0 atTime:(id)a1;
- (void)removeAllDetectors;
- (BOOL)removeDetectorType:(id)a0;
- (BOOL)removeGeneralApplianceDetector;
- (BOOL)startDetectionWithFormat:(id)a0;
- (BOOL)startGeneralApplianceDetectionWithFormat:(id)a0;
- (void)stopDetection;
- (BOOL)streamAnalyzerIsRunning;

@end
