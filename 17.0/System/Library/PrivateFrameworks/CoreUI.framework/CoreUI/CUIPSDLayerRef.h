@interface CUIPSDLayerRef : CUIPSDLayerBaseRef

- (void)dealloc;
- (id)image;
- (id)gradient;
- (id)imageFromSlice:(unsigned int)a0;
- (id)colorFill;
- (struct CGImage { } *)createCGImage;
- (id)fillSample;
- (id)imageFromSlice:(unsigned int)a0 isEmptyImage:(BOOL *)a1;
- (id)imageIsZeroSizeImage:(BOOL *)a0;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (id)layerEffects;
- (id)maskFromSlice:(unsigned int)a0;
- (id)patternFromSlice:(unsigned int)a0;
- (id)patternFromSlice:(unsigned int)a0 isZeroSizeImage:(BOOL *)a1;

@end
