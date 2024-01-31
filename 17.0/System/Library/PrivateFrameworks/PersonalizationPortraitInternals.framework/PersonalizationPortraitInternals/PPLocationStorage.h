@class PPTrialWrapper, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;

@interface PPLocationStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
}

- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 atLeastOneLocationRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)initWithDatabase:(id)a0;
- (id)init;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (void)dealloc;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneLocationRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)sourceStats:(unsigned long long)a0 withExcludedAlgorithms:(id)a1;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(BOOL)a3 trialWrapper:(id)a4;
- (BOOL)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)a0;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (BOOL)donateLocationFeedback:(id)a0;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneLocationRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (BOOL)deleteAllLocationsOlderThanDate:(id)a0 atLeastOneLocationRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (void).cxx_destruct;
- (BOOL)iterLocationRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (BOOL)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 error:(id *)a5;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneLocationRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)thirdPartyBundleIdsFromToday;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;

@end
