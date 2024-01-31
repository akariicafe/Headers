@class NANowPlayingBottomControls, NANowPlayingTitleView, UIView, NANowPlayingTimeControl, NANowPlayingPlaybackControls, NANowPlayingArtworkView, _UIGrabber, UIButton, NANowPlayingVolumeSlider;
@protocol NANowPlayingViewControllerDelegate;

@interface NANowPlayingViewController : UIViewController <NANowPlayingPlaybackControlsLayoutSpecProvider, NANowPlayingTitleViewLayoutSpecProvider, NANowPlayingTitleViewDelegate, NANowPlayingPlaybackControlsDelegate, NANowPlayingBottomControlsDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NANowPlayingArtworkView *artworkView;
@property (retain, nonatomic) NANowPlayingTitleView *titleView;
@property (retain, nonatomic) NANowPlayingTimeControl *timeControl;
@property (retain, nonatomic) NANowPlayingPlaybackControls *playbackControls;
@property (retain, nonatomic) NANowPlayingVolumeSlider *volumeControl;
@property (retain, nonatomic) NANowPlayingBottomControls *bottomControls;
@property (retain, nonatomic) _UIGrabber *grabberView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (weak, nonatomic) id<NANowPlayingViewControllerDelegate> delegate;
@property (readonly, nonatomic) double publisherLogoHeight;
@property (readonly, nonatomic) UIButton *ellipsisButton;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setRate:(double)a0;
- (void)applicationWillEnterForeground;
- (void)setArtwork:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)titleViewTapped:(id)a0;
- (void)dismissButtonTapped:(id)a0;
- (void)seekToPosition:(double)a0;
- (void)setPublisherImage:(id)a0 fallbackName:(id)a1;
- (struct CGSize { double x0; double x1; })artworkSizeForViewWidth:(double)a0;
- (void)artworkTapped:(id)a0;
- (id)initWithBackground:(id)a0;
- (double)nextTrackAndRewindButtonPointSize;
- (id)nowPlayingBottomControlsProvidePlaybackRateMenu:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapNextTrack:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapPause:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapPlay:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapRewind:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapSkipForward:(id)a0;
- (void)nowPlayingTitleViewDidTapEllipsis:(id)a0;
- (double)playPausePointSize;
- (double)publisherLogoBottomMargin;
- (double)publisherLogoHeight;
- (void)setArtwork:(id)a0 animated:(BOOL)a1;
- (void)setCurrentTime:(double)a0 duration:(double)a1 rate:(double)a2 isWaiting:(BOOL)a3 animated:(BOOL)a4;
- (void)setIsPlaying:(BOOL)a0 waiting:(BOOL)a1;
- (void)setNextTrackButtonEnabled:(BOOL)a0;
- (void)setSkipForwardButtonEnabled:(BOOL)a0;
- (double)titleLabelFontSize;

@end
