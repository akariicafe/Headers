@class UIImageView, CAMSlashContainer;

@interface CAMCircleButton : UIButton

@property (retain, nonatomic, setter=_setSlashView:) CAMSlashContainer *_slashView;
@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIImageView *_backgroundView;
@property (nonatomic) long long orientation;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)updateImage;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createCircleImageForContentSize:(id)a0;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)_updateBackgroundImage;
- (void)layoutSubviews;
- (id)imageNameForAXHUD;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (void)updateSlashAnimated:(BOOL)a0;
- (void)updateTintColors;

@end
