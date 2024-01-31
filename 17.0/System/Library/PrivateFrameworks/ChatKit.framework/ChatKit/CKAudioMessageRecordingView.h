@class NSArray;

@interface CKAudioMessageRecordingView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ minimumWaveformWidth;
    void /* unknown type, empty encoding */ stateChangeAnimationDuration;
    void /* unknown type, empty encoding */ stateChangeSpringDamping;
    void /* unknown type, empty encoding */ lastIntensityTime;
    void /* unknown type, empty encoding */ recordingStartTime;
    void /* unknown type, empty encoding */ isScrubbing;
    void /* unknown type, empty encoding */ scrubStartLocation;
    void /* unknown type, empty encoding */ scrubStartTime;
    void /* unknown type, empty encoding */ scrubOffset;
    void /* unknown type, empty encoding */ scrubScale;
    void /* unknown type, empty encoding */ durationAppendButton;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ waveformView;
    void /* unknown type, empty encoding */ displayLink;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ state;
@property (nonatomic) void /* unknown type, empty encoding */ cornerRadius;
@property (nonatomic) void /* unknown type, empty encoding */ isStopButtonHighlighted;
@property (nonatomic) void /* unknown type, empty encoding */ playbackDuration;
@property (nonatomic) void /* unknown type, empty encoding */ playbackCurrentTime;
@property (nonatomic, readonly) NSArray *intensities;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ backgroundView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ service;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ stopButton;
@property (nonatomic, retain) void /* unknown type, empty encoding */ sendButton;

+ (id)buttonFor:(long long)a0 with:(id)a1;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)closeFrom:(id)a0;
- (void)playFrom:(id)a0;
- (void)resumeFrom:(id)a0;
- (void)scrubFrom:(id)a0;
- (void)sendFrom:(id)a0;
- (void)stopFrom:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidateDisplayLink;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupDisplayLink;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)addToWaveformWithIntensity:(double)a0;
- (void)displayLinkFiredFrom:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 service:(id)a1;
- (void)setWithIntensities:(id)a0;

@end
