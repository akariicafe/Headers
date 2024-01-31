@class NSMutableArray, NSString, SCNMTLSkinDeformer, NSMapTable, SCNMTLSmoothNormalsDeformer, SCNMTLMorphDeformer, SCNGeometryDeformer, SCNMTLRenderContext, SCNMTLMesh, SCNMTLResourceManager, MTLStageInputOutputDescriptor, SCNMTLComputePipeline;
@protocol MTLBlitCommandEncoder, MTLBuffer;

@interface SCNMTLDeformerStack : NSObject <SCNMTLDeformerInitComputeContext, SCNMTLDeformerUpdateComputeContext> {
    SCNMTLResourceManager *_resourceManager;
    struct __C3DDeformerStack { } *_deformers;
    struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DNode *x1; struct __C3DNode *x2; struct __C3DNode *x3; int x4; struct { union C3DMatrix4x4 { float x0[16]; void /* unknown type, empty encoding */ x1[4]; struct { void /* unknown type, empty encoding */ x0[4]; } x2; } x0; union { } x1; } x5; union C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3b1b1{? { } *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 3; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __C3DGeometry *x39; struct __C3DDeformerStack *x40; float x41; struct { } x42; } *_node;
    struct __C3DMesh { } *_baseMesh;
    unsigned char _finalDataKind;
    unsigned char _deformDataKind;
    BOOL _isValid;
    BOOL _reliesOnTransforms;
    BOOL _reliesOnFrustum;
    id<MTLBuffer> _initialPositionBuffer;
    id<MTLBuffer> _initialNormalBuffer;
    id<MTLBuffer> _initialTangentBuffer;
    MTLStageInputOutputDescriptor *_initialBuffersStageInputDescriptor;
    id<MTLBuffer> _deformPositionBuffer;
    id<MTLBuffer> _deformNormalBuffer;
    id<MTLBuffer> _deformTangentBuffer;
    SCNMTLMesh *_finalMesh;
    id<MTLBuffer> _finalPositionBuffer;
    id<MTLBuffer> _finalNormalBuffer;
    id<MTLBuffer> _finalTangentBuffer;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _initialPositionStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _initialNormalStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _initialTangentStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _deformPositionStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _deformNormalStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _deformTangentStageInputOutputDescriptorInfo;
    struct { unsigned int maxIndex; } _splatUniforms;
    SCNMTLComputePipeline *_splatDeformedToFinalPipeline;
    id<MTLBuffer> _deindexedToOriginalTableBuffer;
    unsigned long long _deindexedToOriginalTableBufferIndexSize;
    id<MTLBuffer> _deindexedToFirstDeindexedTableBuffer;
    unsigned long long _deindexedToFirstDeindexedTableBufferIndexSize;
    id<MTLBuffer> _originalToFirstDeindexedTableBuffer;
    unsigned long long _originalToFirstDeindexedTableBufferIndexSize;
    SCNGeometryDeformer *_currentInitDeformer;
    SCNMTLRenderContext *_currentInitRenderContext;
    id<MTLBlitCommandEncoder> _currentInitResourceBlitEncoder;
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } modelViewTransform; struct { void /* unknown type, empty encoding */ columns[4]; } modelViewProjectionTransform; struct { void /* unknown type, empty encoding */ columns[4]; } projectionTransform; } _currentUpdateTransforms;
    struct { void /* unknown type, empty encoding */ screenResolution; void /* unknown type, empty encoding */ worldPlanes[6]; } _currentUpdateFrustumInfo;
    SCNMTLRenderContext *_currentUpdateRenderContext;
    struct SCNMTLComputeCommandEncoder { id x0[31]; unsigned long long x1[31]; id x2[128]; id x3[16]; id x4; id x5; id x6; struct SCNMTLBufferPool *x7; unsigned int x8; unsigned long long x9[2]; unsigned long long x10[1]; } *_currentUpdateComputeCommandEncoder;
    SCNMTLMorphDeformer *_morphDeformer;
    SCNMTLSkinDeformer *_skinDeformer;
    SCNMTLSmoothNormalsDeformer *_smoothNormalsDeformer;
    NSMutableArray *_postMorphingDeformerInstances;
    NSMutableArray *_postSkinningDeformerInstances;
    NSMapTable *_customDeformerToInstances;
}

@property (readonly, nonatomic) id<MTLBlitCommandEncoder> currentBlitEncoder;
@property (readonly, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long currentFrameIndex;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; } currentTransforms;
@property (readonly, nonatomic) struct SCNMTLComputeCommandEncoder { id x0[31]; unsigned long long x1[31]; id x2[128]; id x3[16]; id x4; id x5; id x6; struct SCNMTLBufferPool *x7; unsigned int x8; unsigned long long x9[2]; unsigned long long x10[1]; } *currentComputeEncoder;

- (void)dealloc;
- (struct { void /* unknown type, empty encoding */ x0[6]; })_currentFrustumInfo;
- (id)deindexedToFirstDeindexedTableBufferWithBlitEncoder:(id)a0 indexSizeOut:(unsigned long long *)a1;
- (id)deindexedToOriginalTableBufferWithBlitEncoder:(id)a0 indexSizeOut:(unsigned long long *)a1;
- (id)newBufferForDataKind:(unsigned char)a0 meshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a1 dataType:(short)a2 forStageInputOutputDescriptor:(BOOL)a3 usePrivateStorageMode:(BOOL)a4 outStride:(unsigned long long *)a5;
- (id)newBufferForDataKind:(unsigned char)a0 positionSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a1 normalSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a2 positionDataType:(short)a3 normalDataType:(short)a4 forStageInputOutputDescriptor:(BOOL)a5 usePrivateStorageMode:(BOOL)a6 outStride:(unsigned long long *)a7 outPositionOffset:(unsigned long long *)a8 outNormalOffset:(unsigned long long *)a9;
- (id)originalToFirstDeindexedTableBufferWithBlitEncoder:(id)a0 indexSizeOut:(unsigned long long *)a1;
- (void)reconfigureIfNeededWithContext:(id)a0 programHashCodeRequirements:(struct { BOOL x0; })a1;
- (void)setStageInputOutputBuffersToEncoder:(struct SCNMTLComputeCommandEncoder { id x0[31]; unsigned long long x1[31]; id x2[128]; id x3[16]; id x4; id x5; id x6; struct SCNMTLBufferPool *x7; unsigned int x8; unsigned long long x9[2]; unsigned long long x10[1]; } *)a0;
- (void)setupFinalMeshWithMesh:(struct __C3DMesh { } *)a0 entityName:(struct __CFString { } *)a1 info:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a2 usingDrawIndirect:(BOOL)a3;
- (void)setupInitialBuffersWithBaseMesh:(struct __C3DMesh { } *)a0 entityName:(struct __CFString { } *)a1 info:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })a2;

@end
