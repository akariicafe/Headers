@class NSString, MPSCommandBuffer;
@protocol MTLBuffer, MTLDevice, MTLComputePipelineState, MTLComputeCommandEncoder;

@interface MPSPredicatedCommandEncoder : NSObject <MTLComputeCommandEncoder> {
    MPSCommandBuffer *_owningMPSCommandBuffer;
    void *_mpsDevice;
    id<MTLComputePipelineState> _userBoundPipelineState;
    struct UserBufferBindingData_s { id<MTLBuffer> userBoundBuffer; BOOL userBoundBuffer_set; void *userBoundBytes; unsigned long long userBoundBytes_length; BOOL userBoundBytes_set; unsigned long long userBoundOffset; } _userBinding1;
    struct UserBufferBindingData_s { id<MTLBuffer> userBoundBuffer; BOOL userBoundBuffer_set; void *userBoundBytes; unsigned long long userBoundBytes_length; BOOL userBoundBytes_set; unsigned long long userBoundOffset; } _userBinding2;
    struct UserBufferBindingData_s { id<MTLBuffer> userBoundBuffer; BOOL userBoundBuffer_set; void *userBoundBytes; unsigned long long userBoundBytes_length; BOOL userBoundBytes_set; unsigned long long userBoundOffset; } _userBinding3;
}

@property (readonly, nonatomic) id<MTLComputeCommandEncoder> computeCommandEncoder;
@property (readonly) unsigned long long dispatchType;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicatedEncoderWithMPSCommandBuffer:(id)a0 commandEncoder:(id)a1 mpsDevice:(void *)a2;

- (void)dealloc;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setComputePipelineState:(id)a0;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)initWithMPSCommandBuffer:(id)a0 commandEncoder:(id)a1 mpsDevice:(void *)a2;

@end
