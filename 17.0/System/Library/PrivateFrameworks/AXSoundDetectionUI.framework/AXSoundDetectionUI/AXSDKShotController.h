@class NSString, AXSDDetectorManager, AXSDKShotDetectorQueueManager, NSMutableDictionary, AXSDListenEngine, AXSDKShotRecordingManager, NSObject, HearingMLHelperService, AXSDKShotDetector;
@protocol OS_dispatch_queue;

@interface AXSDKShotController : NSObject <AXSDListenEngineDelegate, AXSDDetectorManagerDelegate, AXSDKShotRecordingManagerDelegate, HearingMLHelperServiceDelegate, AXSDUltronModelAssetManagerDelegate, AXSDKShotDetectorQueueManagerDelegate> {
    AXSDListenEngine *_listenEngine;
    AXSDKShotRecordingManager *_kShotRecordingManager;
    AXSDKShotDetectorQueueManager *_detectorQueueManager;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSMutableDictionary *_listenerHanders;
    HearingMLHelperService *_xpcHelperService;
    AXSDKShotDetector *_trainingDetector;
}

@property (nonatomic) unsigned long long visualizationBucketCount;
@property (retain, nonatomic) AXSDDetectorManager *detectorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)startListening;
- (void)deregisterListener:(id)a0;
- (void).cxx_destruct;
- (void)stopListening;
- (void)hearingMLHelperService:(id)a0 eventOccurred:(long long)a1;
- (void)assetsNotReadyForUltronManager:(id)a0;
- (void)_retrainModelIdentifierUpdated;
- (void)addGeneralApplianceDetector;
- (void)addListenType:(id)a0;
- (void)assetsReadyAndDetectorsAdded;
- (void)assetsReadyForUltronManager:(id)a0;
- (void)kickoffTrainingForDetector:(id)a0;
- (void)listenEngineDidStartWithInputFormat:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)receivedBuffer:(id)a0 atTime:(id)a1;
- (void)receivedBuffer:(id)a0 atTime:(id)a1 isFile:(BOOL)a2;
- (void)receivedCompletion:(id)a0;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)registerListener:(id)a0 forRecordingUpdates:(id /* block */)a1;
- (void)removeAllListenTypes;
- (void)savedTrainingRecordingForDetector:(id)a0;
- (void)startListeningToTrainDetector:(id)a0;

@end
