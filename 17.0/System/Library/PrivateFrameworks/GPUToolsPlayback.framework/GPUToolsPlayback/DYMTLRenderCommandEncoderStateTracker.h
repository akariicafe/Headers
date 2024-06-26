@class __end_cap_, __end_;
@protocol MTLBuffer, MTLDepthStencilState, MTLSamplerState, MTLTexture, MTLRenderCommandEncoderSPI, MTLRenderPipelineState;

@interface DYMTLRenderCommandEncoderStateTracker : NSObject <DYMTLRenderCommandEncoderStateTracker> {
    id<MTLRenderCommandEncoderSPI> _renderEncoder;
    id<MTLRenderPipelineState> _renderPipelineState;
    struct vector<MTLScissorRect, std::allocator<MTLScissorRect>> { struct *__begin_; struct *__end_; struct __compressed_pair<MTLScissorRect *, std::allocator<MTLScissorRect>> { struct *__value_; } __end_cap_; } _scissorRects;
    float _blendColorRed;
    float _blendColorGreen;
    float _blendColorBlue;
    float _blendColorAlpha;
    float _depthBias;
    float _depthBiasSlopeScale;
    float _depthBiasClamp;
    unsigned int _frontStencilRef;
    unsigned int _backStencilRef;
    unsigned long long _triangleFillMode;
    unsigned long long _visibilityResultMode;
    unsigned long long _visibilityResultOffset;
    id<MTLDepthStencilState> _depthStencilState;
    unsigned long long _frontFacingWinding;
    unsigned long long _cullMode;
    unsigned long long _depthClipMode;
    float _lineWidth;
    float _tessellationFactorScale;
    id<MTLBuffer> _tessellationFactorBuffer;
    unsigned long long _tessellationFactorBufferOffset;
    unsigned long long _tessellationFactorBufferInstanceStride;
    BOOL _tessellationFactorSet;
    struct vector<__unsafe_unretained id<MTLHeap>, std::allocator<__unsafe_unretained id<MTLHeap>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<__unsafe_unretained id<MTLHeap> *, std::allocator<__unsafe_unretained id<MTLHeap>>> { id *__value_; } x1; } _usedHeaps;
    struct vector<DYMTLUsedResourceInfo, std::allocator<DYMTLUsedResourceInfo>> { struct DYMTLUsedResourceInfo *__begin_; struct DYMTLUsedResourceInfo *__end_; struct __compressed_pair<DYMTLUsedResourceInfo *, std::allocator<DYMTLUsedResourceInfo>> { struct DYMTLUsedResourceInfo *__value_; } __end_cap_; } _usedResources;
    struct DYMTLBoundBufferInfo { id<MTLBuffer> m_buffer; void *m_bytes; unsigned long long m_offsetOrLength; } _vertexBuffers[31];
    id<MTLTexture> _vertexTextures[128];
    struct DYMTLBoundSamplerInfo { id<MTLSamplerState> sampler; float minLOD; float maxLOD; } _vertexSamplers[16];
    struct DYMTLBoundBufferInfo { id<MTLBuffer> m_buffer; void *m_bytes; unsigned long long m_offsetOrLength; } _fragmentBuffers[31];
    id<MTLTexture> _fragmentTextures[128];
    struct DYMTLBoundSamplerInfo { id<MTLSamplerState> sampler; float minLOD; float maxLOD; } _fragmentSamplers[16];
    struct DYMTLBoundBufferInfo { id<MTLBuffer> m_buffer; void *m_bytes; unsigned long long m_offsetOrLength; } _tileBuffers[31];
    id<MTLTexture> _tileTextures[128];
    struct DYMTLBoundSamplerInfo { id<MTLSamplerState> sampler; float minLOD; float maxLOD; } _tileSamplers[16];
    struct DYMTLThreadgroupMemoryInfo { unsigned long long length; unsigned long long offset; } _threadgroupMemories[31];
    unsigned long long _amplificationMode;
    unsigned long long _amplificationValue;
    BOOL _amplificationModeSet;
    unsigned long long _amplificationCount;
    struct vector<MTLVertexAmplificationViewMapping, std::allocator<MTLVertexAmplificationViewMapping>> { struct *__begin_; struct *__end_; struct __compressed_pair<MTLVertexAmplificationViewMapping *, std::allocator<MTLVertexAmplificationViewMapping>> { struct *__value_; } __end_cap_; } _amplificationViewMappings;
    BOOL _amplificationCountSet;
    struct unordered_map<unsigned long, DYMTLStoreInfo, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, DYMTLStoreInfo>>> { struct __hash_table<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, DYMTLStoreInfo>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, DYMTLStoreInfo>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, DYMTLStoreInfo>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { float __value_; } __p3_; } __table_; } _colorStoreInfos;
    struct DYMTLStoreInfo { unsigned long long action; unsigned long long options; } _depthStoreInfo;
    struct DYMTLStoreInfo { unsigned long long action; unsigned long long options; } _stencilStoreInfo;
}

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) struct vector<MTLViewport, std::allocator<MTLViewport>> { struct *__begin_; struct *__end_; struct __compressed_pair<MTLViewport *, std::allocator<MTLViewport>> { struct *__value_; } __end_cap_; } viewports;

- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setLineWidth:(float)a0;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setViewport:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)descriptor;
- (BOOL)conformsToProtocol:(id)a0;
- (id).cxx_construct;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setScissorRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)setVertexAmplificationCount:(unsigned long long)a0 viewMappings:(const struct { unsigned int x0; unsigned int x1; } *)a1;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)useHeap:(id)a0;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setVisibilityResultMode:(unsigned long long)a0 offset:(unsigned long long)a1;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBlendColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)setCullMode:(unsigned long long)a0;
- (void)setDepthClipMode:(unsigned long long)a0;
- (void)setDepthStencilState:(id)a0;
- (void)setFragmentBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setFrontFacingWinding:(unsigned long long)a0;
- (void)setRenderPipelineState:(id)a0;
- (void)setStencilReferenceValue:(unsigned int)a0;
- (void)setFragmentTexture:(id)a0 atTextureIndex:(unsigned long long)a1 samplerState:(id)a2 atSamplerIndex:(unsigned long long)a3;
- (void)setTileBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setDepthBias:(float)a0 slopeScale:(float)a1 clamp:(float)a2;
- (void)setFragmentBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setFragmentSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFragmentTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTileBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTileTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTriangleFillMode:(unsigned long long)a0;
- (void)setVertexBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setFragmentBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVertexBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTileSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned int)backReferenceValue;
- (id)depthStencilState;
- (unsigned int)frontReferenceValue;
- (void)setFragmentBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setFragmentSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setFragmentSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setFragmentSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFragmentTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setScissorRects:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 count:(unsigned long long)a1;
- (void)setStencilFrontReferenceValue:(unsigned int)a0 backReferenceValue:(unsigned int)a1;
- (void)setTessellationFactorBuffer:(id)a0 offset:(unsigned long long)a1 instanceStride:(unsigned long long)a2;
- (void)setTessellationFactorScale:(float)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTileBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setTileBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setTileSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTileSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setTileSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setTileTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setVertexSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVertexSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setVertexSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setVertexSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVertexTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setViewports:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 count:(unsigned long long)a1;
- (id)renderPipelineState;
- (void)enumerateTileBuffersUsingBlock:(id /* block */)a0;
- (float)depthBias;
- (float)depthBiasClamp;
- (float)depthBiasSlopeScale;
- (unsigned long long)depthClipMode;
- (void)enumerateFragmentBuffersUsingBlock:(id /* block */)a0;
- (void)enumerateFragmentSamplersUsingBlock:(id /* block */)a0;
- (void)enumerateFragmentTexturesUsingBlock:(id /* block */)a0;
- (void)enumerateThreadgroupMemoryUsingBlock:(id /* block */)a0;
- (void)enumerateTileSamplersUsingBlock:(id /* block */)a0;
- (void)enumerateTileTexturesUsingBlock:(id /* block */)a0;
- (void)enumerateVertexBuffersUsingBlock:(id /* block */)a0;
- (void)enumerateVertexSamplersUsingBlock:(id /* block */)a0;
- (void)enumerateVertexTexturesUsingBlock:(id /* block */)a0;
- (void)setVertexAmplificationMode:(unsigned long long)a0 value:(unsigned long long)a1;
- (void)_applyHeapsAndResourcesToEncoder:(id)a0;
- (void)_applyFragmentStateToEncoder:(id)a0 rawBytesBlock:(id /* block */)a1;
- (void)_applyVertexStateToEncoder:(id)a0 rawBytesBlock:(id /* block */)a1;
- (void)_setDefaultsWithDescriptor:(id)a0 device:(id)a1;
- (void)applyAllStateToEncoder:(id)a0 rawBytesBlock:(id /* block */)a1;
- (void)applyVertexFragmentStateToEncoder:(id)a0 rawBytesBlock:(id /* block */)a1;
- (void)applyVertexStateToEncoder:(id)a0 rawBytesBlock:(id /* block */)a1;
- (id)initWithEncoder:(id)a0 descriptor:(id)a1;

@end
