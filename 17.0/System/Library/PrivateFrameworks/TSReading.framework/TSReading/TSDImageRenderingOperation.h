@class TSDImageInfo;

@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation {
    BOOL mShouldClipVertically;
}

@property (retain) TSDImageInfo *imageInfo;

- (void)dealloc;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageInfo:(id)a4 documentRoot:(id)a5;
- (id)initWithPreset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageInfo:(id)a4 documentRoot:(id)a5 shouldClipVertically:(BOOL)a6;

@end
