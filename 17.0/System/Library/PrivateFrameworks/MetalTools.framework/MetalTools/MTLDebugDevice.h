@class MTLFunctionConstantValues;
@protocol MTLLibrary, MTLFunction, MTLDepthStencilState;

@interface MTLDebugDevice : MTLToolsDevice {
    struct MTLSamplerDescriptorHashMap { struct unordered_map<std::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::allocator<std::pair<const std::array<unsigned long long, 3>, unsigned int>>> { struct __hash_table<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t>, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t>, std::allocator<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::array<unsigned long long, 3>, std::__hash_value_type<std::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, MTLSamplerDescriptorHashMap::hash_t>> { float __value_; } __p3_; } __table_; } _map; unsigned int _limit; } _argumentBufferSamplers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _referenceTrackingCommandBufferLock;
    struct unordered_set<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> { struct __hash_table<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *>, std::allocator<std::__hash_node<MTLDebugCommandBuffer *, void *>>> { struct __hash_node_base<std::__hash_node<MTLDebugCommandBuffer *, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<MTLDebugCommandBuffer *>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<MTLDebugCommandBuffer *>> { float __value_; } __p3_; } __table_; } _referenceTrackingCommandBuffers;
    struct CheckerboardRenderTargetPipelineCache { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock; id<MTLLibrary> _library; id<MTLFunction> _vertexFunction; id<MTLDepthStencilState> _depthStencilState[2]; MTLFunctionConstantValues *_fConstants; struct unordered_map<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>, std::allocator<std::pair<const MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> { struct __hash_table<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>>, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash>, std::allocator<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, MTLDebugCheckerboardFillHashKey::Hash, std::equal_to<MTLDebugCheckerboardFillHashKey>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<MTLDebugCheckerboardFillHashKey, std::__hash_value_type<MTLDebugCheckerboardFillHashKey, id<MTLRenderPipelineState>>, std::equal_to<MTLDebugCheckerboardFillHashKey>, MTLDebugCheckerboardFillHashKey::Hash>> { float __value_; } __p3_; } __table_; } _cache; } _checkerboardRTPipelineCache;
}

@property (readonly) BOOL loadValidationEnabled;
@property (readonly) BOOL storeValidationEnabled;

+ (BOOL)complainAboutSloppyTextureUsage;

