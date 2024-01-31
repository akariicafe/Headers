@class NSString, SCNGeometryDeformer, SCNMTLDeformerStack;
@protocol MTLBuffer, MTLDevice, SCNGeometryDeformerInstance, MTLBlitCommandEncoder, MTLComputeCommandEncoder;

@interface SCNGeometryDeformerInstanceWrapper : NSObject <SCNGeometryDeformerInitComputeContext, SCNGeometryDeformerUpdateComputeContext> {
    SCNMTLDeformerStack *_stack;
    SCNGeometryDeformer *_deformer;
    id<SCNGeometryDeformerInstance> _instance;
    struct { struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } srcPositions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dstPositions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } srcNormals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dstNormals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } srcTangents; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dstTangents; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency0Positions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency0Normals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency0Tangents; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency1Positions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency1Normals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency1Tangents; } _stageInputOutputDescriptors;
    id /* block */ _currentUpdateComputeEncoderProvider;
    id<MTLComputeCommandEncoder> _currentUpdateComputeEncoder;
    struct { id<MTLBuffer> srcPositions; id<MTLBuffer> dstPositions; id<MTLBuffer> srcNormals; id<MTLBuffer> dstNormals; id<MTLBuffer> srcTangents; id<MTLBuffer> dstTangents; id<MTLBuffer> dependency0Positions; id<MTLBuffer> dependency0Normals; id<MTLBuffer> dependency0Tangents; id<MTLBuffer> dependency1Positions; id<MTLBuffer> dependency1Normals; id<MTLBuffer> dependency1Tangents; } _currentUpdateBuffers;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLBlitCommandEncoder> currentBlitEncoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTLComputeCommandEncoder> currentComputeEncoder;
@property (readonly, nonatomic) id<MTLBuffer> srcPositionBuffer;
@property (readonly, nonatomic) id<MTLBuffer> dstPositionBuffer;
@property (readonly, nonatomic) id<MTLBuffer> srcNormalBuffer;
@property (readonly, nonatomic) id<MTLBuffer> dstNormalBuffer;
@property (readonly, nonatomic) id<MTLBuffer> srcTangentBuffer;
@property (readonly, nonatomic) id<MTLBuffer> dstTangentBuffer;

- (void)dealloc;
- (struct { void /* unknown type, empty encoding */ x0[6]; })_currentFrustumInfo;
- (id)_currentRenderContext;
- (id)_currentResourceManager;
- (struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; })_currentTransforms;
- (void)configureStageInputOutputDescriptor:(id)a0 withDeformerFunction:(id)a1;
- (id)deformer;
- (id)dependency0NormalBuffer;
- (id)dependency0PositionBuffer;
- (id)dependency0TangentBuffer;
- (id)dependency1NormalBuffer;
- (id)dependency1PositionBuffer;
- (id)dependency1TangentBuffer;
- (id)dependencyBufferForInput:(unsigned long long)a0 dependencyMesh:(id)a1;
- (id)dependencyBufferForInput:(unsigned long long)a0 dependencyStack:(id)a1;
- (void)setStageInputOutputBuffersToComputeEncoder:(struct SCNMTLComputeCommandEncoder { id x0[31]; unsigned long long x1[31]; id x2[128]; id x3[16]; id x4; id x5; id x6; struct SCNMTLBufferPool *x7; unsigned int x8; unsigned long long x9[2]; unsigned long long x10[1]; } *)a0;
- (void)setStageInputOutputBuffersToCurrentComputeEncoder;

@end
