@interface RBSymbolShapeLayer : CAShapeLayer {
    struct path_ptr { struct RBPath { void *info; struct RBPathCallbacks *callbacks; } _p; } _rbPath;
}

- (id).cxx_construct;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;

@end
