@class NSMutableArray, KGMutableElementIdentifierSet;

@interface MAGraphChangeRequest : NSObject

@property (retain, nonatomic) NSMutableArray *nodesToInsert;
@property (retain, nonatomic) NSMutableArray *edgesToInsert;
@property (retain, nonatomic) KGMutableElementIdentifierSet *nodeIdentifiersToRemove;
@property (retain, nonatomic) KGMutableElementIdentifierSet *edgeIdentifiersToRemove;
@property (readonly, nonatomic) unsigned long long numberOfChanges;

- (id)init;
- (void)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (void)removeNodes:(id)a0;
- (void).cxx_destruct;
- (void)removeEdges:(id)a0;
- (void)removeEdge:(id)a0;
- (void)addEdge:(id)a0;
- (void)removeEdgesForIdentifier:(unsigned long long)a0;
- (void)removeEdgesForIdentifiers:(id)a0;
- (void)removeNodeForIdentifier:(unsigned long long)a0;
- (void)removeNodesForIdentifiers:(id)a0;

@end
