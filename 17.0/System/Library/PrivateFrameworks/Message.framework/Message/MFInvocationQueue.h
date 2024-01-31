@class NSString, NSMutableArray, NSConditionLock;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator> {
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _maxThreads;
}

@property (nonatomic) unsigned long long maxThreadCount;
@property (nonatomic) unsigned long long threadPriorityTrigger;
@property (nonatomic) double threadRecycleTimeout;
@property (readonly, nonatomic) unsigned long long invocationCount;
@property (readonly, nonatomic) unsigned long long threadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)flushAllInvocationQueues;
+ (id)sharedInvocationQueue;

- (id)init;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)removeAllItems;
- (void)didCancel:(id)a0;
- (void).cxx_destruct;
- (void)_drainQueue:(id)a0;
- (void)addInvocation:(id)a0;
- (id)initWithMaxThreadCount:(unsigned long long)a0;

@end
