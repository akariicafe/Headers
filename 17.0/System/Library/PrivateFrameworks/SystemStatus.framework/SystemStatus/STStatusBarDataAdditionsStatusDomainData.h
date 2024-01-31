@class STStatusBarDataTetheringEntry, STStatusBarDataBoolEntry, STStatusBarDataThermalEntry, NSString, STStatusBarDataActivityEntry, STStatusBarDataStringEntry, STDictionaryData, STStatusBarDataBluetoothEntry, STStatusBarDataQuietModeEntry, STStatusBarDataLockEntry;

@interface STStatusBarDataAdditionsStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STDictionaryData *entryDictionaryData;
@property (readonly, copy, nonatomic) STStatusBarDataStringEntry *personNameEntry;
@property (readonly, copy, nonatomic) STStatusBarDataBluetoothEntry *bluetoothEntry;
@property (readonly, copy, nonatomic) STStatusBarDataThermalEntry *thermalEntry;
@property (readonly, copy, nonatomic) STStatusBarDataActivityEntry *activityEntry;
@property (readonly, copy, nonatomic) STStatusBarDataTetheringEntry *tetheringEntry;
@property (readonly, copy, nonatomic) STStatusBarDataLockEntry *lockEntry;
@property (readonly, copy, nonatomic) STStatusBarDataQuietModeEntry *focusModeEntry;
@property (readonly, copy, nonatomic) STStatusBarDataBoolEntry *ringerSilenceEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)diffFromData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithEntryDictionaryData:(id)a0;

@end
