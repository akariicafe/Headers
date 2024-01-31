@class MTLRenderPipelineReflection, MTLMeshRenderPipelineDescriptor, MTLRenderPipelineDescriptor, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {
    unsigned long long _maxVertexCount;
    unsigned long long _maxInstanceCount;
    unsigned long long _maxPatchCount;
    unsigned long long _rasterSampleCount;
    unsigned long long _colorPixelFormat[8];
    unsigned long long _depthPixelFormat;
    unsigned long long _stencilPixelFormat;
    unsigned long long _vertexDescriptorLayoutCount;
    struct { unsigned long long bufferIndex; unsigned long long bufferStride; } _vertexDescriptorLayouts[31];
    BOOL _threadgroupSizeMatchesTileSize;
}

@property (readonly, nonatomic) BOOL rasterizationEnabled;
@property (readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor;
@property (readonly, nonatomic) MTLRenderPipelineReflection *reflection;
@property (readonly, nonatomic) unsigned long long attachmentWriteMask;
@property (readonly, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor;
@property (readonly, getter=isMeshShaderPipeline) BOOL meshShaderPipeline;
@property (readonly, nonatomic) MTLMeshRenderPipelineDescriptor *meshDescriptor;

- (id)formattedDescription:(unsigned long long)a0;
- (id)fragmentFunctionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (void)dealloc;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 fragmentAdditionalBinaryFunctions:(id)a1 error:(id *)a2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)a0;
- (id)description;
- (id)objectFunctionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)a0;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)tileFunctionHandleWithFunction:(id)a0;
- (id)meshFunctionHandleWithFunction:(id)a0;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1;
- (id)vertexFunctionHandleWithFunction:(id)a0;
- (BOOL)isAncestorOf:(id)a0;
- (id)getParameter:(id)a0;
- (id)_findMasterStruct:(id)a0 includeImageBlockData:(BOOL)a1;
- (void)_updateCachedMeshPipelineState;
- (void)_updateCachedPipelineState;
- (void)_updateCachedTilePipelineState;
- (void)_validateThreadgroupSize:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a0 stage:(unsigned long long)a1 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a2;
- (id)functionHandleToDebugFunctionHandle:(id)a0 parentFunction:(id)a1 stage:(unsigned long long)a2;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1 selector:(SEL)a2;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 meshDescriptor:(id)a3;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 tileDescriptor:(id)a3;
- (BOOL)isImageBlockLayoutInputCompatibleWithOutputOf:(id)a0;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 withStage:(unsigned long long)a1 selector:(SEL)a2;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1 selector:(SEL)a2;
- (id)outputImageBlockData;
- (id)validateBinaryFunctions:(id)a0 stage:(unsigned long long)a1;
- (void)validateHandleForSetFunction:(id)a0;

@end
