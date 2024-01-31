@class MTLIndirectCommandBufferDescriptor, MTLIOAccelBuffer;
@protocol MTLIndirectRenderCommandEncoder, MTLIndirectComputeCommandEncoder;

@interface MTLIOAccelIndirectCommandBuffer : MTLIOAccelResource {
    MTLIOAccelBuffer *_privateICBuffer;
    unsigned long long _maxCommandCount;
    unsigned long long _commandBufferType;
    id<MTLIndirectComputeCommandEncoder> _privateIndirectComputeEncoder;
    id<MTLIndirectRenderCommandEncoder> _privateIndirectRenderEncoder;
    MTLIndirectCommandBufferDescriptor *_descriptor;
    struct MTLIndirectCommandBufferHeader { unsigned long long headerSize; unsigned int commandTypes; BOOL inheritPipelineState; BOOL inheritBuffers; unsigned char maxVertexBufferBindCount; unsigned char maxFragmentBufferBindCount; unsigned char maxKernelBufferBindCount; unsigned char maxObjectBufferBindCount; unsigned char maxMeshBufferBindCount; BOOL supportRayTracing; BOOL supportDynamicAttributeStride; unsigned char maxKernelThreadgroupMemoryBindCount; unsigned char maxObjectThreadgroupMemoryBindCount; unsigned long long size; } _internalHeader;
}

@property (readonly) MTLIOAccelBuffer *privateICBuffer;
@property (readonly) unsigned long long commandBufferType;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long size;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (BOOL)isComplete;
- (unsigned long long)gpuHandle;
- (void)dealloc;
- (void)waitUntilComplete;
- (unsigned long long)uniqueIdentifier;
- (void)makeAliasable;
- (BOOL)isAliasable;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (void)resetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (void)getHeader:(void **)a0 headerSize:(unsigned long long *)a1;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1 maxCommandCount:(unsigned long long)a2;

@end
