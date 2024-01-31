@interface PXGTitleSubtitleTextureProvider : PXGCGImageTextureProvider

+ (double)_drawWithTitle:(id)a0 subtitle:(id)a1 spec:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 context:(struct CGContext { } *)a4 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 screenScale:(double)a6;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;
- (void)_requestTextureForTitle:(id)a0 subtitle:(id)a1 spec:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4 requestID:(int)a5 renderCompletionHandler:(id /* block */)a6;
- (id)workQueue;

@end
