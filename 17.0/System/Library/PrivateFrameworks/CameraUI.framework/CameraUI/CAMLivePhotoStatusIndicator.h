@class CAMLivePhotoBloomView;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) long long livePhotoMode;

- (void)stopAnimating;
- (void)startAnimating;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseOutline;
- (void)_updateTintColor;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)layoutSubviews;
- (id)imageNameForAXHUD;
- (void)setLivePhotoMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
