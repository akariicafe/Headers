@class __AVPlayerLayerView, NSString, LPVisualMediaView, LPAVPlayerViewController, AVPlayerController, AVPlayer;

@interface LPFullScreenVideoController : NSObject <AVPlayerViewControllerDelegatePrivate> {
    LPVisualMediaView *_sourceView;
    LPAVPlayerViewController *_playerViewController;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVPlayer *_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)present;
- (void).cxx_destruct;
- (void)playerViewController:(id)a0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (BOOL)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)a0;
- (void)didCompleteDismissal;
- (id)initWithPlayer:(id)a0 sourceView:(id)a1;
- (void)setUpFullScreenVideoViewControllerIfNeeded;

@end
