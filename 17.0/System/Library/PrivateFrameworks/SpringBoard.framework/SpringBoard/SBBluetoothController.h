@class NSMutableArray;

@interface SBBluetoothController : NSObject {
    NSMutableArray *_devices;
    BOOL _tetheringConnected;
}

+ (id)sharedInstance;

- (BOOL)tetheringConnected;
- (id)firstBTDeviceToReportBatteryLevel;
- (int)batteryLevel;
- (void)updateTetheringConnected;
- (void)dealloc;
- (void)startWatchingForDevices;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)updateBattery;
- (void)batteryChanged:(id)a0;
- (void)stopWatchingForDevices;
- (BOOL)canReportBatteryLevel;
- (void)noteDevicesChanged;
- (void).cxx_destruct;
- (void)iapDeviceChanged:(id)a0;
- (id)deviceForAudioRoute:(id)a0;
- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (void)connectionChanged:(id)a0;
- (void)addDeviceNotification:(id)a0;
- (void)removeDeviceNotification:(id)a0;

@end
