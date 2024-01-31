@class NSOperationQueue;

@interface TSDSwatchCache : NSObject {
    NSOperationQueue *mOperationQueue;
}

+ (id)swatchCache;

- (id)init;
- (void)dealloc;
- (id)p_maskInfoForMovieInfo:(id)a0 context:(id)a1;
- (void)applyFakeShadowForWhitePresetsIfNecessary:(id)a0 documentRoot:(id)a1;
- (id)imageForImagePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 imageInfo:(id)a3 shouldClipVertically:(BOOL)a4 documentRoot:(id)a5;
- (id)imageForImagePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageInfo:(id)a4 shouldClipVertically:(BOOL)a5 documentRoot:(id)a6;
- (id)imageForMoviePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 movieInfo:(id)a3 shouldClipVertically:(BOOL)a4 documentRoot:(id)a5;
- (id)imageForMoviePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 movieInfo:(id)a4 shouldClipVertically:(BOOL)a5 documentRoot:(id)a6;
- (id)imageForShapePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 shapeType:(int)a3 angle:(double)a4 documentRoot:(id)a5;
- (id)imageForShapePreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 shapeType:(int)a4 angle:(double)a5 documentRoot:(id)a6;
- (struct CGSize { double x0; double x1; })imageSizeForPreset:(id)a0 swatchSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)p_newImageWithConnectionLineKnobsForShape:(id)a0 atScale:(double)a1 ofSize:(struct CGSize { double x0; double x1; })a2 overImage:(struct CGImage { } *)a3;
- (id)p_thumbnailImageDataForImageData:(id)a0;
- (struct CGSize { double x0; double x1; })shapeSwatchInset;
- (void)warmStyle:(id)a0 withFillProperty:(int)a1 documentRoot:(id)a2;

@end
