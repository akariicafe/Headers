@interface PXGEmptyTexture : PXGBaseTexture

- (long long)estimatedByteSize;
- (struct CGImage { } *)imageRepresentation;
- (BOOL)isOpaque;
- (unsigned char)presentationType;
- (struct CGSize { double x0; double x1; })pixelSize;

@end
