@class NSString, SCNMTLComputePipeline, SCNMTLMesh, NSMutableArray;
@protocol MTLBuffer;

@interface SCNGeometryVariableTopologySampleDeformerInstance : NSObject <SCNGeometryDeformerInstance> {
    unsigned long long _mode;
    SCNMTLMesh *_deformedMesh;
    NSMutableArray *_meshElementData;
    id<MTLBuffer> _positionBuffer;
    id<MTLBuffer> _deformedPrimitiveCountBuffer;
    id<MTLBuffer> _drawIndexedPrimitivesIndirectBuffer;
    SCNMTLComputePipeline *_finalizeComputePipeline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)updateWithContext:(id)a0;
- (id)meshForDeformedTopology;

@end
