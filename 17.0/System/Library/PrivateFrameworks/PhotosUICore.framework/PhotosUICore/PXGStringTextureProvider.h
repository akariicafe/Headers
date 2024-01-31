@class NSMutableDictionary;

@interface PXGStringTextureProvider : PXGCGImageTextureProvider {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestBlockLock;
    NSMutableDictionary *_requestBlockLock_requestIDsToProviderBlock;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;
- (id)init;
- (void)cancelTextureRequests:(id)a0;
- (void)viewEnvironmentDidChange:(id)a0;
- (BOOL)_shouldRedrawForViewEnvironmentChange:(id)a0;
- (void).cxx_destruct;
- (void)_requestTextureForAttributedString:(id)a0 attributedStringBoundingSize:(struct CGSize { double x0; double x1; })a1 string:(id)a2 withAttributes:(id)a3 targetSize:(struct CGSize { double x0; double x1; })a4 drawingOptions:(long long)a5 drawingContext:(id)a6 userInterfaceDirection:(unsigned long long)a7 verticalAlignment:(long long)a8 screenScale:(double)a9 textureRequestID:(int)a10 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a11;

@end
