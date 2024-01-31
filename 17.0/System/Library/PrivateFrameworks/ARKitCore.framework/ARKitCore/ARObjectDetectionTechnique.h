@class ARODTHandleManager, NSArray, NSDictionary, ARObjectDetectionResultData, ARWorldTrackingPoseData, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARObjectDetectionTechnique : ARImageBasedTechnique {
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_queue> *_loadObjectsQueue;
    ARObjectDetectionResultData *_latestResultData;
    ARODTHandleManager *_odtHandleManager;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    BOOL _deterministicMode;
}

@property BOOL finishedLoadingObjects;
@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose;
@property (readonly) NSDictionary *referenceObjecteMap;
@property (readonly, nonatomic) NSArray *detectionObjects;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)prepare:(BOOL)a0;
- (void)_enqueueObjectForDetectionNonBlocking:(id)a0;
- (void)_loadReferenceObjects;
- (void)_processImageDataInBackgound:(id)a0;
- (id)initWithDetectionObjects:(id)a0;
- (id)processResultData:(id)a0 timestamp:(double)a1 context:(id)a2;
- (double)requiredTimeInterval;

@end
