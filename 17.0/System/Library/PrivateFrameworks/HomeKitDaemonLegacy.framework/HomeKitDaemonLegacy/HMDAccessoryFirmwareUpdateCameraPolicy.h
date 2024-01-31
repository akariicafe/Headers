@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy

+ (id)logCategory;

- (void)configure;
- (unsigned long long)hash;
- (void)registerForNotifications;
- (BOOL)evaluate;
- (BOOL)isEqual:(id)a0;
- (void)_checkStreamingStatus;
- (void)_handleStreamStatusCharacteristicChanges;
- (void)_processStreamingStatus:(id)a0;
- (void)handleAccessoryConfiguredNotification:(id)a0;
- (void)handleAccessoryUnconfiguredNotification:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)handleSettingsChange:(id)a0;
- (void)monitorStreamStatus:(BOOL)a0;

@end
