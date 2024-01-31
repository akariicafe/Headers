@class NSDate, NSString, GEOResourceManifestManager, GEOObserverHashTable, GEOPBOfflineDataConfiguration, NSDictionary, GEOPBOfflineTileMetadata, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface GEOOfflineDataConfiguration : NSObject <GEOResourceManifestTileGroupObserver, GEOPListStateCapturing> {
    geo_isolater *_configurationIsolation;
    GEOResourceManifestManager *_manifestManager;
    GEOPBOfflineDataConfiguration *_configuration;
    NSDictionary *_latestAvailableVersions;
    NSDictionary *_activeVersions;
    NSObject<OS_dispatch_queue> *_observerQueue;
    GEOObserverHashTable *_observers;
    id _regulatoryRegionOverrideConfigObserver;
    id _simulateUpdateAvailableConfigObserver;
    unsigned long long _stateCaptureHandle;
}

@property (class, readonly, nonatomic) GEOOfflineDataConfiguration *sharedConfiguration;

@property (readonly, copy, nonatomic) NSDictionary *activeVersions;
@property (readonly, nonatomic) unsigned long long activeReleaseDataVersion;
@property (copy, nonatomic) NSDictionary *latestAvailableVersions;
@property (readonly, nonatomic) unsigned int regulatoryRegionID;
@property (readonly, nonatomic, getter=isUpdateAvailable) BOOL updateAvailable;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) GEOPBOfflineTileMetadata *tileMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (id)init;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void).cxx_destruct;
- (void)_updateAvailableOverrideChanged;
- (void)_broadcastUpdateAvailability;
- (id)_configurationIsolated;
- (BOOL)_isUpdateAvailableIsolated;
- (void)_regulatoryRegionOverrideDidChange;
- (void)_setLatestReleaseDataVersionIsCurrentWithConfiguration:(id)a0;
- (void)_writeConfiguration;
- (void)setActiveReleaseDataVersion:(unsigned long long)a0;
- (void)setLastUpdatedDateToNow;
- (void)updateCompletedWithVersions:(id)a0 tileMetadata:(id)a1;

@end
