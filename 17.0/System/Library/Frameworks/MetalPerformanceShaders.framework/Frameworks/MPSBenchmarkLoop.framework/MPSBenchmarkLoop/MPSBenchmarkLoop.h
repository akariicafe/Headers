@class MPSCounters, NSObject;
@protocol MTLDevice, OS_dispatch_semaphore, MTLCommandQueue, MTLCommandQueueSPI;

@interface MPSBenchmarkLoop : NSObject {
    id<MTLCommandQueue> _commandQueueNonCounter;
    id<MTLCommandQueueSPI> _commandQueueSPI;
    NSObject<OS_dispatch_semaphore> *_loopRunningSemaphore;
    BOOL _encoderCoalescing;
    BOOL _useInterposer;
}

@property (readonly, retain, nonatomic) MPSCounters *counters;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) BOOL sampleMemory;
@property (nonatomic) BOOL useInterposer;
@property (nonatomic) unsigned long long numberOfCommandBuffersEncoded;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)benchmarkCPUWorkload:(id)a0 maxIterations:(unsigned long long)a1;
- (id)benchmarkUsingCPUTimeStampsWorkload:(id)a0;
- (id)benchmarkUsingCPUTimeStampsWorkload:(id)a0 maxInnerIterations:(unsigned long long)a1 maxOuterIterations:(unsigned long long)a2;
- (id)benchmarkWithWorkload:(id)a0 withExtraRequestedCounter:(id)a1 convergeOn:(unsigned long long)a2 includingBlitSamples:(BOOL)a3;
- (id)benchmarkWithWorkload:(id)a0 withExtraRequestedCounter:(id)a1 convergeOn:(unsigned long long)a2 includingBlitSamples:(BOOL)a3 maxInnerIterations:(unsigned long long)a4 maxOuterIterations:(unsigned long long)a5;
- (BOOL)encoderCoalescing;
- (void)printAllAvailableCounters;
- (id)runWorkloadOnce:(id)a0 capturingGPUTrace:(BOOL)a1;
- (void)setEncoderCoalescing:(BOOL)a0;

@end
