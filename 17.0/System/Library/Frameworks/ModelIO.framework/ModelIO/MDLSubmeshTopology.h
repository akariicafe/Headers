@protocol MDLMeshBuffer;

@interface MDLSubmeshTopology : NSObject

@property (retain, nonatomic) id<MDLMeshBuffer> faceTopology;
@property (nonatomic) unsigned long long faceCount;
@property (retain, nonatomic) id<MDLMeshBuffer> vertexCreaseIndices;
@property (retain, nonatomic) id<MDLMeshBuffer> vertexCreases;
@property (nonatomic) unsigned long long vertexCreaseCount;
@property (retain, nonatomic) id<MDLMeshBuffer> edgeCreaseIndices;
@property (retain, nonatomic) id<MDLMeshBuffer> edgeCreases;
@property (nonatomic) unsigned long long edgeCreaseCount;
@property (retain, nonatomic) id<MDLMeshBuffer> holes;
@property (nonatomic) unsigned long long holeCount;

+ (id)decodeTopologyWithCoder:(id)a0 allocator:(id)a1;

- (void).cxx_destruct;
- (void)encodeTopologyWithCoder:(id)a0 allocator:(id)a1;
- (id)initWithSubmesh:(id)a0;

@end
