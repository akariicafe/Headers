@class UIView, MRUTimeControls, CADisplayLink, NSString, MRUSlider, MSVTimer, CAGradientLayer, AVTimeFormatter, UILabel, MRUVisualStylingProvider;

@interface MRUNowPlayingTimeControlsView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) MRUSlider *slider;
@property (retain, nonatomic) UILabel *elapsedTimeLabel;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) UILabel *liveLabel;
@property (retain, nonatomic) UIView *liveBackground;
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) AVTimeFormatter *elapsedTimeFormatter;
@property (retain, nonatomic) AVTimeFormatter *remainingTimeFormatter;
@property (nonatomic) BOOL debugPreviousDisplayLinkPaused;
@property (retain, nonatomic) MSVTimer *updateElapsedTimeThrottleTimer;
@property (retain, nonatomic) MRUTimeControls *timeControls;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) BOOL leftAlignLive;
@property (nonatomic) double sliderHeight;
@property (nonatomic) double sliderExpansionFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sliderValueChanged:(id)a0;
- (void)sliderTouchCancel:(id)a0;
- (void)updateElapsedTime;
- (void)updateElapsedTimeWithThrottle;
- (void)updateContentSizeCategory;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)accessibilityTotalDuration;
- (void)layoutSubviewsLive;
- (void)updateDisplayLink;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutTimeLabels;
- (void)updateVisualStyling;
- (void)updateElapsedTimeOnDisplayLinkTick:(id)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (double)accessibilityElapsedDuration;
- (void)updateVisibility;
- (void)updateElapsedTimeWithElapsedTime:(double)a0;
- (long long)labelStyle;
- (void)setTimeControls:(id)a0 forPresentationInterval:(id)a1;
- (void)updateDisplayLinkPaused;
- (void).cxx_destruct;
- (void)updateBackgroundMask;
- (void)layoutSubviews;
- (void)sliderTouchDown:(id)a0;
- (double)timeLabelsAlpha;
- (void)updateElapsedTimeForDate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
