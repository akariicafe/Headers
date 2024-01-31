@class NSString, VCDispatchTimer;

@interface VCObject : NSObject {
    id _reportingAgent;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    VCDispatchTimer *_timeoutTimer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _timeoutMutex;
    struct OpaqueFigCFWeakReference { } *_reportingAgentWeak;
}

@property (retain, nonatomic) NSString *logPrefix;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

+ (void)terminateProcess:(id)a0 terminateSource:(id)a1 agent:(struct opaqueRTCReporting { } *)a2;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)startTimeoutTimer;
- (void)startDeallocTimer;
- (void)startDeallocTimerWithTimeout:(unsigned int)a0;
- (void)startTerminationTimer:(unsigned int)a0 terminationType:(int)a1;
- (void)stopTerminationTimer;
- (void)stopTimeoutTimer;

@end
