@class NSDictionary;

@interface VMUDirectedGraph : NSObject <NSCopying> {
    long long _graphCompatibilityVersion;
    long long _graphVersion;
    unsigned int _edgeCount;
    unsigned int _edgeCapacity;
    unsigned int _externalEdges;
    void *_deadNodes;
    unsigned int *_nodeAdjIndex;
    struct _VMUDirectedGraphEdge { unsigned int x0; unsigned int x1; unsigned int x2; } *_edges;
    unsigned int _indexedNodeSpace;
    unsigned int _indexedEdges;
    int _insideSearch;
    BOOL _inverted;
}

@property (nonatomic) BOOL inverted;
@property (copy, nonatomic) NSDictionary *additionalProperties;
@property (readonly, nonatomic) unsigned int nodeCount;
@property (readonly, nonatomic) unsigned int edgeCount;
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (readonly, nonatomic) unsigned int edgeNamespaceSize;
@property (readonly, nonatomic) BOOL graphIs64bit;
@property (readonly, nonatomic) unsigned int pointerSize;

+ (void *)_copyUnarchived:(id)a0 length:(unsigned long long *)a1 options:(unsigned long long)a2;
+ (id)_archivedBytes:(const void *)a0 length:(unsigned long long)a1 options:(unsigned long long)a2;
+ (id)_archivedObject:(id)a0 options:(unsigned long long)a1;
+ (id)_unarchivedObject:(id)a0 ofClass:(Class)a1 options:(unsigned long long)a2;
+ (id)_unarchivedObject:(id)a0 ofClasses:(id)a1 options:(unsigned long long)a2;
+ (id)directedGraphWithData:(id)a0 error:(id *)a1;
+ (BOOL)encapsulateData:(id)a0 to:(id)a1 withSupplementalDataTag:(const char *)a2 error:(id *)a3 dataGeneratorBlock:(id /* block */)a4;

- (id)initWithPlistRepresentation:(id)a0;
- (void)dealloc;
- (void)setGraphVersion:(long long)a0;
- (unsigned int)enumerateEdgesWithBlock:(id /* block */)a0;
- (unsigned int)enumerateNodesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)archiveDictionaryRepresentation:(id)a0 options:(unsigned long long)a1;
- (void)_renameWithNodeMap:(unsigned int *)a0 nodeNamespace:(unsigned int)a1 edgeMap:(unsigned int *)a2 edgeNamespace:(unsigned int)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchived:(id)a0 version:(long long)a1 options:(unsigned long long)a2 diskLogs:(id)a3 error:(id *)a4;
- (unsigned int)addNode;
- (unsigned int)enumerateEdgesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)plistRepresentationWithOptions:(unsigned long long)a0;
- (BOOL)_adjustAdjacencyMap;
- (void)_bfsCore:(unsigned int)a0 colors:(char *)a1 visitBlock:(id /* block */)a2 examineBlock:(id /* block */)a3;
- (void)_dfsCore:(unsigned int)a0 colors:(char *)a1 visitBlock:(id /* block */)a2 examineBlock:(id /* block */)a3;
- (void)_dumpAdjacencyList;
- (void)_faultDeadNodeMap;
- (void)_internalAccessRawEdgesWithBlock:(id /* block */)a0;
- (unsigned int)_internalEnumerateEdgesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (void)_removeEdges:(id /* block */)a0;
- (void)_renormalize;
- (void)_reorderEdgesNaturally;
- (void)_searchMainLoop:(unsigned int)a0 action:(id /* block */)a1;
- (unsigned int)addEdgeFromNode:(unsigned int)a0 toNode:(unsigned int)a1;
- (unsigned int)addGroupNodeForNodes:(const unsigned int *)a0 count:(unsigned int)a1;
- (void)breadthFirstSearch:(unsigned int)a0 nodeVisitBlock:(id /* block */)a1 edgeVisitBlock:(id /* block */)a2;
- (void *)deadNodeMap;
- (id)decapsulateIPSheaderInData:(id)a0 error:(id *)a1;
- (id)decapsulatePlistData:(id)a0 error:(id *)a1;
- (id)decapsulateSupplementalData:(id)a0 forTag:(const char *)a1;
- (void)depthFirstSearch:(unsigned int)a0 nodeVisitBlock:(id /* block */)a1 edgeVisitBlock:(id /* block */)a2;
- (unsigned int)enumerateMembersOfGroupNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)initWithNodes:(unsigned int)a0;
- (id)initWithPlistRepresentation:(id)a0 error:(id *)a1;
- (void)invertEdges;
- (id)invertedGraph;
- (BOOL)isNodePresent:(unsigned int)a0;
- (unsigned int)parentGroupForNode:(unsigned int)a0;
- (void)removeMarkedEdges:(void *)a0;
- (void)removeMarkedNodes:(void *)a0;
- (id)renormalizedGraph;
- (void)setGraphCompatibilityVersion:(long long)a0;
- (id)subgraphWithMarkedNodes:(void *)a0;
- (void)ungroupNode:(unsigned int)a0;
- (void)withEdgeMarkingMap:(id /* block */)a0;
- (void)withNodeMarkingMap:(id /* block */)a0;

@end
