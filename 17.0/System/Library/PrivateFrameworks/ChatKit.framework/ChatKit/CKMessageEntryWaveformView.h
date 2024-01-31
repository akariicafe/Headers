@class UIImageView, UIVisualEffectView, UILabel, NSMutableArray;

@interface CKMessageEntryWaveformView : UIView

@property (nonatomic) unsigned long long maxPowerLevelsCount;
@property (retain, nonatomic) NSMutableArray *powerLevels;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *balloonImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *waveformImageView;
@property (nonatomic) double minTimeLabelWidth;
@property (nonatomic) double duration;

+ (id)waveformCurveTransform;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)appendPowerLevel:(double)a0;
- (void)clearPowerLevels;
- (void)updateWaveform;

@end
