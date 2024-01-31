@interface NewsFeed.FormatVideoPlayerManager : NSObject <SVVideoPlayerViewControllerDelegate, SVVideoPlayerViewControllerDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ reuseDelegate;
    void /* unknown type, empty encoding */ offscreenVisibility;
    void /* unknown type, empty encoding */ partialVisibility;
    void /* unknown type, empty encoding */ onscreenVisibility;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ pictureInPictureState;
    void /* unknown type, empty encoding */ offlineManager;
    void /* unknown type, empty encoding */ visibilityPercentage;
    void /* unknown type, empty encoding */ isBookmarkInProgress;
    void /* unknown type, empty encoding */ isViewTransitionInProcess;
    void /* unknown type, empty encoding */ cover;
    void /* unknown type, empty encoding */ cacheKey;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ videoAdProviderFactory;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ adJournal;
    void /* unknown type, empty encoding */ sceneProvider;
    void /* unknown type, empty encoding */ offlineAlertControllerFactory;
}

- (id)videoAdForVideoPlayerViewController:(id)a0;
- (id)videoForVideoPlayerViewController:(id)a0;
- (void)videoPlayerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)videoPlayerViewController:(id)a0 resumedPlaybackOfVideo:(id)a1;
- (void)videoPlayerViewController:(id)a0 startedPlaybackOfVideo:(id)a1;
- (void)videoPlayerViewControllerDidExitFullscreen:(id)a0;
- (void)videoPlayerViewControllerDidStopPictureInPicture:(id)a0;
- (void)videoPlayerViewControllerWillStartPictureInPicture:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)startPictureInPictureIfPossible;
- (void)didApplyBookmark;
- (void)didFinishCoveringWithNotification:(id)a0;
- (void)didStartCoveringWithNotification:(id)a0;
- (void)willApplyBookmark;

@end
