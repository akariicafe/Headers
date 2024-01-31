@class ASVLoadingView, UIImageView, UIImage, NSError, NSLayoutConstraint, ASVBadgeView;

@interface ASVThumbnailButton : UIButton {
    ASVLoadingView *_loadingView;
    ASVBadgeView *_badgeView;
    UIImageView *_imageView;
    NSLayoutConstraint *_badgeTopConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
}

@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSError *error;

+ (id)thumbnailButton;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupButton;
- (void)_updateSubviewVisibility;

@end
