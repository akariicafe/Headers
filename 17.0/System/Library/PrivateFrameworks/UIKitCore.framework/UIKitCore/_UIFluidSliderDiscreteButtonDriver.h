@class NSString, BSAbsoluteMachTimer, UIView;
@protocol _UIFluidSliderDrivable;

@interface _UIFluidSliderDiscreteButtonDriver : NSObject <_UIFluidSliderDriving> {
    id<_UIFluidSliderDrivable> _drivable;
    double _stretchAmount;
    unsigned long long _trackAxis;
}

@property (retain, nonatomic) BSAbsoluteMachTimer *_repeatTimer;
@property (retain, nonatomic) BSAbsoluteMachTimer *_releaseTimer;
@property (nonatomic) unsigned long long _pressedButton;
@property (nonatomic) BOOL _isRepeating;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)cancel;
- (void)_incrementValue;
- (void)pressUp;
- (double)_overflowAmount;
- (void)_clearReleaseTimer;
- (void)_clearRepeatTimer;
- (void)_handleButton:(unsigned long long)a0 state:(unsigned long long)a1;
- (void)_issueUpdateWithValue:(double)a0;
- (double)_minimumPressDuration;
- (void)_releaseCurrentlyPressedButton;
- (double)_repeatCadence;
- (double)_repeatDelay;
- (double)_trackLength;
- (id)drivable;
- (void)pressDown;
- (void)releaseDown;
- (void)releaseUp;
- (void)setDrivable:(id)a0;
- (void)setStretchAmount:(double)a0;
- (void)setTrackAxis:(unsigned long long)a0;
- (double)stretchAmount;
- (unsigned long long)trackAxis;

@end
