@class MAEdgeFilter;

@interface MANeighborRelation : MARelation

@property (readonly, nonatomic) unsigned long long edgeType;
@property (readonly, copy, nonatomic) MAEdgeFilter *edgeFilter;

+ (id)scanRelationWithScanner:(id)a0;

- (id)inverse;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;
- (id)adjacencyWithEndNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)initWithEdgeType:(unsigned long long)a0 edgeFilter:(id)a1;
- (id)transitiveClosure;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;
- (id)visualString;

@end
