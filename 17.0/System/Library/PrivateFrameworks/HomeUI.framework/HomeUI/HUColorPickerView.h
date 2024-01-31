@class HUColorWheelView, NSString, HUQuickControlColorViewProfile, HUQuickControlMagnifierView, UILongPressGestureRecognizer;
@protocol HUColorWheelSpace, HUQuickControlColorPickerViewInteractionDelegate;

@interface HUColorPickerView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView>

@property (nonatomic) unsigned long long mirroringAxisBias;
@property (readonly, nonatomic) id<HUColorWheelSpace> colorWheelSpace;
@property (retain, nonatomic) HUColorWheelView *colorWheelView;
@property (retain, nonatomic) HUQuickControlMagnifierView *magnifierView;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) double touchDownTimestamp;
@property (nonatomic) struct CGPoint { double x0; double x1; } magnifierLocation;
@property (nonatomic) struct { double angle; double radius; } selectedColorCoordinate;
@property (nonatomic) struct { double r; double g; double b; double temperature; } selectedColor;
@property (nonatomic) unsigned long long colorPickerMode;
@property (nonatomic) double wheelHoleRadius;
@property (nonatomic) double magnifierLength;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile;
@property (weak, nonatomic) id<HUQuickControlColorPickerViewInteractionDelegate> interactionDelegate;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleGesture:(id)a0;
- (void)_applyMirroringAxisBiasToColorWheelSpaceIfNecessary;
- (id)_colorWheelSpaceForMode:(unsigned long long)a0;
- (void)_updateDerivedSelectedColorCoordinate;
- (void)_updateMagnifierPosition;
- (void)_updateMagnifierTransformForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateMagnifierView;
- (void)_updateMirroringAxisBiasIfNecessary;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
