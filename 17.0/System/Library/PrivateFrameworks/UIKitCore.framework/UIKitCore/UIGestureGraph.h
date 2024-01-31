@class NSSet, NSMapTable;

@interface UIGestureGraph : NSObject {
    NSMapTable *_nodesByLabel;
    NSMapTable *_edgesByLabel;
}

@property (readonly, nonatomic) unsigned long long nodeCount;
@property (readonly, nonatomic) NSSet *nodeLabels;
@property (readonly, nonatomic) unsigned long long edgeCount;
@property (readonly, nonatomic) NSSet *edgeLabels;

- (id)addEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 directed:(BOOL)a3;
- (id)init;
- (void)enumerateEdgesWithLabel:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesWithLabel:(id)a0 usingBlock:(id /* block */)a1;
- (void)_addEdge:(id)a0;
- (id)_edgesForLabel:(id)a0;
- (void)removeAllObjects;
- (void)traverseGraphBreadthFirstFromNode:(id)a0 directed:(BOOL)a1 usingBlock:(id /* block */)a2;
- (id)nodesForLabel:(id)a0;
- (id)addNodeWithLabel:(id)a0 properties:(id)a1;
- (void)removeNode:(id)a0;
- (id)nodesForLabel:(id)a0 properties:(id)a1;
- (void)enumerateEdgesWithBlock:(id /* block */)a0;
- (unsigned long long)nodeCountForLabel:(id)a0;
- (id)description;
- (void)traverseGraphDepthFirstFromNode:(id)a0 directed:(BOOL)a1 usingBlock:(id /* block */)a2;
- (id)addNodeWithLabel:(id)a0;
- (unsigned long long)edgeCountForLabel:(id)a0;
- (id)edgesForLabel:(id)a0 properties:(id)a1;
- (id)_allEdges;
- (id)addUniqueEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 directed:(BOOL)a3 properties:(id)a4;
- (void)enumerateNodesWithBlock:(id /* block */)a0;
- (void)removeNodes:(id)a0;
- (void).cxx_destruct;
- (void)removeEdges:(id)a0;
- (id)_allNodes;
- (void)_addNode:(id)a0;
- (void)removeNodeEdges:(id)a0;
- (id)edgesForLabel:(id)a0;
- (void)removeEdge:(id)a0;
- (id)_nodesForLabel:(id)a0;
- (id)addUniqueNodeWithLabel:(id)a0 properties:(id)a1;

@end
