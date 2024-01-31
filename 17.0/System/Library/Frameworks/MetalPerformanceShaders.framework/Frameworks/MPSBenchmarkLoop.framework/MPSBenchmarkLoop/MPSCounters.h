@class NSArray, NSString, MPSCounterStatistics, NSObject, NSMutableArray;
@protocol MTLDevice, OS_dispatch_semaphore, MTLCommandQueue, MTLCommandQueueSPI;

@interface MPSCounters : NSObject {
    id<MTLCommandQueueSPI> _commandQueueSPI;
    BOOL _countersSupported;
    BOOL _supportsMultipass;
    NSArray *_allCounters;
    unsigned long long _nAvailableCounters;
    unsigned long long _vendor;
    BOOL _deviceHasCycleCounter;
    NSArray *_counterListsPerPass;
    unsigned long long _nPasses;
    NSArray *_passList;
    NSString *_extraCounterRequested;
    unsigned long long _commandBufferOffset;
    unsigned long long _encoderOffset;
    unsigned long long _commandOffset;
    unsigned long long _timeOffset;
    unsigned long long _cyclesOffset;
    unsigned long long _extraOffset;
    BOOL _countingEncoders;
    NSObject<OS_dispatch_semaphore> *_countingEncodersSemaphore;
    unsigned long long _encodersInWorkload;
    unsigned long long _iterationsDone;
    unsigned long long _numEncodesPerCommandBuffer;
    double _timePerEncode;
    MPSCounterStatistics *_counterStatistics;
    NSMutableArray *_whileCountingData;
}

@property (nonatomic) BOOL encoderCoalescing;
@property (nonatomic) BOOL useInterposer;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, retain, nonatomic) id<MTLCommandQueue> commandQueue;

- (void)dealloc;
- (void)startSampling;
- (void)disableCounters;
- (void)aggregatePerfSamples:(id)a0 commandBuffer:(id)a1;
- (int)countEncodersInWorkload:(id)a0 withExtraRequestedCounter:(id)a1 forStatistics:(id)a2 userSpecifiedIterations:(BOOL)a3 includingBlitSamples:(BOOL)a4;
- (int)enableCountersIncludingBlitSamples:(BOOL)a0;
- (id)initWithCommandQueue:(id)a0 addQeueuPerfSampleHandler:(BOOL)a1;
- (void)perfSampleHandlerWithCommandBuffer:(id)a0 data:(id)a1 numberOfSamples:(unsigned long long)a2;
- (void)printAllAvailableCounters;
- (int)requestCountersWithExtraRequestedCounter:(id)a0;
- (int)requestCountersWithExtraRequestedCounter:(id)a0 fillStats:(id)a1;

@end
