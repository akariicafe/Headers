@interface PXGSharedMetalRenderContext : PXGMetalRenderContext

- (id)newTextureWithDescriptor:(id)a0;
- (BOOL)wantsMutableSharedTextures;
- (void)fastCopyBytes:(const void *)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 length:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (BOOL)supportsSharedTextures;
- (void)copyBytes:(const void *)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 length:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;

@end
