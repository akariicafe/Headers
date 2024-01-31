@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView

@property (readonly, retain, nonatomic) AVPlayerLayer *layer;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) long long scaleMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setScaleMode:(long long)a0 duration:(double)a1;

@end
