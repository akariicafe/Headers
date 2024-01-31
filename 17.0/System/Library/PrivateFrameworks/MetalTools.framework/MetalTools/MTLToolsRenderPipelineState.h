@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice;

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>

@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *objectDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *meshDebugInstrumentationData;
@property (readonly) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property (readonly) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property (readonly) unsigned long long objectThreadExecutionWidth;
@property (readonly) unsigned long long meshThreadExecutionWidth;
@property (readonly, nonatomic) unsigned int explicitVisibilityGroupID;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fragmentFunctionHandleWithFunction:(id)a0;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (void)dealloc;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)a0;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 fragmentAdditionalBinaryFunctions:(id)a1 error:(id *)a2;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 stage:(unsigned long long)a1;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)a0;
- (id)pipelineBinaries;
- (id)objectFunctionHandleWithFunction:(id)a0;
- (unsigned int)getVertexShaderTelemetryID;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)a0;
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)a0;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)a0;
- (unsigned int)getFragmentShaderTelemetryID;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)a0;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)a0 error:(id *)a1;
- (id)tileFunctionHandleWithFunction:(id)a0;
- (id)meshFunctionHandleWithFunction:(id)a0;
- (id)functionHandleWithFunction:(id)a0 stage:(unsigned long long)a1;
- (id)vertexFunctionHandleWithFunction:(id)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)newFragmentShaderDebugInfo;
- (id)newIntersectionFunctionTableWithDescriptor:(id)a0 selector:(SEL)a1;
- (id)newVertexShaderDebugInfo;
- (id)newVisibleFunctionTableWithDescriptor:(id)a0 selector:(SEL)a1;

@end
