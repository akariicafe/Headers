@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARImageBasedTechnique : ARTechnique {
    NSMutableArray *_pendingResultData;
    NSMutableArray *_pendingFrameReferences;
    NSMutableArray *_pendingRequestContexts;
    NSObject<OS_dispatch_semaphore> *_pendingRequestsSemaphore;
}

- (id)init;
- (id)processData:(id)a0;
- (id)_fullDescription;
- (void).cxx_destruct;
- (BOOL)context:(id)a0 matchesFrameReference:(id)a1;
- (long long)getDeviceOrientationFromImageData:(id)a0;
- (void)prepareResultData:(id)a0 forContext:(id)a1;
- (void)pushResultData:(id)a0 forFrame:(struct __CVBuffer { } *)a1;
- (void)pushResultData:(id)a0 forFrameReference:(id)a1;
- (void)pushResultData:(id)a0 forTimestamp:(double)a1;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
