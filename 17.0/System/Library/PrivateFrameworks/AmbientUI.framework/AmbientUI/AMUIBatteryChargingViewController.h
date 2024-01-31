@class NSString, BCBatteryDeviceController, AMUIBatteryChargingView, BSAbsoluteMachTimer;

@interface AMUIBatteryChargingViewController : UIViewController <BCBatteryDeviceObserving>

@property (retain, nonatomic) BCBatteryDeviceController *batteryController;
@property (retain, nonatomic) AMUIBatteryChargingView *chargingView;
@property (retain, nonatomic) BSAbsoluteMachTimer *chargingAnimationDismissalTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateChargingViewLegibility;
- (void)_updateChargingViewIfNecessary;
- (id)_internalBattery;
- (void)_createNewChargingViewIfNecessary;
- (void)performChargingAnimation:(id /* block */)a0;

@end
