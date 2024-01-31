@class UIColor, NSMutableArray;

@interface MPUNowPlayingIndicatorView : UIControl {
    NSMutableArray *_levelViews;
}

@property (nonatomic) double interLevelSpacing;
@property (nonatomic) double levelCornerRadius;
@property (nonatomic) double levelWidth;
@property (nonatomic) double maximumLevelHeight;
@property (nonatomic) double minimumLevelHeight;
@property (nonatomic) long long numberOfLevels;
@property (nonatomic) long long playbackState;
@property (nonatomic) BOOL showsLevelGutters;
@property (retain, nonatomic) UIColor *levelGuttersColor;
@property (nonatomic) double minimumFrameInterval;

- (void)tintColorDidChange;
- (void)_removeAllAnimations:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reloadLevelViews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateLevelAnimations;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
