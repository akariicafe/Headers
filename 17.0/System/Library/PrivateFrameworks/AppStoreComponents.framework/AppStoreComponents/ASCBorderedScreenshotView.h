@class ASCArtworkView;

@interface ASCBorderedScreenshotView : UIView

@property (retain, nonatomic) ASCArtworkView *artworkView;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)imageView;
- (struct CGSize { double x0; double x1; })preferredArtworkSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenshotDisplayConfiguration:(id)a1;

@end
