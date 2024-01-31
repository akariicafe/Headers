@class NSString, SCNMTLComputePipeline;
@protocol MTLBuffer;

@interface SCNMTLSmoothNormalsDeformer : NSObject <SCNMTLDeformer> {
    unsigned int _lastUpdateFrameIndex;
    unsigned int _baseVertexCount;
    id<MTLBuffer> _perVertexTrianglesOffsets;
    id<MTLBuffer> _perVertexTrianglesIndices;
    SCNMTLComputePipeline *_smoothNormalsPipeline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)requiredInputs;

- (void)dealloc;
- (unsigned long long)updateWithComputeContext:(id)a0 positions:(id)a1 normals:(id)a2 tangents:(id)a3;

@end
