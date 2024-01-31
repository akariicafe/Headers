@class SCNMTLComputePipeline, NSMutableArray, SCNMTLBuffer;
@protocol MTLBuffer;

@interface SCNGeometryVDMCDeformerMeshElementData : NSObject {
    unsigned long long _originalPrimitiveCount;
    SCNMTLBuffer *_originalIndexBuffer;
    id<MTLBuffer> _subdivVertexBuffer;
    id<MTLBuffer> _subdivIndexBuffer;
    NSMutableArray *_triangleBufferChain;
    NSMutableArray *_configBufferChain;
    id<MTLBuffer> _shiftBuffer;
    id<MTLBuffer> _neighborBuffer;
    id<MTLBuffer> _triangleCounterBuffer;
    id<MTLBuffer> _subdivMeshInfoBuffer;
    NSMutableArray *_maxTrianglesAtLevel;
    NSMutableArray *_counterVector;
    unsigned long long _maxLevel;
    id<MTLBuffer> _drawIndexedPrimitivesIndirectBuffer;
    unsigned long long _drawIndexedPrimitivesIndirectBufferOffset;
    unsigned long long _subdividedVertexStartIndex;
    SCNMTLComputePipeline *_subdivPipeline;
    SCNMTLComputePipeline *_argUpdatePipeline;
}

- (void)dealloc;

@end
