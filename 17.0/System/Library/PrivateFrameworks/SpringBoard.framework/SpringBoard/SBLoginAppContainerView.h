@class _UILegibilitySettings, SBLoginAppContainerOverlayWrapperView, NSMutableSet, UIView, CSBatteryChargingView, SBLockScreenDeviceInformationTextView;

@interface SBLoginAppContainerView : UIView {
    NSMutableSet *_contentHiddenRequesters;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CSBatteryChargingView *batteryChargingView;
@property (retain, nonatomic) SBLoginAppContainerOverlayWrapperView *thermalWarningView;
@property (retain, nonatomic) SBLockScreenDeviceInformationTextView *deviceInformationTextView;
@property (retain, nonatomic) UIView *pluginView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_showOrHidePluginViewAppropriately;
- (void)setContentHidden:(BOOL)a0 forRequester:(id)a1;

@end
