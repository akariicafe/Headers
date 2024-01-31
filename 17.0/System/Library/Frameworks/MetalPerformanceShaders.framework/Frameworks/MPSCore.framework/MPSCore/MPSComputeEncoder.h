@class NSString;
@protocol MTLComputePipelineState, MTLDevice, MTLComputeCommandEncoder;

@interface MPSComputeEncoder : NSObject <MTLComputeCommandEncoder, MTLCommandEncoder> {
    id<MTLComputeCommandEncoder> _encoder;
    id<MTLComputePipelineState> _state;
}

@property (readonly) unsigned long long dispatchType;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setComputePipelineState:(id)a0;
- (id)initWithCommandBuffer:(id)a0 withDispatchType:(unsigned long long)a1;
- (id)computeCommandEncoder;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (BOOL)respondsToSelector:(SEL)a0;

@end
