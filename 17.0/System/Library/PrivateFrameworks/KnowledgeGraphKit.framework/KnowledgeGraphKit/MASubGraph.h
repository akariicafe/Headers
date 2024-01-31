@class NSMutableDictionary, MABaseGraph;

@interface MASubGraph : NSObject {
    NSMutableDictionary *_nodesByIdentifier;
    NSMutableDictionary *_nodesByLabel;
    NSMutableDictionary *_nodesByName;
    NSMutableDictionary *_edgesByIdentifier;
    NSMutableDictionary *_edgesByLabel;
    NSMutableDictionary *_edgesByName;
    NSMutableDictionary *_nodesByNameGroupByNodes;
}

@property (readonly, nonatomic) MABaseGraph *graph;

+ (id)subGraphIntersectionsWithSubGraphs:(id)a0;
+ (id)subGraphWithGraph:(id)a0;

- (id)init;
- (id)nodesForLabel:(id)a0;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (void)enumerateEdgesWithBlock:(id /* block */)a0;
- (id)allNodes;
- (id)description;
- (void)enumerateNodesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)allEdges;
- (id)edgesForLabel:(id)a0;
- (unsigned long long)edgesCount;
- (unsigned long long)nodesCount;
- (void)enumerateEdgesByNameUsingBlock:(id /* block */)a0;
- (void)enumerateNodesByNameUsingBlock:(id /* block */)a0;
- (void)_addEdge:(id)a0 withName:(id)a1;
- (void)_addNode:(id)a0 withName:(id)a1;
- (void)_addNode:(id)a0 withName:(id)a1 forKeyNode:(id)a2;
- (void)addEdges:(id)a0 withName:(id)a1;
- (void)addNodes:(id)a0 withName:(id)a1;
- (id)allNamedEdges;
- (id)allNamedNodes;
- (id)edgeForIdentifier:(unsigned long long)a0;
- (unsigned long long)edgesCountForLabel:(id)a0;
- (unsigned long long)edgesCountForName:(id)a0;
- (id)edgesForLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)edgesForName:(id)a0;
- (id)edgesLabels;
- (id)edgesNames;
- (void)enumerateEdgesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateEdgesWithName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNodesWithName:(id)a0 fromNode:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNodesWithName:(id)a0 usingBlock:(id /* block */)a1;
- (id)graphRepresentation;
- (void)mergeWithSubGraph:(id)a0;
- (unsigned long long)nodesCountForLabel:(id)a0;
- (unsigned long long)nodesCountForName:(id)a0;
- (unsigned long long)nodesCountForName:(id)a0 fromNode:(id)a1;
- (id)nodesForLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)nodesForName:(id)a0;
- (id)nodesForName:(id)a0 fromNode:(id)a1;
- (id)nodesForNames:(id)a0;
- (id)nodesLabels;
- (id)nodesNames;

@end
