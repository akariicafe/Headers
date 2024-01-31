@class UIViewFloatAnimatableProperty, NSString, NSArray, _UIFluidSliderInteractionConfiguration, UIView, UIPanGestureRecognizer, _UIPhysicalButtonInteraction, _UIFluidSliderFeedbackConductor;
@protocol _UIFluidSliderDirectDriving, _UIFluidSliderDirectDrivingDelegate, _UIFluidSliderVolumeButtonDriving, _UIFluidSliderDriving;

@interface _UIFluidSliderInteraction : NSObject <_UIFluidSliderDrivable, UIInteraction>

@property (copy, nonatomic) id /* block */ _handler;
@property (nonatomic) unsigned long long _axis;
@property (nonatomic) struct CGSize { double width; double height; } _normalizedTrackSize;
@property (retain, nonatomic) NSArray *_drivers;
@property (weak, nonatomic) id<_UIFluidSliderDriving> _activeDriver;
@property (weak, nonatomic) id<_UIFluidSliderDirectDriving> _panDriver;
@property (weak, nonatomic) id<_UIFluidSliderVolumeButtonDriving> _volumeButtonDriver;
@property (retain, nonatomic) _UIFluidSliderFeedbackConductor *_feedbackConductor;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *_animatedValue;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *_trackWidth;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *_trackLength;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *_trackScale;
@property (nonatomic) long long _state;
@property (nonatomic) long long _lastDriverUpdateType;
@property (nonatomic) double _lockedValue;
@property (weak, nonatomic, setter=_setDirectDrivingDelegate:) id<_UIFluidSliderDirectDrivingDelegate> _directDrivingDelegate;
@property (readonly, nonatomic) UIPanGestureRecognizer *_panGestureRecognizer;
@property (readonly, nonatomic) _UIPhysicalButtonInteraction *_volumeButtonInteraction;
@property (nonatomic, setter=_setElasticity:) long long _elasticity;
@property (nonatomic, setter=_setFeedbackEnabled:) BOOL _feedbackEnabled;
@property (nonatomic, setter=_setShouldScaleOnIndirectInput:) BOOL _shouldScaleOnIndirectInput;
@property (nonatomic) double value;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (copy, nonatomic) _UIFluidSliderInteractionConfiguration *configuration;
@property (readonly, nonatomic) double presentationValue;
@property (readonly, nonatomic) double currentTrackLength;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)_rebuildDrivers;
- (void)_animate:(id /* block */)a0 withSpring:(id)a1;
- (void)_cancelDriversExcludingDriver:(id)a0;
- (double)_driftFactor;
- (double)_feedbackEpsilon;
- (void)_issueUpdate;
- (void)_removeAllDrivers;
- (void)_targetNewScale:(double)a0;
- (void)_targetNewValue:(double)a0;
- (void)fluidSliderDriver:(id)a0 didGenerateUpdate:(struct { double x0; double x1; BOOL x2; long long x3; })a1;
- (id)initWithConfiguration:(id)a0 handler:(id /* block */)a1;

@end
