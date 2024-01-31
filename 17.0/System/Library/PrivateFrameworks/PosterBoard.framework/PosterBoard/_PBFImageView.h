@class UIImage, UIImageView;

@interface _PBFImageView : UIView {
    UIImageView *_imageView;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;

- (id)init;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)updateImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

@end
