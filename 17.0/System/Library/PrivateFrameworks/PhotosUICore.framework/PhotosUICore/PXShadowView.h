@class NSShadow, UIImage, UIImageView;

@interface PXShadowView : UIView {
    UIImage *_resizableShadowImage;
    BOOL _resizableShadowImageNeedsUpdate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentsRect;
    UIImageView *_imageView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } castingFrame;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSShadow *shadow;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_invalidateResizableShadowImage;

@end
