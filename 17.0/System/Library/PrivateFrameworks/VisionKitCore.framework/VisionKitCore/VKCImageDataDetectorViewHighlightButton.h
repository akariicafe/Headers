@class UIImageView;

@interface VKCImageDataDetectorViewHighlightButton : VKPlatformView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *blurImageView;
@property (nonatomic) double rotation;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)blurImage:(id)a0 withRadius:(double)a1;

@end
