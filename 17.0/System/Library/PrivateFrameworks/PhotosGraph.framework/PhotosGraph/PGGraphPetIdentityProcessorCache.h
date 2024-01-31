@class NSSet, PGGraph;

@interface PGGraphPetIdentityProcessorCache : NSObject {
    PGGraph *_graph;
    NSSet *_relevantAssetUUIDsForPetFaces;
}

@property (readonly, nonatomic) NSSet *relevantAssetUUIDsForPetFaces;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;

@end
