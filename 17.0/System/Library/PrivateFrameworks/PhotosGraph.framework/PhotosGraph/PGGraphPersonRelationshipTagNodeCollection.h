@class PGGraphRelationshipTagEdgeCollection, PGGraphPersonNodeCollection;

@interface PGGraphPersonRelationshipTagNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphRelationshipTagEdgeCollection *relationshipTagEdges;

+ (Class)nodeClass;
+ (id)nodesWithRelationshipTag:(unsigned long long)a0 inGraph:(id)a1;

- (id)personNodesWithConfidence:(double)a0;

@end
