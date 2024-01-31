@protocol DTKPConfiguration, DTKPKtraceAggregator;

@interface DTKPSession : NSObject {
    unsigned int _sessionID;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    unsigned int _state;
    id<DTKPConfiguration> _config;
    id<DTKPKtraceAggregator> _aggregator;
}

@property (readonly, nonatomic) unsigned int sessionID;
@property (nonatomic) unsigned char recordingPriority;

+ (void)initialize;
+ (int)blessPid:(int)a0;

- (BOOL)resume:(id *)a0;
- (BOOL)stop:(id *)a0;
- (id)init;
- (void)dealloc;
- (BOOL)start:(id *)a0;
- (BOOL)isPaused;
- (id).cxx_construct;
- (BOOL)pause:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)_lockKPerf;
- (int)_unlockKperf;
- (id)initWithConfig:(id)a0 andAggregator:(id)a1;
- (id)swapOutCurrentDatastream:(id *)a0;

@end
