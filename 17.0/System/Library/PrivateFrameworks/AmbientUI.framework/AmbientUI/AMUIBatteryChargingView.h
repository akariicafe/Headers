@class _UILegibilitySettings;

@interface AMUIBatteryChargingView : UIView

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (id)batteryChargingRingViewWithConfiguration:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithBattery:(id)a0;
- (void)presentChargingViewWithCompletionHandler:(id /* block */)a0;

@end
