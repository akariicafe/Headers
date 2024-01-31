@class BPSIllustratedWatchView, UIImageView, UIImage, UILabel;

@interface PKWatchHeroImageView : UIView {
    BPSIllustratedWatchView *_watchView;
    UILabel *_doneLabel;
    UIImageView *_wallpaperImageView;
    UIImageView *_cardArtImageView;
}

@property (nonatomic) BOOL hideDoneLabel;
@property (retain, nonatomic) UIImage *cardImage;
@property (retain, nonatomic) UIImage *wallpaperImage;
@property (nonatomic) unsigned long long size;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } watchScreenCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } watchScreenFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cardFrame;
@property (readonly, nonatomic) double watchDeviceImageScaleFactor;

+ (struct CGSize { double x0; double x1; })heroWatchImageSize;
+ (struct CGSize { double x0; double x1; })recommendedCardImageSize;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updatedAccessibilityLabel;
- (void)setWallpaperImage:(id)a0 contentMode:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spaceBelowCardFrame;

@end
