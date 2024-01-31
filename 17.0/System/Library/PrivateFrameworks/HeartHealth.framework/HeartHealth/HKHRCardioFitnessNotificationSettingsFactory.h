@class HKHRCardioFitnessNotificationStatus;

@interface HKHRCardioFitnessNotificationSettingsFactory : NSObject

@property (retain, nonatomic) HKHRCardioFitnessNotificationStatus *notificationStatus;

- (void).cxx_destruct;
- (id)_ageGatedBridgeSettingFooter;
- (id)_ageGatedWatchSettingFooter;
- (id)_ageNotSetBridgeSettingFooter;
- (id)_ageNotSetWatchSettingFooter;
- (id)_genericBridgeSettingFooter;
- (id)_genericWatchSettingFooter;
- (BOOL)_hasUnavailabilitySetForReasons:(long long)a0;
- (id)_notificationsAvailableBridgeSettingFooter;
- (id)_pairedDeviceRegionGatedFooter;
- (id)bridgeSettings;
- (id)initWithNotificationStatus:(id)a0;
- (id)watchSettings;

@end
