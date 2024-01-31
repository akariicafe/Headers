@class NSArray, VUIImageProxy;

@interface VideosUI.MultiPlayerViewController : UIViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, UIGestureRecognizerDelegate, UIDropInteractionDelegate, VUIMultiPlayerViewController> {
    void /* unknown type, empty encoding */ fullscreenPadding;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerViewLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailsViewLayout;
    void /* unknown type, empty encoding */ fullscreenPlayerViewController;
    void /* unknown type, empty encoding */ exitFullscreenCompletion;
    void /* unknown type, empty encoding */ swappedPlayerIndices;
    void /* unknown type, empty encoding */ $__lazy_storage_$_metricsRecorder;
    void /* unknown type, empty encoding */ isSupportedScreenSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityTapGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerPanGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerPinchGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGesture;
    void /* unknown type, empty encoding */ inactivityTimeout;
    void /* unknown type, empty encoding */ inactivityTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ghostPlayerViewController;
    void /* unknown type, empty encoding */ isDetailsViewControllerVisible;
    void /* unknown type, empty encoding */ playerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerPresenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_grabberView;
    void /* unknown type, empty encoding */ detailsViewController;
    void /* unknown type, empty encoding */ presentationPlayerViewControllers;
    void /* unknown type, empty encoding */ topConstraint;
    void /* unknown type, empty encoding */ bottomConstraint;
    void /* unknown type, empty encoding */ leadingConstraint;
    void /* unknown type, empty encoding */ trailingConstraint;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ initiallyShowsDetails;
    void /* unknown type, empty encoding */ prospectivePlayerView;
}

@property (nonatomic, readonly) NSArray *playerViewControllers;
@property (nonatomic, retain) VUIImageProxy *backgroundImageProxy;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) unsigned long long distribution;
@property (nonatomic, readonly) BOOL isShowingProspectivePlayer;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (id)playerViewController:(id)a0 targetViewForDismissalAnimationWithProposedTargetView:(id)a1;
- (void)viewDidLoad;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)captureAndShowPlayerScreenshots;
- (void)addPlayerViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)enterFullscreenWithPlayerViewController:(id)a0 completion:(id /* block */)a1;
- (void)exitFullscreenWithCompletion:(id /* block */)a0;
- (BOOL)isSupportedScreenSize:(struct CGSize { double x0; double x1; })a0;
- (void)onPanWithGesture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationRectForPlayerViewController:(id)a0;
- (void)recordMetricsEventWithIdentifier:(id)a0 impressionsData:(id)a1 locationData:(id)a2 didAddPlayer:(BOOL)a3;
- (void)removePlayerViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)replacePlayerViewController:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)setDetailsViewControllerVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setProspectivePlayerVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setProspectivePlayerVisible:(BOOL)a0 atIndex:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)viewPinchedWithGesture:(id)a0;
- (void)viewSwipedWithGesture:(id)a0;
- (void)viewTappedWithGesture:(id)a0;

@end
