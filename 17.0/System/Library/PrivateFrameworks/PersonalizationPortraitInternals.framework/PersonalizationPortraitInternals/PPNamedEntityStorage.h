@class PPTrialWrapper, NSObject, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPNamedEntityStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneNamedEntityRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)initWithDatabase:(id)a0;
- (id)init;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (void)dealloc;
- (BOOL)setNamedEntityFilterLastRunDate:(id)a0 error:(id *)a1;
- (id)firstDonationSourceCountsWithShouldContinueBlock:(id /* block */)a0;
- (id)namedEntityFilterLastRecordDate;
- (void)processNewDKEventDeletions;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)a0;
- (id)sourceStats:(unsigned long long)a0 withExcludedAlgorithms:(id)a1;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneNamedEntityRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(BOOL)a3 trialWrapper:(id)a4;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (unsigned int)duetReadBatchSize;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (unsigned int)duetWriteBatchSize;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)a0;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 error:(id *)a6;
- (BOOL)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)a0;
- (id)clusterIdentifiersExistingBeforeDate:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneNamedEntityRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)deleteNamedEntitiesMatchingRowIds:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteAllNamedEntitiesOlderThanDate:(id)a0 atLeastOneNamedEntityRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)donateNamedEntityFeedback:(id)a0;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (double)duetWriteBatchInterval;
- (unsigned int)uniqueClusterIdentifierCount;
- (id)namedEntityFilterLastRunDateWithError:(id *)a0;
- (BOOL)iterNamedEntityRecordsAndIdsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)setNamedEntityFilterLastRecordDate:(id)a0 error:(id *)a1;
- (BOOL)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (void)disableSyncForBundleIds:(id)a0;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)a0;
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)a0 isComplete:(BOOL *)a1 shouldContinueBlock:(id /* block */)a2;
- (id)thirdPartyBundleIdsFromToday;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;

@end
