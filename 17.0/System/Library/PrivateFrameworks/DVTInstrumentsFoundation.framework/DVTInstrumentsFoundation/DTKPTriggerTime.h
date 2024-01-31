@interface DTKPTriggerTime : DTKPTrigger

@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) BOOL profileEveryThread;
@property (readonly, nonatomic) unsigned int timerID;

+ (int)reinitializeKperf:(id *)a0;

- (int)stop:(id *)a0;
- (void)dealloc;
- (int)start:(id *)a0;
- (int)_configureTimer:(unsigned int)a0 actionID:(unsigned int)a1 period:(unsigned long long)a2 userData:(unsigned int)a3;
- (unsigned long long)_recordConfigWordsIntoBuffer:(unsigned long long *)a0;
- (unsigned int)_timerIDAlloc;
- (void)_timerIDDdealloc:(unsigned int)a0;
- (id)initWithCounterAllocatorProvider:(id)a0;
- (unsigned long long)triggerKind;

@end
