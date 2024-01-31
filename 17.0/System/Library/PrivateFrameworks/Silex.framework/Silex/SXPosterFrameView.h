@class SVVideoPlayButton;

@interface SXPosterFrameView : UIImageView

@property (retain, nonatomic) SVVideoPlayButton *playButton;

- (BOOL)accessibilityIgnoresInvertColors;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
