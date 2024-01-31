@class UIFont, UIColor, UIVisualEffectView, UILabel;

@interface PUWallpaperPosterDateView : UIView

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (readonly, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIFont *effectiveTimeFont;
@property (nonatomic) BOOL useVibrantAppearance;
@property (retain, nonatomic) UIFont *timeFont;
@property (retain, nonatomic) UIColor *timeColor;
@property (nonatomic) BOOL useThinnerFontWeightForTime;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_initViews;
- (void)_updateTimeLabel;
- (void)layoutWithLayout:(id)a0 inContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
