@class NSString, DVTStreamManager, DVTQueueBasedTimer;
@protocol DTKPConfiguration;

@interface DTKPKperfAggregator : NSObject <DTKPKtraceAggregator> {
    id<DTKPConfiguration> _config;
    DVTStreamManager *_manager;
    DVTQueueBasedTimer *_timer;
    BOOL _usingTimer;
    struct kperf_buf { } *_kperfBuffer;
    BOOL _kperfSample;
    BOOL _hasUsedKperf;
    unsigned long long _dataPulledSize;
    unsigned long long _numberOfPulls;
    struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } _startTime;
    struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } _endTime;
    unsigned long long _callbackCalledCount;
    unsigned long long _callbackNotificationCount;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    unsigned long long _id;
}

@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pause;
- (id)initWithConfig:(id)a0;
- (id)start;
- (id).cxx_construct;
- (id)stop;
- (id)resume;
- (void).cxx_destruct;
- (void)_resetStats;
- (void)_reportStats;
- (void)_kernelCallbackNotifyCallblock:(unsigned int)a0;
- (int)_flushDataFromKernel:(unsigned int)a0 more:(BOOL *)a1 error:(id *)a2;
- (id)_getKernelBufferLocked:(BOOL *)a0 error:(id *)a1;
- (id)_getKperfKernelBufferLocked:(BOOL *)a0 error:(id *)a1;
- (id)_kdebugReadWithMoreLocked:(BOOL *)a0 error:(id *)a1;
- (void)_kernelCallbackError;
- (unsigned int)_kernelCallbackImpl;
- (id)_kernelCallbackInit;
- (id)_kernelCallbackStart;
- (void)_kernelCallbackStop;
- (BOOL)_ktraceTeardown:(id *)a0;
- (void)_releaseKernelResources;
- (void)_reportCallbackStats;
- (void)_reportTimeStats;
- (id)swapOutCurrentDatastream:(id *)a0;

@end
