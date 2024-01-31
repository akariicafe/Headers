@class VMUProcessObjectGraph;

@interface VMUGraphEnumerator : NSObject

@property (readonly) VMUProcessObjectGraph *graph;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (unsigned int *)buildReversePostOrderWithRoots:(void *)a0;
- (void)enumerateEdgesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (void *)destinationsOfGroup:(id)a0;
- (void *)destinationsOfNodes:(void *)a0;
- (void)enumerateDestinationsOfGroup:(id)a0 groupedBy:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateDestinationsOfNode:(unsigned int)a0 groupedBy:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateDestinationsOfNodes:(void *)a0 groupedBy:(id)a1 withBlock:(id /* block */)a2;
- (id)statusDisplayDescription;

@end
