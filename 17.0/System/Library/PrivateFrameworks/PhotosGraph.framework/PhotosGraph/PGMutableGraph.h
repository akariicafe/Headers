@interface PGMutableGraph : PGGraph

- (id)addEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)addNodeWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)addUniquelyIdentifiedNodeWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2 didCreate:(BOOL *)a3;
- (id)addUniqueNodeWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2 didCreate:(BOOL *)a3;
- (id)addUniqueEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
