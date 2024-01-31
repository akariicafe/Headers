@class _TtC13BookDataStore13BDSSyncEngine;

@interface BookDataStore.BDSSyncEngine : NSObject <BDSCloudSyncDiagnosticSyncEngineInfoProvider, BDSSyncEngineSaltManagerObserver, BCCloudDataPrivacyDelegate> {
    void /* unknown type, empty encoding */ registeredDataSourceByRecordType;
    void /* unknown type, empty encoding */ maxRecordCountPerBatch;
    void /* unknown type, empty encoding */ recordChangePublisher;
    void /* unknown type, empty encoding */ recordDeletionPublisher;
    void /* unknown type, empty encoding */ accountChangedPublisher;
    void /* unknown type, empty encoding */ endFetchingChangesPublisher;
    void /* unknown type, empty encoding */ updateMetadataPublisher;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ persistFetchCoordinatorGroup;
    void /* unknown type, empty encoding */ BDSAPSDelegatePort;
    void /* unknown type, empty encoding */ syncEngine;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ saltManager;
    void /* unknown type, empty encoding */ saltObservers;
    void /* unknown type, empty encoding */ validCKZones;
    void /* unknown type, empty encoding */ zoneLock;
    void /* unknown type, empty encoding */ waitingPendingModifications;
    void /* unknown type, empty encoding */ zoneResetsInProgress;
    void /* unknown type, empty encoding */ invalidTokenZoneIDs;
}

@property (class, nonatomic, readonly) _TtC13BookDataStore13BDSSyncEngine *shared;

- (id)diagnosticSyncEngineInfo;
- (id)init;
- (void).cxx_destruct;
- (BOOL)establishedSalt;
- (void)reestablishSalt;
- (void)addSaltChangeObserver:(id)a0;
- (id)enabledCloudKitZones;
- (id)recordNameFromRecordType:(id)a0 identifier:(id)a1;
- (void)reestablishSaltIfNeeded;
- (void)resetCloudKitZone:(id)a0;
- (void)saltManager:(id)a0 updatedSaltWithVersion:(id)a1;
- (void)setCloudKitZone:(id)a0 enabled:(BOOL)a1;
- (void)setDatabase:(id)a0 config:(id)a1;

@end
