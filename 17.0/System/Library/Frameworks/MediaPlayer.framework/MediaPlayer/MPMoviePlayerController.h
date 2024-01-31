@class AVPlayerViewController, NSString, _MPMoviePlayerProxyView, NSURL, UIView, AVAssetImageGenerator, UIViewController;

@interface MPMoviePlayerController : NSObject <AVPlayerViewControllerDelegatePrivate, MPMediaPlayback> {
    _MPMoviePlayerProxyView *_proxyView;
    AVAssetImageGenerator *_generator;
    UIView *_backgroundView;
    BOOL _useApplicationAudioSession;
    BOOL _isFullscreen;
}

@property (readonly, nonatomic) AVPlayerViewController *playerViewController;
@property (weak, nonatomic) UIViewController *hostingViewController;
@property (copy, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) unsigned long long loadState;
@property (nonatomic) long long controlStyle;
@property (nonatomic) long long repeatMode;
@property (nonatomic) BOOL shouldAutoplay;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (nonatomic) long long scalingMode;
@property (readonly, nonatomic) BOOL readyForDisplay;
@property (readonly, nonatomic) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic) double endPlaybackTime;
@property (nonatomic) BOOL allowsAirPlay;
@property (readonly, nonatomic, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

- (void)play;
- (void)pause;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)prepareToPlay;
- (void)playerViewController:(id)a0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (id)initWithContentURL:(id)a0;
- (id)accessLog;
- (id)errorLog;
- (id)timedMetadata;
- (void)cancelAllThumbnailImageRequests;
- (id)_advertisementView;
- (void)_avPlayerItemDidPlayToEndNotification:(id)a0;
- (id)_videoViewController;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)endSeeking;
- (void)requestThumbnailImagesAtTimes:(id)a0 timeOption:(long long)a1;
- (void)setFullscreen:(BOOL)a0 animated:(BOOL)a1;
- (void)setUseApplicationAudioSession:(BOOL)a0;
- (id)thumbnailImageAtTime:(double)a0 timeOption:(long long)a1;
- (BOOL)useApplicationAudioSession;

@end
