@class VideosExtrasZoomingImageInteractiveTransitionSourceContext, NSString, UIView, UIPinchGestureRecognizer, IKLockupElement, NSLayoutConstraint, UILabel, VideosExtrasConstrainedArtworkContainerView;

@interface VideosExtrasLockupCollectionViewCell : UICollectionViewCell <VideosExtrasCarouselCollectionViewCell> {
    struct CGSize { double width; double height; } _artworkSize;
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    unsigned long long _itemIndex;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_descriptionBaselineConstraint;
    NSString *_zoomingImageTransitionIdentifier;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    BOOL _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property (weak, nonatomic) IKLockupElement *lockup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePinchGesture:(id)a0;
- (void)setSubtitleText:(id)a0;
- (id)titleTextStyle;
- (id)descriptionText;
- (id)titleText;
- (void)setTitleText:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)thumbnailImage;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDescriptionText:(id)a0;
- (id)subtitleText;
- (void)updateConstraints;
- (void).cxx_destruct;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)a0;
- (void)setThumbnailImage:(id)a0;
- (id)subtitleTextStyle;
- (id)descriptionTextStyle;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)a0;
- (void)setThumbnailBorderColor:(id)a0;
- (void)setThumbnailImageAccessibilityText:(id)a0;
- (void)setThumbnailImagePlaceholder:(id)a0;
- (void)setThumbnailMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setThumbnailOverlayImage:(id)a0;
- (void)setZoomingImageTransitionIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })thumbnailMaxSize;

@end
