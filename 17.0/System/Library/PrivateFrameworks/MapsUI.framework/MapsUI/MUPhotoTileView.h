@class UIView, MUBadgeView, UIImageView, MUImageView, MUPhotoTileOverlay, UILabel, MUGradientView;
@protocol MUPhotoTileViewModel;

@interface MUPhotoTileView : UIView {
    MUImageView *_imageView;
    UILabel *_titleLabel;
    MUBadgeView *_vendorBadge;
    MUGradientView *_titleGradientView;
    UIView *_yourPhotosView;
    MUImageView *_yourPhotosImageView;
    UILabel *_yourPhotosViewLabel;
}

@property (nonatomic) struct CGSize { double width; double height; } targetFrameSize;
@property (retain, nonatomic) MUPhotoTileOverlay *photoOverlay;
@property (retain, nonatomic) id<MUPhotoTileViewModel> viewModel;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, nonatomic) UIImageView *contentImageView;

- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateOverlay;

@end
