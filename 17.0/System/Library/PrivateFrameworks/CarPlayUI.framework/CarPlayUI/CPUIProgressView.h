@class UIColor, _CPUILiveTrackView, CADisplayLink, NSArray, UILabel, CPUIProgressBarView;

@interface CPUIProgressView : UIView {
    UILabel *_timeLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_liveLabel;
    CPUIProgressBarView *_progressBarView;
    _CPUILiveTrackView *_liveTrackView;
    CADisplayLink *_displayLink;
    double _lastTargetTimestamp;
    NSArray *_constraints;
    double _progressBarViewHeight;
    double _progressLabelHeight;
    unsigned long long _labelStyle;
}

@property (nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } durationSnapshot;
@property (nonatomic) BOOL showsProgressLabels;
@property (retain, nonatomic) UIColor *barColor;
@property (retain, nonatomic) UIColor *trackColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_displayLinkTick:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_updateLabelsForElapsedTime:(double)a0 duration:(double)a1;
- (void)_updateProgressForElapsedTime:(double)a0 duration:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 progressBarHeight:(double)a1 labelHeight:(double)a2 labelStyle:(unsigned long long)a3;
- (void)pauseDisplayLinkIfNeeded;
- (void)runUntilNextDisplayLinkEvent;
- (void)updateLocalizedDurationString:(id)a0;

@end
