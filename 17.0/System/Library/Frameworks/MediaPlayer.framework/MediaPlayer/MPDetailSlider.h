@class AVTimeFormatter, NSString, MPDetailScrubController, NSTimer, UILabel, UIView, UIImageView;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate> {
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    MPDetailScrubController *_scrubController;
    BOOL _autoscrubActive;
    NSTimer *_autoscrubTimer;
    BOOL _canCommit;
    double _currentTime;
    UIView *_downloadingTrackOverlay;
    UIImageView *_glowDetailScrubImageView;
    BOOL _isTracking;
    double _maxTrackWidth;
    struct CGPoint { double x; double y; } _previousLocationInView;
    long long _style;
    UIImageView *_thumbImageView;
    double _trackInset;
    AVTimeFormatter *_formatter;
}

@property (weak, nonatomic) id<MPDetailSliderDelegate> delegate;
@property (nonatomic) BOOL allowsScrubbing;
@property (nonatomic) BOOL allowsDetailScrubbing;
@property (nonatomic) double detailScrubbingVerticalRange;
@property (nonatomic) double duration;
@property (nonatomic) double availableDuration;
@property (readonly, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;
@property (nonatomic) long long timeLabelStyle;
@property (nonatomic) double minTimeLabelWidth;
@property (readonly, nonatomic) NSString *localizedScrubSpeedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)labelClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)viewForLastBaselineLayout;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)dealloc;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createThumbView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentThumbImage;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setValue:(float)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_thumbHitEdgeInsets;
- (void)_autoscrubTick:(id)a0;
- (void)_resetScrubInfo;
- (id)_colorSliceImageWithColor:(id)a0 height:(double)a1;
- (void)_commitValue;
- (id)_modernThumbImageWithColor:(id)a0 height:(double)a1 includeShadow:(BOOL)a2;
- (void)_setValueWhileTracking:(float)a0 duration:(double)a1;
- (void)_setupControlsForStyle;
- (id)_stringForCurrentTime:(double)a0;
- (id)_stringForInverseCurrentTime:(double)a0;
- (id)_stringForTime:(double)a0 elapsed:(BOOL)a1;
- (void)_updateForAvailableDuraton;
- (void)_updateTimeDisplayForTime:(double)a0;
- (void)_updateTimeDisplayForTime:(double)a0 force:(BOOL)a1;
- (void)_updateTrackInset;
- (void)cancelTracking;
- (void)detailScrubController:(id)a0 didChangeScrubSpeed:(long long)a1;
- (void)detailScrubController:(id)a0 didChangeValue:(float)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 maxTrackWidth:(double)a2;
- (void)setValue:(float)a0 duration:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbHitRect;
- (id)timeLabelFontForStyle:(long long)a0;
- (id)timeLabelTextColorForStyle:(long long)a0;

@end
