@class _UIBackdropView, UIImageView, CSBatteryFillView, UIView, SBUILegibilityLabel;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    CSBatteryFillView *_internalBatteryFillView;
    CSBatteryFillView *_externalBatteryFillView;
    SBUILegibilityLabel *_internalChargePercentLabel;
    SBUILegibilityLabel *_externalChargePercentLabel;
    SBUILegibilityLabel *_internalChargingNameLabel;
    SBUILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}

- (BOOL)batteryVisible;
- (void)setLegibilitySettings:(id)a0;
- (void)setBatteryVisible:(BOOL)a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (double)_deviceChargeBaselineOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_spaceBetweenBatteryImages;
- (double)_batteryTopPadding;
- (long long)batteryCount;
- (double)desiredVisibilityDuration;
- (double)_chargingBoltTopOffset;
- (void).cxx_destruct;
- (id)_chargePercentFont;
- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (void)layoutSubviews;
- (void)setSecondaryBatteryText:(id)a0 forBattery:(id)a1;
- (double)_deviceNameBaselineOffset;

@end
