@class UIImageView, MUPhotoTileView, MUPhotoTileOverlay;
@protocol MUPhotoTileViewModel;

@interface MUPhotoTileCollectionViewCell : UICollectionViewCell {
    MUPhotoTileView *_photoTileView;
}

@property (readonly, nonatomic) UIImageView *contentImageView;
@property (nonatomic) struct CGSize { double x0; double x1; } targetFrameSize;
@property (retain, nonatomic) id<MUPhotoTileViewModel> viewModel;
@property (retain, nonatomic) MUPhotoTileOverlay *photoOverlay;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
