@class MPSWorkloadInfoCapture, NSString, MPSCommandBuffer;
@protocol MTLDevice, MTLComputeCommandEncoder;

@interface MPSBenchmarkLoopComputeCommandEncoder : NSObject <MTLComputeCommandEncoder> {
    MPSCommandBuffer *_owningMPSCommandBuffer;
    id<MTLComputeCommandEncoder> _originalCommandEncoder;
    void *_mpsDevice;
}

@property (nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture;
@property (readonly) unsigned long long dispatchType;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setComputePipelineState:(id)a0;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)endEncoding;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)initWithMPSCommandBuffer:(id)a0 commandEncoder:(id)a1 mpsDevice:(void *)a2;

@end
