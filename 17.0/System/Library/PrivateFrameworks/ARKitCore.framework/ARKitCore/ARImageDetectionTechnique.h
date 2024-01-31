@class ARODTHandleManager, NSArray, NSDictionary, ARImageDetectionResultData, ARWorldTrackingPoseData, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARImageDetectionTechnique : ARImageBasedTechnique {
    NSArray *_referenceImages;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    NSObject<OS_dispatch_semaphore> *_loadingSemaphore;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARImageDetectionResultData *_referenceImageData;
    BOOL _finishedLoadingImages;
    BOOL _tracking;
    BOOL _deterministicMode;
    long long _maximumNumberOfTrackedImages;
    BOOL _continuousDetection;
    struct shared_ptr<arkit::KeyMapBuffer<const void *, std::vector<unsigned char>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _poseBuffer;
    BOOL _needsWorldTrackingPoseData;
}

@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose;
@property (readonly) ARODTHandleManager *odtTHandleManger;
@property (readonly) NSDictionary *referenceImageMap;
@property (readonly, nonatomic) BOOL finishedLoadingImages;
@property (nonatomic) BOOL enableAutomaticImageScaleEstimation;

+ (BOOL)_redetectionRequiredForContext:(id)a0;
+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)processData:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)prepare:(BOOL)a0;
- (void)_enqueueImageForTrackingSynced:(id)a0;
- (long long)captureBehavior;
- (id)_addReferenceImagesAppleCV3D;
- (void)_enqueueImageForTrackingNonBlocking:(id)a0;
- (void)_loadReferenceImages;
- (void)_loadReferenceImagesInBackground;
- (id)_trackImagesWithImageData:(id)a0 timeBudget:(double)a1;
- (BOOL)deterministicMode;
- (id)initWithReferenceImages:(id)a0;
- (id)initWithReferenceImages:(id)a0 maximumNumberOfTrackedImages:(long long)a1;
- (id)initWithReferenceImages:(id)a0 maximumNumberOfTrackedImages:(long long)a1 continuousDetection:(BOOL)a2 processingQueue:(id)a3;
- (id)initWithReferenceImages:(id)a0 maximumNumberOfTrackedImages:(long long)a1 processingQueue:(id)a2;
- (id)predictAtTimeStamp:(double)a0 timeBudget:(double)a1 predictedWorldTrackingPose:(id)a2;
- (id)processResultData:(id)a0 timestamp:(double)a1 context:(id)a2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (void)setPowerUsage:(unsigned long long)a0;
- (BOOL)syncWithProcessedImage;

@end
