@class _UIStatusBarDataVoiceControlEntry, _UIStatusBarDataCellularEntry, _UIStatusBarDataLocationEntry, _UIStatusBarDataLockEntry, _UIStatusBarDataWifiEntry, _UIStatusBarDataBluetoothEntry, _UIStatusBarDataBoolEntry, _UIStatusBarDataEntry, NSSet, _UIStatusBarDataBackgroundActivityEntry, _UIStatusBarDataBatteryEntry, _UIStatusBarDataStringEntry, _UIStatusBarDataIntegerEntry, _UIStatusBarDataQuietModeEntry, _UIStatusBarDataThermalEntry, _UIStatusBarDataTetheringEntry, _UIStatusBarDataActivityEntry;

@interface _UIStatusBarData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) _UIStatusBarData *staticDisplayData;
@property (class, readonly) NSSet *entryKeys;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSSet *existingEntryKeys;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *timeEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *shortTimeEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *dateEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *personNameEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *deviceNameEntry;
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *cellularEntry;
@property (copy, nonatomic) _UIStatusBarDataCellularEntry *secondaryCellularEntry;
@property (copy, nonatomic) _UIStatusBarDataWifiEntry *wifiEntry;
@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *mainBatteryEntry;
@property (copy, nonatomic) _UIStatusBarDataBluetoothEntry *bluetoothEntry;
@property (copy, nonatomic) _UIStatusBarDataThermalEntry *thermalEntry;
@property (copy, nonatomic) _UIStatusBarDataActivityEntry *activityEntry;
@property (copy, nonatomic) _UIStatusBarDataTetheringEntry *tetheringEntry;
@property (copy, nonatomic) _UIStatusBarDataLocationEntry *locationEntry;
@property (copy, nonatomic) _UIStatusBarDataLockEntry *lockEntry;
@property (copy, nonatomic) _UIStatusBarDataQuietModeEntry *quietModeEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *electronicTollCollectionEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *radarEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *rotationLockEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *airplaneModeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *ttyEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *nikeEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *assistantEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *studentEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *vpnEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *liquidDetectionEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *displayWarningEntry;
@property (copy, nonatomic) _UIStatusBarDataVoiceControlEntry *voiceControlEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *airPlayEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *carPlayEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *alarmEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *satelliteEntry;
@property (copy, nonatomic) _UIStatusBarDataEntry *sensorActivityEntry;
@property (copy, nonatomic) _UIStatusBarDataBoolEntry *announceNotificationsEntry;
@property (copy, nonatomic) _UIStatusBarDataIntegerEntry *volumeEntry;
@property (copy, nonatomic) _UIStatusBarDataBackgroundActivityEntry *backgroundActivityEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *backNavigationEntry;
@property (copy, nonatomic) _UIStatusBarDataStringEntry *forwardNavigationEntry;

- (unsigned long long)hash;
- (void)applyUpdate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)makeUpdateFromData:(id)a0;
- (id)description;
- (id)dataByApplyingUpdate:(id)a0 keys:(id)a1;
- (id)dataByApplyingOverlay:(id)a0;
- (void).cxx_destruct;
- (void)_applyUpdate:(id)a0 keys:(id)a1;
- (id)updateFromData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
