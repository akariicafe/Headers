@class UIColor, SUICAudioLevelSmoother, CADisplayLink, NSMutableArray;
@protocol SUICAudioPowerLevelDataSource;

@interface SUICDictationWaveView : UIView {
    UIColor *_pipColor;
    float _linearPowerLevel;
    float _runningVolumeSum;
    float _framesPerSecond;
    id<SUICAudioPowerLevelDataSource> _audioPowerLevelDataSource;
    CADisplayLink *_displayLink;
    float _numberOfFrames;
    float _initialOffset;
    SUICAudioLevelSmoother *_smoother;
    NSMutableArray *_pipLayers;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedFrame;
}

@property (nonatomic) float powerLevel;

- (void)_tick:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animateIn;
- (void)_updatePipColor;
- (void)_addNewPips;
- (void)_animateInPipsBetweenLeftIndex:(unsigned long long)a0 rightIndex:(unsigned long long)a1;
- (double)_heightForIntroAnimationPips;
- (float)_heightMultiplierForPipIndex:(unsigned long long)a0;
- (double)_intervalForEachPipAnimation;
- (void)_introAnimationTick;
- (double)_leftMargin;
- (double)_maximumPipHeight;
- (double)_minimumPipHeight;
- (float)_noiseForPipIndex:(unsigned long long)a0;
- (unsigned long long)_numberOfPips;
- (double)_originXForPipAtIndex:(unsigned long long)a0;
- (double)_pipWidth;
- (void)_removeAllPips;
- (void)_resetPips;
- (void)_showPipsWithoutIntroAnimation;
- (float)_sinusoidalTaperForPipIndex:(unsigned long long)a0;
- (float)_smoothStepTaperForPipIndex:(unsigned long long)a0;
- (float)_smoothStepWithLowerBound:(float)a0 upperBound:(float)a1 innerValue:(float)a2;
- (void)_startIntroAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_startingFrameForPipAtIndex:(unsigned long long)a0;
- (void)_updatePipHeightAtIndex:(unsigned long long)a0 withHeight:(double)a1;
- (void)_updatePipHeights;
- (void)setAudioPowerLevelDataSource:(id)a0;
- (void)setPipColor:(id)a0;

@end
