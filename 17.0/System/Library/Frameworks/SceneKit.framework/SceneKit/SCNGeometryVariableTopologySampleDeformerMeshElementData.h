@class SCNMTLComputePipeline, SCNMTLBuffer;
@protocol MTLBuffer;

@interface SCNGeometryVariableTopologySampleDeformerMeshElementData : NSObject {
    unsigned long long _originalPrimitiveCount;
    SCNMTLBuffer *_originalIndexBuffer;
    id<MTLBuffer> _deformedIndexBuffer;
    unsigned long long _drawIndexedPrimitivesIndirectBufferOffset;
    unsigned long long _subdividedVertexStartIndex;
    unsigned long long _deformedPrimitiveCountBufferOffset;
    SCNMTLComputePipeline *_computePipeline;
}

- (void)dealloc;

@end
