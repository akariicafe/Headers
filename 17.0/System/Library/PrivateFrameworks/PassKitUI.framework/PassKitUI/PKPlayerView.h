@class AVPlayerViewController, AVPlayerLooper, AVQueuePlayer;

@interface PKPlayerView : UIView {
    AVQueuePlayer *_player;
    AVPlayerViewController *_controller;
    AVPlayerLooper *_playerLooper;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)playItemAtURL:(id)a0;

@end
