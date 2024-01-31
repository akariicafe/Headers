@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPMultipleImageView : LPComponentView {
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}

- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_availableSizeForImageNumber:(unsigned long long)a0 withLayout:(unsigned long long)a1 withinSize:(struct CGSize { double x0; double x1; })a2 applyingLayout:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeRectForImageAtIndex:(unsigned long long)a0 fittingSize:(struct CGSize { double x0; double x1; } *)a1 width:(double *)a2 height:(double *)a3 size:(struct CGSize { double x0; double x1; })a4 multipleImageLayout:(unsigned long long)a5;
- (void)ensureImageViews;
- (id)initWithHost:(id)a0 images:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (struct CGSize { double x0; double x1; })layoutImagesForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;

@end
