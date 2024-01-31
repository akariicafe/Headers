@class NSString, NSError, MPSPredicate;
@protocol MTLDevice, MTLCommandBuffer, MPSHeapProvider, MTLLogContainer, MTLCommandQueue, MTLBuffer;

@interface MPSCommandBuffer : NSObject <MTLCommandBuffer> {
    id<MTLBuffer> _currentDispatchBuffer;
    unsigned long long _offsetToCurrentFree;
    void *_mpsDevice;
}

@property struct MPSCommandBufferDescriptor { unsigned long long encoderCount; unsigned long long producedValues; } mpsCommandBufferDescriptor;
@property (readonly, retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, retain, nonatomic) id<MTLCommandBuffer> rootCommandBuffer;
@property (retain, nonatomic) MPSPredicate *predicate;
@property (retain, nonatomic) id<MPSHeapProvider> heapProvider;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned long long errorOptions;
@property (copy) NSString *label;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) id<MTLLogContainer> logs;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandBufferFromCommandQueue:(id)a0;
+ (id)commandBufferWithCommandBuffer:(id)a0;

- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithCommandBuffer:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)commitAndContinue;
- (id)dispatchBufferWithOffset:(unsigned long long *)a0;
- (void)prefetchHeapForWorkloadSize:(unsigned long long)a0;

@end
