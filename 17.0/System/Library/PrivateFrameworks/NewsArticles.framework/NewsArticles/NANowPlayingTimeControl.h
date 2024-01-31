@class NSString;

@interface NANowPlayingTimeControl : UIControl {
    void /* unknown type, empty encoding */ slider;
    void /* unknown type, empty encoding */ elapsedTimeLabel;
    void /* unknown type, empty encoding */ remainingTimeLabel;
    void /* unknown type, empty encoding */ scrubbingDidChangeHandler;
    void /* unknown type, empty encoding */ timeDidChangeHandler;
    void /* unknown type, empty encoding */ _tracking;
    void /* unknown type, empty encoding */ durationSnapshot;
    void /* unknown type, empty encoding */ backgroundObserver;
    void /* unknown type, empty encoding */ foregroundObserver;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ isBackgrounded;
    void /* unknown type, empty encoding */ timeFormatter;
    void /* unknown type, empty encoding */ accessibilityTimeFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_elapsedTimeLabelBaselineConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remainingTimeLabelBaselineConstraint;
}

@property (nonatomic, copy) id /* block */ timeDidChangeHandler;
@property (nonatomic, retain) void /* unknown type, empty encoding */ elapsedTrackColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ remainingTrackColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ trackingTrackColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ timeLabelTextColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ timeLabelTrackingTextColor;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

- (void)dealloc;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityIncrement;
- (BOOL)isHidden;
- (void)updateFonts;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)displayLinkFired:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)setCurrentTime:(double)a0 duration:(double)a1 rate:(double)a2 isWaiting:(BOOL)a3 animated:(BOOL)a4;

@end
