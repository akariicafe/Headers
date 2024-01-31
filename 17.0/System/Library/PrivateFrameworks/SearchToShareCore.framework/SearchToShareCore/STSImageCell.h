@class UIView, NSString, UIImage, UIImageView, STSCellDownloadOverlayView, STSAnimatedImageInfo, UILabel, UIColor;

@interface STSImageCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIImageView *_badgeView;
    UIView *_placeholderColorView;
    STSCellDownloadOverlayView *_downloadProgressView;
    UILabel *_labelView;
    UIView *_labelBackgroundView;
    UIImageView *_debugBadgeView;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) STSAnimatedImageInfo *imageInfo;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (retain, nonatomic) UIImage *badge;
@property (retain, nonatomic) UIImage *debugBadge;
@property (nonatomic) BOOL showDownloadIndicator;
@property (nonatomic) double downloadProgress;
@property (copy, nonatomic) NSString *category;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (void)_updatePlaceholderViewAnimated:(BOOL)a0;
- (double)imageAspectRatio;
- (void)_updateBadgeAnimated:(BOOL)a0;
- (void)setShowDownloadIndicator:(double)a0 animated:(BOOL)a1;

@end
