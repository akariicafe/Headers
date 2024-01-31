@class ABPK2DDetectionPostprocess, ABPK2DDetectionResult, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {
    double _extrapolationTime;
    NSObject<OS_dispatch_semaphore> *_previous3DSkeletonSemaphore;
    BOOL _shouldPush3DSupportSkeleton;
    BOOL _use3DSupportSkeletonForExtrapolation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _deterministic;
    ABPK2DDetectionPostprocess *_postprocess2d;
}

@property (readonly, nonatomic) ABPK2DDetectionResult *abpkPrevious3DSkeleton;

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (void)prepare:(BOOL)a0;
- (void)_process2DSkeletonRawEspressoResultInBackground:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (double)requiredTimeInterval;

@end
