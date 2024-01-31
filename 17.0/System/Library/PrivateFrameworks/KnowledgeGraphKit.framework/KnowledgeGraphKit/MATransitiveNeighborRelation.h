@interface MATransitiveNeighborRelation : MANeighborRelation

- (id)initWithEdgeType:(unsigned long long)a0 edgeFilter:(id)a1;
- (id)initWithNeighborRelation:(id)a0;
- (BOOL)isTransitive;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;

@end
