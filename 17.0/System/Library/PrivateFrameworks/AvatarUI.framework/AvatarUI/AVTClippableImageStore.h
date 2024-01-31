@interface AVTClippableImageStore : AVTImageStore

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resourceClippingRectForItem:(id)a0 scope:(id)a1;
- (BOOL)saveImage:(id)a0 forItem:(id)a1 scope:(id)a2 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 error:(id *)a4;

@end
