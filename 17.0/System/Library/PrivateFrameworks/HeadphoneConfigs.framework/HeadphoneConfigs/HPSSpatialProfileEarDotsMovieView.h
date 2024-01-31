@class AVPlayerLayer, AVPlayer, AVPlayerItem;

@interface HPSSpatialProfileEarDotsMovieView : UIView {
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
}

@property (retain) id timeObserverToken;
@property (retain) AVPlayer *player;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideDots;
- (void).cxx_destruct;
- (void)addBoundaryTimeObserver;
- (void)removeBoundaryTimeObserver;
- (void)showDots;

@end
