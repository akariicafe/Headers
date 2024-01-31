@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {
    struct MTLIndirectCommandBufferDescriptorState { unsigned long long commandTypes; BOOL inheritPipelineState; BOOL inheritBuffers; unsigned long long maxVertexBufferBindCount; unsigned long long maxFragmentBufferBindCount; unsigned long long maxKernelBufferBindCount; unsigned long long maxKernelThreadgroupMemoryBindCount; unsigned long long maxObjectBufferBindCount; unsigned long long maxMeshBufferBindCount; unsigned long long maxObjectThreadgroupMemoryBindCount; BOOL supportRayTracing; BOOL supportDynamicAttributeStride; unsigned long long resourceIndex; } _state;
}

@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long commandTypes;
@property (nonatomic) BOOL inheritPipelineState;
@property (nonatomic) BOOL inheritBuffers;
@property (nonatomic) unsigned long long maxVertexBufferBindCount;
@property (nonatomic) unsigned long long maxFragmentBufferBindCount;
@property (nonatomic) unsigned long long maxKernelBufferBindCount;
@property (nonatomic) unsigned long long maxKernelThreadgroupMemoryBindCount;
@property (nonatomic) unsigned long long maxObjectBufferBindCount;
@property (nonatomic) unsigned long long maxMeshBufferBindCount;
@property (nonatomic) unsigned long long maxObjectThreadgroupMemoryBindCount;
@property (nonatomic) BOOL supportRayTracing;
@property (nonatomic) BOOL supportDynamicAttributeStride;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
