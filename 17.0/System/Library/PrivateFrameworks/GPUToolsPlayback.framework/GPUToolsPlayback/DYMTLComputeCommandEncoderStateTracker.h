@class __end_cap_, __end_;
@protocol MTLComputeCommandEncoderSPI, MTLSamplerState, MTLTexture, MTLComputePipelineState, MTLBuffer;

@interface DYMTLComputeCommandEncoderStateTracker : NSObject <DYMTLComputeCommandEncoderStateTracker> {
    id<MTLComputeCommandEncoderSPI> _computeEncoder;
    id<MTLComputePipelineState> _computePipelineState;
    struct vector<id<MTLHeap>, std::allocator<id<MTLHeap>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<__strong id<MTLHeap> *, std::allocator<id<MTLHeap>>> { id *__value_; } x1; } _usedHeaps;
    struct vector<DYMTLUsedResourceInfo, std::allocator<DYMTLUsedResourceInfo>> { struct DYMTLUsedResourceInfo *__begin_; struct DYMTLUsedResourceInfo *__end_; struct __compressed_pair<DYMTLUsedResourceInfo *, std::allocator<DYMTLUsedResourceInfo>> { struct DYMTLUsedResourceInfo *__value_; } __end_cap_; } _usedResources;
    struct DYMTLBoundBufferInfo { id<MTLBuffer> m_buffer; void *m_bytes; unsigned long long m_offsetOrLength; } _buffers[31];
    id<MTLTexture> _textures[128];
    struct DYMTLBoundSamplerInfo { id<MTLSamplerState> sampler; float minLOD; float maxLOD; } _samplers[16];
    unsigned long long _threadgroupMemories[31];
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } _stageInRegion;
    id<MTLBuffer> _stageInRegionIndirectBuffer;
    unsigned long long _dispatchType;
    unsigned long long _stageInRegionIndirectBufferOffset;
    unsigned long long _imageBlockWidth;
    unsigned long long _imageBlockHeight;
    BOOL _hasSetStageInRegion;
}

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setComputePipelineState:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id).cxx_construct;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)useHeap:(id)a0;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)computePipelineState;
- (void)enumerateBuffersUsingBlock:(id /* block */)a0;
- (void)enumerateSamplersUsingBlock:(id /* block */)a0;
- (void)enumerateTexturesUsingBlock:(id /* block */)a0;
- (void)applyToEncoder:(id)a0 rawBytesBlock:(id /* block */)a1;
- (id)initWithEncoder:(id)a0 dispatchType:(unsigned long long)a1;

@end
