@class NSMutableOrderedSet;

@interface GVGraph : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *nodes;
@property (retain, nonatomic) NSMutableOrderedSet *edges;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (id)init;
- (void)dealloc;
- (void)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (id)allNodes;
- (id)description;
- (void)addEdgeFrom:(id)a0 to:(id)a1;
- (id)allEdges;
- (BOOL)render:(id)a0;
- (BOOL)hasEdgeFrom:(id)a0 to:(id)a1;
- (void)addEdgeFrom:(id)a0 to:(id)a1 reversed:(BOOL)a2;
- (id)connectedSubgraphs;
- (id)edgeFrom:(id)a0 to:(id)a1;
- (BOOL)hasNode:(id)a0;
- (void)iterateOverAllEdges:(id /* block */)a0;
- (void)iterateOverAllNodes:(id /* block */)a0;
- (void)removeEdgeFrom:(id)a0 to:(id)a1;
- (void)reverseEdge:(id)a0;
- (void)undoReverseEdge:(id)a0;

@end
