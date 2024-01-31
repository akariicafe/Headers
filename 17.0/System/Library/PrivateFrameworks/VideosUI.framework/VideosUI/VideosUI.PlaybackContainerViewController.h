@interface VideosUI.PlaybackContainerViewController : UIViewController <VUIPlaybackUpNextControllerDelegate, VUIPlaybackContainerViewController> {
    void /* unknown type, empty encoding */ pipTargetView;
    void /* unknown type, empty encoding */ postPlayViewController;
    void /* unknown type, empty encoding */ multiPlayerViewController;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ isPiPed;
    void /* unknown type, empty encoding */ isAnimatingPiP;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullscreenButtonLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullscreenButton;
    void /* unknown type, empty encoding */ cancellables;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)backgroundPlaybackWillBegin;
- (void)mediaInfoDidChangeTo:(id)a0 canPlay:(BOOL)a1 wasAutoPlayed:(BOOL)a2;
- (void)playbackUpNextControllerReadyToBeDisplayed;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)embedMultiPlayerViewController:(id)a0;
- (void)enterPictureInPicture;
- (void)exitPictureInPictureWithCompletion:(id /* block */)a0;
- (void)hidePictureInPictureWithCompletion:(id /* block */)a0;
- (void)loadPostPlayForMediaItem:(id)a0;
- (void)presentPlayerViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)removePostPlayViewController;
- (id)unembedMultiPlayerViewController;

@end
