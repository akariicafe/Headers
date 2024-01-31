@class NSArray, _TDPackerNode;

@interface TDPacker : NSObject {
    id /* block */ _sizeHandler;
    NSArray *_objectsToPack;
}

@property (retain) _TDPackerNode *root;
@property (retain) NSArray *packedObjects;
@property (retain, nonatomic) NSArray *objectsToPack;
@property (readonly, nonatomic) unsigned long long countOfEmptyNodes;

- (void)dealloc;
- (void)setSizeHandler:(id /* block */)a0;
- (void)_countOfEmptyNodes:(id)a0 count:(unsigned long long *)a1;
- (id)_findNode:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (id)_growDown:(struct CGSize { double x0; double x1; })a0;
- (id)_growNodeToSize:(struct CGSize { double x0; double x1; })a0;
- (id)_growRight:(struct CGSize { double x0; double x1; })a0;
- (id)_splitNode:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })enclosingSize;
- (struct CGPoint { double x0; double x1; })fitPositionOfObjectAtIndex:(long long)a0;
- (BOOL)objectAtIndexFit:(long long)a0;
- (void)pack;
- (id /* block */)sizeHandler;

@end
