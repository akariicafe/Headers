@class RBSProcessHandle, BSAbsoluteMachTimer, NSObject;
@protocol OS_dispatch_queue;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    unsigned long long _baselineValue;
    unsigned long long _consumedValue;
    NSObject<OS_dispatch_queue> *_queue;
    BSAbsoluteMachTimer *_timer;
    RBSProcessHandle *_processHandle;
    double _timerFireInterval;
    unsigned long long _timerFireCount;
}

@property (nonatomic) long long type;
@property (nonatomic) struct { long long type; unsigned long long value; unsigned long long reserved; } allowance;

+ (id)provisionWithResourceType:(long long)a0 timeInterval:(double)a1;
+ (id)provisionWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;

- (void)_stopMonitoring;
- (void)dealloc;
- (BOOL)allowanceRemaining:(out struct { long long x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isResourceProvision;
- (BOOL)_queue_updateConsumption;
- (void)_prepareForReuse;
- (void)_updateProgress;
- (BOOL)_queue_calculateValueConsumed:(out unsigned long long *)a0;
- (id)initWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)_queue_noteAllowanceExhausted;
- (void)_queue_stopMonitoring;
- (void).cxx_destruct;
- (void)_queue_evaluateConsumptionFromTimer:(BOOL)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_beginMonitoring;

@end
