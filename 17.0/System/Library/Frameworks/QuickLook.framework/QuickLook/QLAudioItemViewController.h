@class UIView, NSString, QLVideoScrubberView, UIImageView, QLWaveformScrubberViewProvider, NSLayoutConstraint, QLOverlayPlayButton, UIScrollView;

@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate> {
    UIImageView *_backgroundIconImageView;
    QLOverlayPlayButton *_playButton;
    UIScrollView *_scrubberContainerScrollView;
    QLVideoScrubberView *_scrubber;
    QLWaveformScrubberViewProvider *_scrubberViewProvider;
    BOOL _previewIsVisisble;
}

@property (retain) NSLayoutConstraint *topScrubber;
@property (retain) UIView *scrubberContainer;
@property BOOL scrubbing;
@property double scrubberVerticalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setupConstraints;
- (id)accessoryView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_tapRecognized:(id)a0;
- (BOOL)canEnterFullScreen;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)setPlayControlsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)addScrubberWithDeferral;
- (void)didChangePlayingStatus;
- (id)iconImageWithConfiguration:(id)a0;
- (id)imageAccessibilityIdentifier;
- (double)maximumWaveformDimension;
- (id)timeLabelScrollView;
- (BOOL)usesScrubber;
- (double)waveformImageDimension;

@end
