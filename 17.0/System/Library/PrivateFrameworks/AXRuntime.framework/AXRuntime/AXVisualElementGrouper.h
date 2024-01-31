@interface AXVisualElementGrouper : AXElementGrouper

@property (nonatomic) double maximumNeighbourDistance;
@property (nonatomic) double maximumDistanceForAligningEdges;

- (id)initWithHeuristics:(long long)a0;
- (id)_groupablesForItems:(id)a0;

@end
