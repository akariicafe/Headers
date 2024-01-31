@interface LegacyTileHostLayer : CALayer {
    void *_tileGrid;
}

- (void)renderInContext:(struct CGContext { } *)a0;
- (id)actionForKey:(id)a0;
- (id)initWithTileGrid:(void *)a0;

@end
