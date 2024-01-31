@class NSString, _UIVisualEffectBackdropView, UIImage, UIImageView, _SFSiteIconView, UILayoutGuide, UIVisualEffectView, SFSiteCardSourceView, UILabel;

@interface SFSiteCardCell : UICollectionViewCell <WBSStartPageCardProxy> {
    UIImageView *_badgeView;
    SFSiteCardSourceView *_captionLabel;
    _SFSiteIconView *_imageView;
    UIVisualEffectView *_subtitleEffectView;
    UILabel *_subtitleLabel;
    UILayoutGuide *_textLayoutGuide;
    UILabel *_titleLabel;
    UIVisualEffectView *_backgroundEffectView;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) _UIVisualEffectBackdropView *backdropCaptureView;
@property (retain, nonatomic) UIImage *badge;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *caption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)focusEffect;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)initWithCoder:(id)a0;
- (void)setCaptionText:(id)a0 icon:(id)a1;
- (void)setImageFromBookmark:(id)a0;

@end
