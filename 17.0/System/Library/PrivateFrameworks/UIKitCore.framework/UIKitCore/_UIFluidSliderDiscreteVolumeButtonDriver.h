@class NSString, UIView, _UIPhysicalButtonInteraction;
@protocol _UIFluidSliderDrivable;

@interface _UIFluidSliderDiscreteVolumeButtonDriver : _UIFluidSliderDiscreteButtonDriver <_UIPhysicalButtonInteractionDelegate, _UIFluidSliderVolumeButtonDriving>

@property (nonatomic) unsigned long long _pressedButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIPhysicalButtonInteraction *physicalButtonInteraction;
@property (weak, nonatomic) id<_UIFluidSliderDrivable> drivable;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long trackAxis;
@property (nonatomic) double stretchAmount;
@property (readonly, nonatomic) NSString *name;

- (void)_physicalButtonInteraction:(id)a0 handleAction:(id)a1 withActiveActions:(id)a2;
- (void).cxx_destruct;
- (void)cancel;
- (void)_end;
- (void)_beginWithButton:(unsigned long long)a0;

@end
