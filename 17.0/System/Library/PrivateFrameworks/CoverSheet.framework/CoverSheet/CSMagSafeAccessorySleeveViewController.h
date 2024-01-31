@class BrightnessSystemClient, CSMagSafeAccessorySleeveView, SBFLockScreenDateViewController, BCBatteryDeviceController, NSString, _UILegibilitySettings;
@protocol SBFDateProviding;

@interface CSMagSafeAccessorySleeveViewController : CSMagSafeAccessoryViewController <BCBatteryDeviceObserving>

@property (retain, nonatomic) SBFLockScreenDateViewController *dateViewController;
@property (retain, nonatomic) SBFLockScreenDateViewController *secondaryDateViewController;
@property (retain, nonatomic) BCBatteryDeviceController *batteryDeviceController;
@property (retain, nonatomic) CSMagSafeAccessorySleeveView *sleeveView;
@property (nonatomic) BOOL chargingAnimationVisible;
@property (retain, nonatomic) BrightnessSystemClient *brightnessClient;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidLoad;
- (id)accessoryView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (BOOL)isStatic;
- (id)initWithAccessory:(id)a0;
- (id)_legibilitySettingsForAccessory:(id)a0;
- (void)_removeOverrideFloor;
- (void)_updateOverrideFloor;
- (double)animationDurationBeforeDismissal;
- (double)chargingAnimationDuration;
- (BOOL)hasChargingAnimation;
- (BOOL)showingChargingAnimation;
- (void)transitionChargingViewVisible:(BOOL)a0 chargingInfo:(id)a1;
- (void)updateFont:(id)a0 textColor:(id)a1 vibrancyConfiguration:(id)a2 numberingSystem:(id)a3;
- (void)updateViewWithBatteryCharging:(BOOL)a0;

@end
