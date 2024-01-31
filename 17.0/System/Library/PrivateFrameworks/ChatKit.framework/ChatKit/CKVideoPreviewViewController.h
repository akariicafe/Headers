@class AVPlayerLayer, AVPlayerItem, AVPlayer;
@protocol CKVideoPreviewViewControllerDelegate;

@interface CKVideoPreviewViewController : UIViewController

@property (retain, nonatomic) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *avPlayerLayer;
@property (nonatomic) BOOL reachedEnd;
@property (weak, nonatomic) id<CKVideoPreviewViewControllerDelegate> videoPreviewDelegate;
@property (nonatomic) BOOL redisplayStatusBar;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (void)play;
- (void)pause;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)togglePlayPause;
- (void)setVideoFileURL:(id)a0;
- (void)videoDidReachEnd:(id)a0;

@end
