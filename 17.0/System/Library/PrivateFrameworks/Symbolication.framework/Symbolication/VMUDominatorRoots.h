@class VMUDominatorGraph;

@interface VMUDominatorRoots : NSEnumerator {
    VMUDominatorGraph *_dg;
    unsigned int _i;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithDominatorGraph:(id)a0;

@end
