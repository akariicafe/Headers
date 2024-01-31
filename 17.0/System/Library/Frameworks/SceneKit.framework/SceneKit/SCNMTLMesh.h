@class NSArray, MTLVertexDescriptor, MTLStageInputOutputDescriptor;
@protocol MTLBuffer;

@interface SCNMTLMesh : NSObject {
    long long _mutabilityTimestamp;
    MTLVertexDescriptor *_vertexDescriptor;
    MTLVertexDescriptor *_tessellationVertexDescriptor;
    unsigned long long _vertexDescriptorHash;
    unsigned long long _tessellationVertexDescriptorHash;
    NSArray *_buffers;
    NSArray *_elements;
    MTLStageInputOutputDescriptor *_stageDescriptor;
    id<MTLBuffer> _volatileBuffer;
    unsigned long long volatileOffset;
    unsigned long long volatileStride;
    unsigned long long volatileSize;
    long long verticesCount;
}

- (void)dealloc;
- (id)description;
- (void)buildTessellationVertexDescriptorIfNeeded;

@end
