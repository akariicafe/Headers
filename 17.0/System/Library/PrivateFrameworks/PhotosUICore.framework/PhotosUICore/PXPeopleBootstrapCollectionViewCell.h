@class UIImageView, UIImage, PXPersonImageRequest, UIView;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *selectedCheckmarkView;
@property (readonly, nonatomic) UIView *unselectedCheckmarkView;
@property (readonly, nonatomic) UIImageView *badgeView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } checkmarkImageSize;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) unsigned long long presentationStatus;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) BOOL isMergeCandidate;
@property (nonatomic) BOOL isVerified;

+ (id)cloudBadgeImage;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isRTL;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateCellSizing;
- (void)setImage:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
