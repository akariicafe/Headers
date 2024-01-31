@class HMITimeIntervalAverage, NSString, NSCondition, NSObject;
@protocol OS_dispatch_queue, HMIVideoCommandBufferDelegate;

@interface HMIVideoCommandBuffer : HMIVideoProcessingNode <HMFLogging> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
}

@property unsigned long long size;
@property (readonly) NSCondition *condition;
@property (readonly) BOOL isFull;
@property (readonly) HMITimeIntervalAverage *sampleBufferDelay;
@property (weak) id<HMIVideoCommandBufferDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) double delay;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (readonly) BOOL isEmpty;
@property (readonly) unsigned long long capacity;
@property (readonly) float fillRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)flush;
- (id)initWithMaxCapacity:(unsigned long long)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)flushAsync;
- (void)handleBlock:(id /* block */)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
