@class NSString, NSObject;
@protocol DNDSModeConfigurationsStoring, DNDSModeConfigurationManagerDelegate, OS_dispatch_queue, DNDSKeybagStateProviding;

@interface DNDSModeConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider, DNDSModeConfigurationsStoreDelegate, DNDSKeybagStateObserver, DNDSModeConfigurationProviding> {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSModeConfigurationsStoring> _backingStore;
    id<DNDSKeybagStateProviding> _keybag;
}

@property (weak, nonatomic) id<DNDSModeConfigurationManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_inheritFromDefaultModeConfiguration:(id)a0;
- (unsigned long long)exceptionForApplication:(id)a0 thread:(id)a1 forModeIdentifier:(id)a2;
- (id)availableModesFilteringPlaceholders:(BOOL)a0 returningError:(id *)a1;
- (void)_fixupConfigurationsIfNeeded;
- (id)_removedModeConfigurationRecordForModeRecord:(id)a0;
- (void)_notifyChangeOfModeConfigurationFrom:(id)a0 to:(id)a1;
- (id)initWithBackingStore:(id)a0 keybag:(id)a1;
- (BOOL)setModeConfiguration:(id)a0 withError:(id *)a1;
- (id)relevantApplicationIdentifiers;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (BOOL)removeModeConfigurationForModeIdentifier:(id)a0 deletePlaceholder:(BOOL)a1 withError:(id *)a2;
- (BOOL)removeModeConfigurationForModeIdentifier:(id)a0 withError:(id *)a1;
- (unsigned long long)exceptionForContactHandle:(id)a0 forModeIdentifier:(id)a1;
- (id)modeConfigurationsWithError:(id *)a0;
- (id)modeConfigurationForModeIdentifier:(id)a0 withError:(id *)a1;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (unsigned long long)_saveModeConfiguration:(id)a0 writeSecurePartition:(BOOL)a1 error:(id *)a2;
- (id)_sysdiagnoseDataShouldRedact:(BOOL)a0;
- (void).cxx_destruct;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (unsigned long long)_writeModeConfigurationsRecord:(id)a0 writeSecurePartition:(BOOL)a1 error:(id *)a2;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0 thread:(id)a1 forModeIdentifier:(id)a2;
- (id)sysdiagnoseDataIdentifier;
- (id)_readModeConfigurationsReturningError:(id *)a0;
- (void)modeConfigurationStore:(id)a0 didUpdateAvailableModes:(id)a1;
- (id)relevantContacts;
- (id)_prepareModeConfigurationForStorage:(id)a0 withError:(out id *)a1;

@end
