@interface PFParallaxImageLayer : PFParallaxLayer

@property (readonly, nonatomic) struct __CVBuffer { } *image;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })pixelSize;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (id)fileExtension;
- (id)initWithImage:(struct __CVBuffer { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zPosition:(double)a2 identifier:(id)a3;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
