@class BWLimitedGMErrorLogger, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BWNodeBackPressureSource, OS_dispatch_semaphore;

@interface BWBackPressureNode : BWNode {
    unsigned int _numberOfInputs;
    NSMutableArray *_receivedPresentationTimestampByInput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _presentationTimestampLock;
    long long _initialSemaphoreValue;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _numEODMessagesReceived;
    BOOL _receivedFirstFrame;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *semaphoreSignalQueue;
@property (nonatomic) id<BWNodeBackPressureSource> backPressureSourceNode;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)init;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)_setSemaphore:(id)a0;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setInitialSemaphoreValue:(int)a0;
- (id)nodeSubType;
- (id)initWithNumberOfInputsAndOutputs:(unsigned int)a0 initialSemaphoreValue:(long long)a1;
- (void)_handleUpdatedPresentationTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forIndex:(unsigned long long)a1;

@end
