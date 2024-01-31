@interface __NSSKGraph : NSObject {
    struct edge { unsigned long long x0; unsigned long long x1[2]; unsigned long long x2; } *_edges;
    struct vertex { unsigned long long x0; unsigned long long x1; unsigned long long *x2; } *_vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}

- (void)dealloc;
- (id)initWithNumberOfVertices:(long long)a0 numberOfEdges:(long long)a1;
- (struct edge **)isAcyclic;
- (BOOL)addEdgeWithH1:(unsigned long long)a0 withH2:(unsigned long long)a1;
- (unsigned long long)numOfEdges;
- (BOOL)isEmpty;

@end
