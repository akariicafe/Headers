@class NSArray;

@interface KGChainRelation : NSObject <KGRelation>

@property (readonly, nonatomic) NSArray *relations;

- (id)inverse;
- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 inGraph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 inGraph:(id)a1;
- (id)initWithRelations:(id)a0;
- (id)targetNodeIdentifiersFromSourceNodeIdentifiers:(id)a0 inGraph:(id)a1;

@end
