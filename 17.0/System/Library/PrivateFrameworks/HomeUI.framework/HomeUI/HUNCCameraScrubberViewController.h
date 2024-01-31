@class UIView, NSDate, CADisplayLink, NSString, UIButton, HFCameraPlaybackEngine, UIProgressView, HMCameraClip;

@interface HUNCCameraScrubberViewController : UIViewController <HFCameraPlaybackEngineObserver, HUCameraPlayerScrubbing>

@property (retain, nonatomic) UIButton *playPauseButton;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HMCameraClip *currentClip;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isScrubbing;
@property (retain, nonatomic) NSDate *clipStartDate;
@property (retain, nonatomic) UIProgressView *progressSlider;
@property (retain, nonatomic) UIView *panTrackingView;
@property (retain, nonatomic) UIView *playPauseBackgroundView;
@property (readonly, nonatomic) UIButton *liveButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentScrubberResolution;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)playbackEngine:(id)a0 didUpdateEvents:(id)a1;
- (void)viewDidLoad;
- (void)toggleLive;
- (void)viewWillDisappear:(BOOL)a0;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)playbackEngine:(id)a0 didUpdateTimeControlStatus:(unsigned long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateSliderPosition;
- (double)_playbackLength;
- (void)_updateScrubberDisplayLinkState;
- (void)_createAndStartDisplayLink;
- (void)_displayLinkUpdated:(id)a0;
- (void)_loopPlaybackIfNeeded;
- (void)_removeDisplayLink;
- (void)_seekToCurrentScrubberValue;
- (id)initWithPlaybackEngine:(id)a0 currentClip:(id)a1 startDate:(id)a2;
- (void)playPauseButtonPressed:(id)a0;
- (void)showClipScrubber;
- (void)userDidPan:(id)a0;

@end
