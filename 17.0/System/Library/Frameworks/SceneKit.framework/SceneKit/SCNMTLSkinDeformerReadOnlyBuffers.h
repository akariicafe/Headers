@protocol MTLBuffer;

@interface SCNMTLSkinDeformerReadOnlyBuffers : NSObject {
    unsigned long long _vertexWeightIndexSize;
    unsigned long long _boneIndexSize;
    id<MTLBuffer> _vertexWeightIndicesBuffer;
    id<MTLBuffer> _boneIndicesBuffer;
    id<MTLBuffer> _boneWeightsBuffer;
}

- (void)dealloc;

@end