- (id)newArgumentEncoderWithLayout:(id)a0;
- (id)newFence;
- (id)newCommandQueue;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 withDescriptor:(id)a1;
- (id)newDynamicLibraryFromURL:(id)a0 error:(id *)a1;
- (id)newUncachedIOFileHandleWithURL:(id)a0 error:(id *)a1;
- (id)newDefaultLibrary;
- (id)newLibraryWithDAG:(id)a0 functions:(id)a1 error:(id *)a2;
- (void)newComputePipelineStateWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newBinaryArchiveWithDescriptor:(id)a0 error:(id *)a1;
- (const struct MTLTargetDeviceArch { unsigned long long x0; unsigned int x1; char *x2; } *)targetDeviceInfo;
- (id)newDynamicLibraryWithURL:(id)a0 error:(id *)a1;
- (id)newSharedTextureWithDescriptor:(id)a0;
- (id)newUncachedIOHandleWithURL:(id)a0 error:(id *)a1;
- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (id)newLibraryWithFile:(id)a0 error:(id *)a1;
- (id)newLibraryWithStitchedDescriptor:(id)a0 error:(id *)a1;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)a0;
- (id)newEvent;
- (id)newSharedEvent;
- (id)newLibraryWithData:(id)a0 error:(id *)a1;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newLateEvalEvent;
- (id)newComputePipelineStateWithFunction:(id)a0 error:(id *)a1;
- (id)newLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (id)newComputePipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)newIOHandleWithURL:(id)a0 compressionType:(long long)a1 error:(id *)a2;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newDynamicLibrary:(id)a0 computeDescriptor:(id)a1 error:(id *)a2;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (id)loadDynamicLibrariesForFunction:(id)a0 insertLibraries:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)a0 imageFilterFunctionInfo:(const struct { BOOL x0; unsigned long long x1; struct *x2; } *)a1 error:(id *)a2;
- (id)newComputePipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })accelerationStructureSizesWithDescriptor:(id)a0;
- (id)newRasterizationRateMapWithDescriptor:(id)a0;
- (BOOL)validateDynamicLibraryURL:(id)a0 error:(id *)a1;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)newArgumentEncoderWithArguments:(id)a0;
- (id)newDagStringWithGraphs:(id)a0;
- (id)newDynamicLibrary:(id)a0 error:(id *)a1;
- (id)newTextureWithDescriptor:(id)a0;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)a0;
- (BOOL)validateDynamicLibrary:(id)a0 state:(BOOL)a1 error:(id *)a2;
- (id)newUncachedIOHandleWithURL:(id)a0 compressionType:(long long)a1 error:(id *)a2;
- (void)newRenderPipelineStateWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (void)newRenderPipelineStateWithTileDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)newIOHandleWithURL:(id)a0 error:(id *)a1;
- (id)newLibraryWithDescriptorSPI:(id)a0 error:(id *)a1;
- (void)newComputePipelineStateWithFunction:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)newLibraryWithStitchedDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newBinaryLibraryWithOptions:(unsigned long long)a0 url:(id)a1 error:(id *)a2;
- (id)newIOFileHandleWithURL:(id)a0 compressionMethod:(long long)a1 error:(id *)a2;
- (id)newSharedTextureWithHandle:(id)a0;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (id)newSharedEventWithHandle:(id)a0;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)a0 imageFilterFunctionInfo:(const struct { BOOL x0; unsigned long long x1; struct *x2; } *)a1 error:(id *)a2;
- (id)newAccelerationStructureWithBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)newComputePipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)newIndirectCommandBufferWithDescriptor:(id)a0 maxCommandCount:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)deserializePrimitiveAccelerationStructureFromBytes:(void *)a0 withDescriptor:(id)a1;
- (id)newLibraryWithStitchedDescriptorSPI:(id)a0 error:(id *)a1;
- (id)newArgumentEncoderWithBufferBinding:(id)a0;
- (id)newCommandQueueWithDescriptor:(id)a0;
- (id)newDefaultLibraryWithBundle:(id)a0 error:(id *)a1;
- (id)newLibraryWithURL:(id)a0 error:(id *)a1;
- (void)newRenderPipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)newTextureWithDescriptor:(id)a0 iosurface:(struct __IOSurface { } *)a1 plane:(unsigned long long)a2 slice:(unsigned long long)a3;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)a0;
- (id)newIOFileHandleWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)newDynamicLibraryWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)newComputePipelineStateWithFunction:(id)a0 completionHandler:(id /* block */)a1;
- (id)deserializeInstanceAccelerationStructureFromBytes:(void *)a0 primitiveAccelerationStructures:(id)a1 withDescriptor:(id)a2;
- (id)newComputePipelineStateWithFunction:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (struct { unsigned long long x0; unsigned long long x1; })heapAccelerationStructureSizeAndAlignWithSize:(unsigned long long)a0;
- (id)newIOHandleWithURL:(id)a0 compressionMethod:(long long)a1 error:(id *)a2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newProfileWithExecutionSize:(unsigned long long)a0;
- (void)deserializeInstanceAccelerationStructure:(id)a0 fromBytes:(const void *)a1 primitiveAccelerationStructures:(id)a2 withDescriptor:(id)a3;
- (id)newAccelerationStructureWithBuffer:(id)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (id)loadDynamicLibrariesForComputeDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)newSharedEventWithMachPort:(unsigned int)a0;
- (id)newPipelineLibraryWithFilePath:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)a0 error:(id *)a1;
- (struct { unsigned long long x0; unsigned long long x1; })heapAccelerationStructureSizeAndAlignWithDescriptor:(id)a0;
- (id)newUncachedIOFileHandleWithURL:(id)a0 compressionMethod:(long long)a1 error:(id *)a2;
- (id)newIOCommandQueueWithDescriptor:(id)a0 error:(id *)a1;
- (void)deserializePrimitiveAccelerationStructure:(id)a0 fromBytes:(const void *)a1 withDescriptor:(id)a2;
- (id)newLibraryWithSource:(id)a0 options:(id)a1 error:(id *)a2;
- (void)newLibraryWithSource:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)newLibraryWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newCounterSampleBufferWithDescriptor:(id)a0 error:(id *)a1;
- (id)newRenderPipelineStateWithTileDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)newBufferWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (id)newBufferWithIOSurface:(struct __IOSurface { } *)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newBufferWithBytes:(const void *)a0 length:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)newDepthStencilStateWithDescriptor:(id)a0;
- (id)newSamplerStateWithDescriptor:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 iosurface:(struct __IOSurface { } *)a1 plane:(unsigned long long)a2;
- (struct { unsigned long long x0; unsigned long long x1; })heapBufferSizeAndAlignWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (struct { unsigned long long x0; unsigned long long x1; })heapTextureSizeAndAlignWithDescriptor:(id)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)newBufferWithDescriptor:(id)a0;
- (id)newHeapWithDescriptor:(id)a0;
- (void)newRenderPipelineStateWithTileDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newRenderPipelineStateWithTileDescriptor:(id)a0 error:(id *)a1;
- (id)newTextureLayoutWithDescriptor:(id)a0 isHeapOrBufferBacked:(BOOL)a1;
- (id)newTextureWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 descriptor:(id)a2 deallocator:(id /* block */)a3;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0;
- (void)_newComputePipelineStateWithFunction:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)_newRenderPipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)getDynamicLibraryForBaseObject:(id)a0;
- (void)_newComputePipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)_newComputePipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)_newComputePipelineStateWithFunction:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (void)_newRenderPipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_newRenderPipelineStateWithMeshDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)_newRenderPipelineStateWithMeshDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (void)_newRenderPipelineStateWithTileDescriptor:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)_newRenderPipelineStateWithTileDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (void)addReferenceTrackingCommandBuffer:(id)a0;
- (void)clearRenderEncoder:(id)a0 writeMask:(unsigned long long)a1 withCheckerboard:(float *)a2;
- (id)getDepthStencilStateForBaseObject:(id)a0 descriptor:(id)a1;
- (id)getFunctionForBaseObject:(id)a0 library:(id)a1;
- (id)getSamplerStateForBaseObject:(id)a0 descriptor:(id)a1;
- (void)notifyExternalReferencesNonZeroOnDealloc:(id)a0;
- (void)notifySamplerStateDeallocated:(id)a0;
- (void)removeReferenceTrackingCommandBuffer:(id)a0;
- (void)validateImageblockTypes:(id)a0 reflection:(id)a1 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a2;
- (void)validateLinkedFunctions:(id)a0 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a1;
- (void)validateMemorylessResource:(id)a0 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a1;
- (void)validateNewBufferArgs:(unsigned long long)a0 options:(unsigned long long)a1 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a2;
- (void)validateRaytracing;
- (void)validateResourceOptions:(unsigned long long)a0 isTexture:(BOOL)a1 isIOSurface:(BOOL)a2 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a3;

@end
