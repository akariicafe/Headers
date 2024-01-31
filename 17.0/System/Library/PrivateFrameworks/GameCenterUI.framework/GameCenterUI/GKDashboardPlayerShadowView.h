@class GKPlayer, UIView, UICollectionViewCell, GKDashboardPlayerPhotoView;

@interface GKDashboardPlayerShadowView : UIView

@property (readonly, nonatomic) UIView *parentView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) UICollectionViewCell *parentCell;
@property (readonly, nonatomic) BOOL isUsingPlaceholder;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *photoView;
@property (nonatomic) BOOL dimmed;

- (id)player;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPlayer:(id)a0;
- (void)awakeFromNib;
- (id)parentView;
- (void)invalidatePhoto;
- (BOOL)isUsingPlaceholder;
- (void)setupPhoto;

@end
