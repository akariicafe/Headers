@class STStatusBarDataQuietModeEntry, STStatusBarDataIntegerEntry, NSString, STStatusBarDataBatteryEntry, STStatusBarDataThermalEntry, STStatusBarDataImageEntry, STStatusBarDataBluetoothEntry, STStatusBarDataEntry, STStatusBarDataStringEntry, STStatusBarDataActivityEntry, NSSet, STStatusBarDataTetheringEntry, STStatusBarDataLockEntry, STStatusBarDataCellularEntry, STStatusBarDataVoiceControlEntry, STStatusBarDataBoolEntry, STStatusBarDataBackgroundActivityEntry, NSDate, STStatusBarDataWifiEntry, STStatusBarDataLocationEntry;

@interface STStatusBarData : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding>

@property (class, readonly) STStatusBarData *staticDisplayData;
@property (class, readonly) NSSet *entryKeys;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dateFromEntries;
@property (readonly, nonatomic) BOOL dateFromEntriesIncludesDate;
@property (readonly, nonatomic) BOOL dateFromEntriesIncludesTime;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSSet *existingEntryKeys;
@property (readonly, nonatomic) STStatusBarDataStringEntry *timeEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *shortTimeEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *dateEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *personNameEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *deviceNameEntry;
@property (readonly, nonatomic) STStatusBarDataCellularEntry *cellularEntry;
@property (readonly, nonatomic) STStatusBarDataCellularEntry *secondaryCellularEntry;
@property (readonly, nonatomic) STStatusBarDataWifiEntry *wifiEntry;
@property (readonly, nonatomic) STStatusBarDataBatteryEntry *mainBatteryEntry;
@property (readonly, nonatomic) STStatusBarDataBluetoothEntry *bluetoothEntry;
@property (readonly, nonatomic) STStatusBarDataThermalEntry *thermalEntry;
@property (readonly, nonatomic) STStatusBarDataActivityEntry *activityEntry;
@property (readonly, nonatomic) STStatusBarDataTetheringEntry *tetheringEntry;
@property (readonly, nonatomic) STStatusBarDataLocationEntry *locationEntry;
@property (readonly, nonatomic) STStatusBarDataLockEntry *lockEntry;
@property (readonly, nonatomic) STStatusBarDataQuietModeEntry *quietModeEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *electronicTollCollectionEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *radarEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *rotationLockEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *airplaneModeEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *ttyEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *nikeEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *assistantEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *studentEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *vpnEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *liquidDetectionEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *displayWarningEntry;
@property (readonly, nonatomic) STStatusBarDataVoiceControlEntry *voiceControlEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *airPlayEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *carPlayEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *alarmEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *satelliteEntry;
@property (readonly, nonatomic) STStatusBarDataEntry *sensorActivityEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *announceNotificationsEntry;
@property (readonly, nonatomic) STStatusBarDataIntegerEntry *volumeEntry;
@property (readonly, nonatomic) STStatusBarDataBackgroundActivityEntry *backgroundActivityEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *backNavigationEntry;
@property (readonly, nonatomic) STStatusBarDataStringEntry *forwardNavigationEntry;
@property (readonly, nonatomic) STStatusBarDataImageEntry *controlCenterEntry;
@property (readonly, nonatomic) STStatusBarDataBoolEntry *ringerSilenceEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dateFormatterForDate:(id *)a0 time:(id *)a1 shortTime:(id *)a2;

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)mutableCopy;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)immutableCopy;
- (id)dataByApplyingUpdate:(id)a0 keys:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)dataByApplyingOverlay:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)updateFromData:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)entryForKey:(id)a0;
- (id)dataByRemovingEntriesForKeys:(id)a0;
- (id)initWithEntry:(id)a0 forKey:(id)a1;
- (id)dataByReplacingEntry:(id)a0 forKey:(id)a1;
- (void)_internal_setValue:(id)a0 forKey:(id)a1;
- (id)initWithKeysAndEntries:(id)a0;

@end
