@class DTKPCPUCounterAllocator, NSObject;
@protocol DTKPTriggerCounterAllocatorProvider, OS_dispatch_semaphore;

@interface DTKPTrigger : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) unsigned int actionID;
@property (nonatomic) unsigned int samplers;
@property (readonly, nonatomic) id<DTKPTriggerCounterAllocatorProvider> counterAllocatorProvider;
@property (readonly, retain, nonatomic) DTKPCPUCounterAllocator *counterAllocator;
@property (readonly, retain, nonatomic) DTKPCPUCounterAllocator *queryCounterAllocator;
@property (readonly, nonatomic) BOOL requestsPMCSampling;
@property (readonly, nonatomic) unsigned int triggerID;
@property (readonly) unsigned long long triggerKind;
@property (readonly) const char *triggerKindRepr;
@property (nonatomic) int targetPid;
@property (nonatomic) BOOL collectUserStacks;
@property (nonatomic) BOOL collectKernelStacks;
@property (readonly, nonatomic) unsigned long long pmcEventCount;

+ (int)reinitializeKperf:(id *)a0;

- (int)stop:(id *)a0;
- (id)init;
- (void)dealloc;
- (int)start:(id *)a0;
- (void).cxx_destruct;
- (void)_actionDealloc:(unsigned int)a0;
- (unsigned int)_actionAlloc;
- (int)_setFilterByPid:(int)a0 forAction:(unsigned int)a1;
- (int)_setSamplers:(unsigned int)a0 forAction:(unsigned int)a1;
- (int)addPMCEventNamed:(id)a0 error:(id *)a1;
- (id)initWithCounterAllocatorProvider:(id)a0;

@end
