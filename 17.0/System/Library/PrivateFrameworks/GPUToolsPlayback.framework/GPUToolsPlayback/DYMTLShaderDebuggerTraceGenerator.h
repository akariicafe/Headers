@class NSString, NSDictionary, DYMTLIndirectArgumentBufferManager, NSData, DYMTLCommonDebugFunctionPlayer;
@protocol MTLArgumentEncoder, MTLSamplerState, MTLTexture, MTLBuffer;

@interface DYMTLShaderDebuggerTraceGenerator : NSObject {
    DYMTLCommonDebugFunctionPlayer *_player;
    DYMTLIndirectArgumentBufferManager *_indirectArgumentManager;
    id<MTLBuffer> _traceBuffer;
    NSString *_errorStr;
    id<MTLBuffer> _placeholderBuffer;
    id<MTLTexture> _placeholderTexture;
    id<MTLSamplerState> _placeholderSamplerState;
    struct map<MTLTextureType, id<MTLTexture>, std::less<MTLTextureType>, std::allocator<std::pair<const MTLTextureType, id<MTLTexture>>>> { struct __tree<std::__value_type<MTLTextureType, id<MTLTexture>>, std::__map_value_compare<MTLTextureType, std::__value_type<MTLTextureType, id<MTLTexture>>, std::less<MTLTextureType>>, std::allocator<std::__value_type<MTLTextureType, id<MTLTexture>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLTextureType, id<MTLTexture>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<MTLTextureType, std::__value_type<MTLTextureType, id<MTLTexture>>, std::less<MTLTextureType>>> { unsigned long long __value_; } __pair3_; } __tree_; } _placeholderTextures;
    id<MTLArgumentEncoder> _dummyArgumentEncoder;
    id<MTLBuffer> _dummyArgumentBuffer;
    struct map<id<MTLSamplerState>, unsigned long long, std::less<id<MTLSamplerState>>, std::allocator<std::pair<const id<MTLSamplerState>, unsigned long long>>> { struct __tree<std::__value_type<id<MTLSamplerState>, unsigned long long>, std::__map_value_compare<id<MTLSamplerState>, std::__value_type<id<MTLSamplerState>, unsigned long long>, std::less<id<MTLSamplerState>>>, std::allocator<std::__value_type<id<MTLSamplerState>, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<id<MTLSamplerState>, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<id<MTLSamplerState>, std::__value_type<id<MTLSamplerState>, unsigned long long>, std::less<id<MTLSamplerState>>>> { unsigned long long __value_; } __pair3_; } __tree_; } _replacedSamplerStates;
    NSDictionary *_constantSamplerReflection;
    struct unordered_map<unsigned long, id<MTLBuffer>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, id<MTLBuffer>>>> { struct __hash_table<std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, id<MTLBuffer>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, id<MTLBuffer>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, id<MTLBuffer>>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { float __value_; } __p3_; } __table_; } _bytesBufferReplacements;
    int _traceType;
    NSData *_metadata;
    unsigned long long _traceBufferVersion;
    NSString *_onlineSrc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_createAndSetInstrumentedComputePipelineStateWithDescriptor:(id)a0 computeCommandEncoder:(id)a1;
- (BOOL)_createAndSetInstrumentedRenderPipelineStateWithDescriptor:(id)a0 renderCommandEncoder:(id)a1 roiType:(int)a2;
- (BOOL)_createAndSetInstrumentedTileRenderPipelineStateWithDescriptor:(id)a0 renderCommandEncoder:(id)a1;
- (id)_createInstrumentedFunctionWithInstrumentedLibrary:(id)a0 originalFunction:(id)a1;
- (BOOL)_createTraceBufferWithGenerationOptions:(id)a0;
- (BOOL)_fragmentBindingNeedsPlaceholderResource:(id)a0 renderCommandEncoder:(id)a1;
- (id)_generateConstantSamplerReflectionWithUniqueIdentifiers:(id)a0 descriptors:(id)a1;
- (id)_generateResourceResolutionRemappingTables;
- (id)_instrumentLibrary:(id)a0 generationOptions:(id)a1;
- (BOOL)_kernelBindingNeedsPlaceholderResource:(id)a0 computeCommandEncoder:(id)a1;
- (id)_placeholderTextureWithType:(unsigned long long)a0;
- (BOOL)_prepareComputeCommandEncoder:(id)a0 generationOptions:(id)a1;
- (BOOL)_prepareRenderCommandEncoder:(id)a0 generationOptions:(id)a1;
- (BOOL)_prepareTraceBufferWithGenerationOptions:(id)a0;
- (BOOL)_tileBindingNeedsPlaceholderResource:(id)a0 renderCommandEncoder:(id)a1;
- (BOOL)_vertexBindingNeedsPlaceholderResource:(id)a0 renderCommandEncoder:(id)a1;
- (id)initWithDebugFunctionPlayer:(id)a0;
- (id)notifyReplayFinishedAndGenerateTraceContainer;
- (void)prepareCommandEncoderForInstrumentedCall:(unsigned long long)a0 generationOptions:(id)a1;

@end
