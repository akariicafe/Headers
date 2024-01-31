@class AVPlayerViewController, NSString, ICMovieAttachmentView;

@interface ICMovieController : NSObject <AVPlayerViewControllerDelegate>

@property (class, readonly, nonatomic) ICMovieController *sharedController;
@property (class, readonly, nonatomic) BOOL isFullScreen;

@property (nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) AVPlayerViewController *moviePlayerController;
@property (nonatomic) BOOL playbackForPreview;
@property (retain, nonatomic) ICMovieAttachmentView *activeMovieAttachmentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)pauseIfPlaying;
+ (void)stopIfPlaying;

- (void)play;
- (void)dealloc;
- (void).cxx_destruct;
- (void)playerViewController:(id)a0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (id)ic_viewControllerManager;
- (void)pauseIfPlaying;
- (void)moviePlayerTapped;
- (BOOL)prepareForPlayback;
- (void)stopIfPlaying;
- (void)updatePlayer;

@end
