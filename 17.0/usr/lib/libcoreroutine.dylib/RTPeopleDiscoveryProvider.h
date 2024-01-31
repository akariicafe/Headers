@class RTProximityEventStore, RTPeopleDiscoveryContactRecord, RTTimerManager, NSString, RTPeopleDensityRecord, RTTimer, RTPeopleDensityStore, RTDefaultsManager, CLLocationManagerGathering, RTDataProtectionManager, RTPersistentTimer;

@interface RTPeopleDiscoveryProvider : RTService <RTPeopleDiscoveryContactRecordObserver>

@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTPeopleDiscoveryContactRecord *contactRecord;
@property (retain, nonatomic) RTProximityEventStore *proximityEventStore;
@property (retain, nonatomic) RTPeopleDensityStore *peopleDensityStore;
@property (retain, nonatomic) RTPeopleDensityRecord *peopleDensityRecord;
@property (retain, nonatomic) RTPersistentTimer *scoringTimer;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTTimer *backupTimer;
@property (retain, nonatomic) CLLocationManagerGathering *advertisementManager;
@property (nonatomic) BOOL contactScoreDataAvailable;
@property (nonatomic) BOOL hasLoadedPersistedRecords;
@property (nonatomic) BOOL peopleDiscoveryEnabled;
@property (nonatomic) double expirationInterval;
@property (nonatomic) unsigned long long minimumIdentities;
@property (nonatomic) BOOL proximityStoreAvailable;
@property (nonatomic) BOOL peopleDensityStoreAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)computeAdvMetrics:(long long)a0 identities:(id)a1 numOfResolvedAdvs:(long long)a2;
+ (id)getStoreURL;
+ (BOOL)isADPDEnabled;

- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void)fetchProximityHistoryFromEventIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)onDataProtectionNotification:(id)a0;
- (void)fetchPeopleDensityHistoryFromStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)fetchProximityHistoryFromStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchContactScoresFromContactIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_monitorEvents;
- (void)addPeopleDensityBundle:(id)a0 handler:(id /* block */)a1;
- (void)_addPeopleDensityBundle:(id)a0 handler:(id /* block */)a1;
- (void)_addProximityEvent:(id)a0 handler:(id /* block */)a1;
- (void)_armNewInteractionsTimer;
- (void)_computeDailyContactScores;
- (void)_didCloseProximityEvent:(id)a0;
- (id)_fetchAllIdentities;
- (void)_fetchAndReconcileAdvertisements;
- (void)_fetchContactScoresFromContactIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchPeopleDensityHistoryFromStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchProximityHistoryFromEventIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchProximityHistoryFromStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_loadAndMergeContactRecords;
- (BOOL)_resolveIdentity:(id)a0 identities:(id)a1;
- (void)addProximityEvent:(id)a0 handler:(id /* block */)a1;
- (void)clearPeopleDensityBundles:(id /* block */)a0;
- (void)clearProximityEvents:(id /* block */)a0;
- (void)computeContactScores:(id /* block */)a0;
- (void)didCloseProximityEvent:(id)a0;
- (id)initWithDefaultManager:(id)a0 proximityEventStore:(id)a1 peopleDensityStore:(id)a2 advertisementManager:(id)a3 dataProtectionManager:(id)a4 timerManager:(id)a5;
- (void)injectAdv:(id)a0 handler:(id /* block */)a1;
- (void)injectPeopleDensityStats:(unsigned long long)a0 duration:(double)a1 date:(id)a2 handler:(id /* block */)a3;
- (id)loadContactRecord;
- (void)onPeopleDensityStoreNotification:(id)a0;
- (void)onPeopleSwitchUpdated;
- (void)onProximityStoreNotification:(id)a0;
- (void)saveContactRecord;

@end
