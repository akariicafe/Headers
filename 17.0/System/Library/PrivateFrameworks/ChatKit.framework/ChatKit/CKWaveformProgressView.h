@class UIImage, IMManualUpdater;

@interface CKWaveformProgressView : CKBalloonImageView

@property (retain, nonatomic) IMManualUpdater *displayUpdater;
@property (nonatomic) char color;
@property (nonatomic) double duration;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) UIImage *waveform;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isPlayed) BOOL played;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)prepareForDisplayIfNeeded;
- (void)setNeedsPrepareForDisplay;

@end
