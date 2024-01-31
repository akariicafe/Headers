@class UIColor, SUICFlamesView, NSArray, NSString, UILabel, NSMutableArray;

@interface HUWaveformView : UIView <SUICFlamesViewDelegate>

@property (retain, nonatomic) NSMutableArray *audioPowerLevels;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) double minTimeLabelWidth;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSMutableArray *waveformSlices;
@property (retain, nonatomic) SUICFlamesView *flamesView;
@property (readonly, nonatomic) NSArray *powerLevels;
@property (retain, nonatomic) UIColor *waveformColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (float)audioLevelForFlamesView:(id)a0;
- (void)appendPowerLevel:(double)a0;
- (void)clearPowerLevels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 waveformColor:(id)a1 backgroundColor:(id)a2;

@end
