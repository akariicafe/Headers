@class _TtC7ChatKit20AudioMessageWaveform;

@interface ChatKit.CKAudioMessageBalloonView : CKColoredBalloonView <CKBalloonVibrancy, CKAudioBalloonView> {
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ isFromMe;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speedLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transcriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_waveformView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playPauseButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_horizontalStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verticalStackView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ chatItem;
@property (nonatomic, readonly) BOOL isAudioMessage;
@property (nonatomic, retain) void /* unknown type, empty encoding */ mediaObject;
@property (nonatomic, retain) _TtC7ChatKit20AudioMessageWaveform *waveformView;
@property (nonatomic) void /* unknown type, empty encoding */ playbackSpeed;
@property (nonatomic) void /* unknown type, empty encoding */ waveformContentMode;
@property (nonatomic) void /* unknown type, empty encoding */ time;
@property (nonatomic) void /* unknown type, empty encoding */ initialTimeBeforePan;
@property (nonatomic) void /* unknown type, empty encoding */ duration;
@property (nonatomic) void /* unknown type, empty encoding */ playing;
@property (nonatomic) void /* unknown type, empty encoding */ played;
@property (nonatomic) void /* unknown type, empty encoding */ serviceIsSMS;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)tapGestureRecognized:(id)a0;
- (void)addOverlaySubview:(id)a0;
- (void)configureForComposition:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)configureForMessagePart:(id)a0;
- (BOOL)isPlayed;
- (id)nonVibrantSubViews;
- (id)playPauseButtonColorFor:(char)a0;
- (id)playbackSpeedMenu;
- (void)setWaveform:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)speedLabelColorFor:(char)a0;
- (id)timeLabelColorFor:(char)a0;
- (id)transcriptionLabelColorFor:(char)a0;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)a0;
- (id)waveformColorWithIsFromMe:(BOOL)a0 isPlayed:(BOOL)a1;
- (void)waveformProgressViewPanning:(id)a0;

@end
