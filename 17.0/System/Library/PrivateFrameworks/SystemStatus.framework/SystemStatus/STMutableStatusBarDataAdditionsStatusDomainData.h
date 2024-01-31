@class STStatusBarDataTetheringEntry, STStatusBarDataQuietModeEntry, STStatusBarDataThermalEntry, STStatusBarDataBoolEntry, STStatusBarDataActivityEntry, STStatusBarDataStringEntry, STStatusBarDataBluetoothEntry, NSString, STMutableDictionaryData, STStatusBarDataLockEntry;

@interface STMutableStatusBarDataAdditionsStatusDomainData : STStatusBarDataAdditionsStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableDictionaryData *entryDictionaryData;
@property (copy, nonatomic) STStatusBarDataStringEntry *personNameEntry;
@property (copy, nonatomic) STStatusBarDataBluetoothEntry *bluetoothEntry;
@property (copy, nonatomic) STStatusBarDataThermalEntry *thermalEntry;
@property (copy, nonatomic) STStatusBarDataActivityEntry *activityEntry;
@property (copy, nonatomic) STStatusBarDataTetheringEntry *tetheringEntry;
@property (copy, nonatomic) STStatusBarDataLockEntry *lockEntry;
@property (copy, nonatomic) STStatusBarDataQuietModeEntry *focusModeEntry;
@property (copy, nonatomic) STStatusBarDataBoolEntry *ringerSilenceEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (void)setLockEntry:(id)a0;
- (void)setBluetoothEntry:(id)a0;
- (void)setPersonNameEntry:(id)a0;
- (void)setTetheringEntry:(id)a0;
- (void)setActivityEntry:(id)a0;
- (void)setThermalEntry:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntryDictionaryData:(id)a0;
- (void)setFocusModeEntry:(id)a0;
- (void)setRingerSilenceEntry:(id)a0;

@end
