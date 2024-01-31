@class AVAsset, UIImageView, UIImage, AVPlayer;

@interface BKUIPearlMovieLoopView : UIView

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVAsset *assets;
@property (retain, nonatomic) UIImage *selfPortraite;
@property (retain, nonatomic) UIImageView *imageView;

+ (Class)layerClass;

- (id)playerLayer;
- (void).cxx_destruct;
- (BOOL)portrait;
- (void)hideAVPlayerReplaceWithSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 player:(id)a1 asset:(id)a2;
- (id)selfPortrait;
- (void)setAlphaHideOnZero:(double)a0;
- (void)unhideAVPlayerRemoveSnapshot;

@end
