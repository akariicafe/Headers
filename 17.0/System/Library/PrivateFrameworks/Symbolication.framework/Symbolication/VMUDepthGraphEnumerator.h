@class VMUDepthGraph;

@interface VMUDepthGraphEnumerator : VMUGraphEnumerator {
    VMUDepthGraph *_depthGraph;
}

- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)initWithGraph:(id)a0 depthGraph:(id)a1;
- (id)statusDisplayDescription;

@end
