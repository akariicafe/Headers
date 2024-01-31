@class NSString, CSBatteryChargingInfo, BCBatteryDeviceController, NSMutableSet, CSBatteryChargingView;

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {
    BCBatteryDeviceController *_batteryController;
    CSBatteryChargingView *_chargingView;
    CSBatteryChargingInfo *_chargingInfo;
    NSMutableSet *_displayedBatteryDevices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)_createNewChargingViewForDoubleBattery:(id)a0;
- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidLoad;
- (long long)presentationStyle;
- (void)aggregateAppearance:(id)a0;
- (double)durationBeforeDismissal;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateChargingViewLegibility;
- (void)viewDidAppear:(BOOL)a0;
- (void)aggregateBehavior:(id)a0;
- (void)_updateChargingViewIfNecessary;
- (id)initWithChargingInfo:(id)a0;
- (BOOL)handleEvent:(id)a0;

@end
