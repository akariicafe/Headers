@class MPUArtworkView, NSArray, UIImageView, UIImage;

@interface VideosExtrasConstrainedArtworkContainerView : UIView

@property (retain, nonatomic) MPUArtworkView *artworkView;
@property (retain, nonatomic) UIImageView *overlayView;
@property (retain, nonatomic) NSArray *overlaySizeConstraints;
@property (nonatomic) BOOL shouldAutoresizeMaskLayerToFillBounds;
@property (nonatomic) BOOL shouldBottomAlignArtwork;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) double overlayScale;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
