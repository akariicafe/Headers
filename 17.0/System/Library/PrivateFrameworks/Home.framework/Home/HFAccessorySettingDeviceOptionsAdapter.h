@class HFAccessorySettingDeviceOptionsAdapterUtility, NSString, NAFuture;

@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating>

@property (nonatomic) BOOL isAccessoryReachableOverRapport;
@property (retain, nonatomic) NAFuture *inProgressSysdiagnoseCollectionFuture;
@property (retain, nonatomic) HFAccessorySettingDeviceOptionsAdapterUtility *adapterUtility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_home;
- (void)accessoryReachableOverRapport:(BOOL)a0;
- (id)airDropSysdiagnose:(id)a0;
- (id)handleButtonPressForEntity:(id)a0;
- (id)inProgressButtonPressFutureForEntity:(id)a0;
- (id)inProgressButtonPressFutureForKeyPath:(id)a0;
- (id)restartAccessories;
- (id)restartAccessory;
- (BOOL)shouldShowSettingsEntity:(id)a0;
- (BOOL)supportButtonPressForEntity:(id)a0;
- (id)extractWiFiInfo;
- (id)_handleButtonPress;
- (id)identifyAccessory;
- (id)initWithHomeKitSettingsVendor:(id)a0 mode:(unsigned long long)a1;

@end
