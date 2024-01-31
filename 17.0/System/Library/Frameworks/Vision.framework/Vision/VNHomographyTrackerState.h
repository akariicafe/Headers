@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VNHomographyTrackerState : NSObject <ICFlowControl, ICResultDelegate> {
    void *_analysisSession;
    NSObject<OS_dispatch_semaphore> *_analysisSemaphore;
    long long _analysisPreRollFramesRemaining;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultsLock;
    struct vector<std::tuple<simd_float3x3, float>, std::allocator<std::tuple<simd_float3x3, float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<simd_float3x3, float> *, std::allocator<std::tuple<simd_float3x3, float>>> { void *__value_; } __end_cap_; } _transformsAndConfidences;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ICReportFrameAnalysis:(id)a0 forPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withStats:(id)a2;
- (BOOL)ICShouldBeCanceled;

@end
