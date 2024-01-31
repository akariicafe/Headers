@class ASCScreenshotDisplayConfiguration, ASCBorderedScreenshotView, AVPlayerLayer, AVPlayer;
@protocol ASCVideoViewDelegate;

@interface ASCVideoView : UIView

@property (readonly, copy, nonatomic) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration;
@property (readonly, nonatomic) ASCBorderedScreenshotView *previewFrameArtwork;
@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (weak, nonatomic) id<ASCVideoViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled;
@property (nonatomic, getter=isMuted) BOOL muted;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)toggleIsPlaying;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoURL:(id)a1 screenshotDisplayConfiguration:(id)a2;
- (void)pauseVideo;
- (void)playVideo;
- (void)playerDidPlayToEndTime:(id)a0;
- (struct CGSize { double x0; double x1; })preferredVideoSize;
- (void)resetVideo;

@end
