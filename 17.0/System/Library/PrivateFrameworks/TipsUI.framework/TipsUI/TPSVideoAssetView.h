@class NSTimer, NSString, UIImage, TPSKVOManager, TPSURLSessionItem, UIImageView, UIButton, AVPlayerLayer, AVPlayer;
@protocol TPSVideoAssetViewDelegate;

@interface TPSVideoAssetView : TPSImageAssetView {
    BOOL _avPlayerPlaybackFinished;
    BOOL _registeredForAVPlayerNotification;
    AVPlayer *_avplayer;
    AVPlayerLayer *_avplayerLayer;
    NSTimer *_replayButtonTimer;
    TPSKVOManager *_KVOManager;
}

@property (nonatomic) BOOL readyToDisplayAVPlayer;
@property (nonatomic) BOOL supportsVideoAssetViewCanShowMedia;
@property (nonatomic) BOOL supportsVideoAssetViewFinishedPlayingVideo;
@property (nonatomic) BOOL supportsVideoAssetViewUpdateAssetLoadingFinished;
@property (retain, nonatomic) TPSURLSessionItem *videoURLSessionItem;
@property (retain, nonatomic) NSString *downloadedVideoPath;
@property (weak, nonatomic) id<TPSVideoAssetViewDelegate> videoDelegate;
@property (nonatomic) BOOL videoPlaybackFinished;
@property (nonatomic) BOOL lastFrameDominant;
@property (nonatomic) double videoDelayTime;
@property (retain, nonatomic) UIImage *lastFrameImage;
@property (retain, nonatomic) NSString *cacheVideoIdentifier;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) UIButton *replayButton;
@property (retain, nonatomic) UIImageView *replayGradientView;

- (void)commonInit;
- (void)dealloc;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)cancel;
- (void)layoutSubviews;
- (void)playVideo;
- (void)stopVideoPlayer;
- (BOOL)videoInProgress;
- (void)avplayerDidFinishPlaying:(id)a0;
- (void)avplayerItemErrorChanged:(id)a0;
- (void)cancelReplayButtonTimer;
- (void)cancelVideoDownloadTask;
- (void)continuePlayVideo;
- (BOOL)displayingVideoLastFrame;
- (void)fetchImageWithIdentifier:(id)a0 path:(id)a1;
- (void)playVideoDelay;
- (void)removeVideoPlayerLayer;
- (void)replayVideo;
- (void)resetVideoPlayer;
- (void)restartVideoDelay;
- (void)scrubVideoToFirstFrame;
- (void)setAspectFillAsset:(BOOL)a0;
- (BOOL)updateImageToVideoLastFrame;
- (void)updateReplayButtonHiddenState:(BOOL)a0;
- (void)updateVideoGravity;

@end
