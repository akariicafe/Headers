@class UIImage, CALayer;

@interface PKImageView : UIView {
    CALayer *_imageLayer;
    CALayer *_addLayer;
    CALayer *_mulLayer;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *addImage;
@property (retain, nonatomic) UIImage *mulImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)_updateMulLayer;
- (void)_updateAddLayer;
- (id)_createLayerWithImage:(id)a0 compositingFiler:(id)a1;
- (void)_updateImageLayer;
- (void)_updateLayerFrames;
- (void)setupWithDrawing:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 strokeSpaceClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 sixChannel:(BOOL)a4;

@end
