@class UIButton, _UNMaterialButton, MTMaterialView;

@interface _UNMediaPlayPauseButton : UIControl

@property (retain, nonatomic) _UNMaterialButton *button;
@property (retain, nonatomic) UIButton *invisibleButton;
@property (retain, nonatomic) MTMaterialView *backgroundCircle;
@property (nonatomic) long long type;

- (void)tintColorDidChange;
- (void)_updateSize;
- (void)_updateBackground;
- (void).cxx_destruct;
- (void)_updateStyle;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)_updateType;
- (void)_buttonTouchUpInside:(id)a0;
- (void)_updateSelected;
- (void)_updateBackgroundForAudioStyle;
- (void)_updateBackgroundForMovieStyle;
- (void)_updateSelectedForAudioStyle;
- (void)_updateSelectedForMovieStyle;
- (void)_updateSizeForAudioStyle;
- (void)_updateSizeForMovieStyle;
- (void)_updateStyleForAudioStyle;
- (void)_updateStyleForMovieStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
