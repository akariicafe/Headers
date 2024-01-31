@class UIImageView;

@interface PLVideoPosterFrameView : UIView {
    UIImageView *_imageView;
    long long _scaleMode;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;

- (void)dealloc;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (id)imageView;
- (void)setScaleMode:(long long)a0;

@end
