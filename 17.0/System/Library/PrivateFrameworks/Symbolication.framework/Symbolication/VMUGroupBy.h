@class VMUProcessObjectGraph;

@interface VMUGroupBy : NSObject

@property (readonly) VMUProcessObjectGraph *graph;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (void)enumerateGroups:(void *)a0 withBlock:(id /* block */)a1;
- (id)typeNameForNode:(unsigned int)a0;

@end
