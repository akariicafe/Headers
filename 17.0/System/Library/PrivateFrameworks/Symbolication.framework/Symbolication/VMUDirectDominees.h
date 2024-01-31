@class VMUDominatorGraph;

@interface VMUDirectDominees : NSEnumerator {
    VMUDominatorGraph *_dg;
    unsigned int _node;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithDominatorGraph:(id)a0 rootNode:(unsigned int)a1;

@end
