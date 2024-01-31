@class AVPlayer;

@interface _PNPPencilMovieView : UIView {
    AVPlayer *_player;
    BOOL _repeat;
}

+ (Class)layerClass;
+ (double)_playbackRate;

- (void)teardown;
- (void).cxx_destruct;
- (void)prepare;
- (id)_playerLayer;
- (void)_applyFilterToLayer;
- (void)_playbackEnded;
- (void)completeRevolutionWithCompletionBlock:(id /* block */)a0;

@end
