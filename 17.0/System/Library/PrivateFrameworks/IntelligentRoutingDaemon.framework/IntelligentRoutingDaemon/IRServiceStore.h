@class NSString;

@interface IRServiceStore : IRStore

@property (readonly, nonatomic) NSString *serviceIdentifier;

+ (id)fetchAllServicesForClientIdentifier:(id)a0 persistenceManager:(id)a1;
+ (id)fetchAllServicesWithPersistenceManager:(id)a0;
+ (id)fetchLatestServiceWithPersistenceManager:(id)a0 forClientIdentifier:(id)a1;
+ (id)generateLogForServicesDatabaseWithPersistenceManager:(id)a0;
+ (id)generateLogForStringNumEntitiesInDatabaseWithPersistenceManager:(id)a0;
+ (void)idendifyAndDeleteDuplicateServicesWithWithPersistenceManager:(id)a0;

- (BOOL)addService:(id)a0;
- (void).cxx_destruct;
- (BOOL)addCandidates:(id)a0;
- (BOOL)updateCandidate:(id)a0;
- (BOOL)updateStatistics:(id)a0;
- (id)fetchStatistics;
- (BOOL)_cleanupCandidatesWithDate:(id)a0;
- (BOOL)_cleanupHistoryEventsWithDate:(id)a0;
- (BOOL)_cleanupNotValidForPredictionCandidates;
- (BOOL)_cleanupPredictionEventsInDateInterval:(id)a0;
- (BOOL)_cleanupReplayEventsWithDate:(id)a0;
- (BOOL)_cleanupTrashedHistoryEvents;
- (BOOL)addHistoryEvent:(id)a0 withLimit:(unsigned long long)a1;
- (BOOL)addReplayEvents:(id)a0 withLimit:(unsigned long long)a1;
- (BOOL)cleanupWithDate:(id)a0 dateIntervalOfMiLoPredictionsToDiscard:(id)a1;
- (BOOL)deleteCandidates:(id)a0;
- (BOOL)deleteService;
- (id)fetchCandidatesContainer;
- (id)fetchHistoryEventsContainerWithLimit:(unsigned long long)a0;
- (id)fetchMiLoServiceUuid;
- (id)fetchReplayEventAtDate:(id)a0;
- (id)fetchReplayEventsContainer;
- (id)fetchService;
- (id)getReplayEventDescriptors;
- (id)initWithPersistenceManager:(id)a0 serviceIdentifier:(id)a1;
- (BOOL)injectStatisticsRelationship;
- (BOOL)updateMiloServiceWithMiloUuidString:(id)a0;
- (BOOL)updateService:(id)a0;

@end
