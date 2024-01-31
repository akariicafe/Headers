@class UIImage, UIImageView;

@interface SUUIIPhoneSlideshowCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIImageView *_playIcon;
}

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (nonatomic, getter=isVideo) BOOL video;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
