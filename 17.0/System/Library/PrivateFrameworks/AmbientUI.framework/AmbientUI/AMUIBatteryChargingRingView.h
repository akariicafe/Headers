@class UIView, BCBatteryDevice, UILabel, AMUIPowerStatus, CALayer, PLPlatterView, AMUIRingLayer, AMUIBatteryChargingUIConfiguration;

@interface AMUIBatteryChargingRingView : AMUIBatteryChargingView

@property (retain, nonatomic) AMUIBatteryChargingUIConfiguration *configuration;
@property (retain, nonatomic) CALayer *chargingBoltGlyph;
@property (retain, nonatomic) UILabel *chargePercentLabel;
@property (retain, nonatomic) AMUIRingLayer *batteryLevelRing;
@property (retain, nonatomic) AMUIRingLayer *trackFillRingLayer;
@property (retain, nonatomic) CALayer *magSafeLayer;
@property (retain, nonatomic) CALayer *chargeRingLayer;
@property (retain, nonatomic) CALayer *ringContainerLayer;
@property (retain, nonatomic) CALayer *ringLayer;
@property (retain, nonatomic) UIView *chargingContainerView;
@property (readonly, nonatomic) PLPlatterView *platterView;
@property (retain, nonatomic) PLPlatterView *grabberView;
@property (retain, nonatomic) BCBatteryDevice *internalBattery;
@property (retain, nonatomic) AMUIPowerStatus *internalStatus;

- (BOOL)_isReduceMotionEnabled;
- (void)_removeAllAnimations;
- (void)setLegibilitySettings:(id)a0;
- (BOOL)_isDarkerSystemColorsEnabled;
- (void)_removeAllAnimations:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_powerStatusForBattery:(id)a0;
- (BOOL)_isRTL;
- (id)_ringLayerForRingConfiguration:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)_trackRingForRingConfiguration:(id)a0 withBlendMode:(id)a1;
- (struct CGPath { } *)_pathForRingConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)_layerHasGaussianBlurFilter:(id)a0;
- (void)updateWithBattery:(id)a0;
- (void)_addGaussianBlurToLayerIfNeeded:(id)a0 inputRadius:(double)a1;
- (struct CGPoint { double x0; double x1; })_initialRingCenterPosition;
- (struct CGPoint { double x0; double x1; })_ringOrigin;
- (void)_runBatteryLevelAnimation;
- (id)_springAnimationForKeyPath:(id)a0 duration:(double)a1 delay:(double)a2 fromValue:(id)a3 toValue:(id)a4 fillMode:(id)a5 stiffness:(double)a6 mass:(double)a7 damping:(double)a8;
- (void)_updateForPowerStatus:(id)a0;
- (void)presentChargingViewWithCompletionHandler:(id /* block */)a0;

@end
