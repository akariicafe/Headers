@class PPTrialWrapper, NSString, NSObject, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPTopicStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

@property (readonly, nonatomic) NSString *parentDirectory;

- (BOOL)pruneOrphanedTopicFeedbackCountRecordsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (id)initWithDatabase:(id)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 algorithm:(unsigned long long)a2 atLeastOneTopicRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)init;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (void)dealloc;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 atLeastOneTopicRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)firstDonationSourceCountsWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 decayRate:(double)a4 sentimentScore:(double)a5 exactMatchesInSourceText:(id)a6 error:(id *)a7;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 algorithm:(unsigned long long)a3 atLeastOneTopicRemoved:(BOOL *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (void)processNewDKEventDeletions;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)a0;
- (id)sourceStats:(unsigned long long)a0 withExcludedAlgorithms:(id)a1;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(BOOL)a3 trialWrapper:(id)a4;
- (BOOL)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (unsigned int)duetReadBatchSize;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (unsigned int)duetWriteBatchSize;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)a0;
- (void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned int)a0 isComplete:(BOOL *)a1 shouldContinueBlock:(id /* block */)a2;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 atLeastOneTopicRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 algorithm:(unsigned long long)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)clusterIdentifiersExistingBeforeDate:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 algorithm:(unsigned long long)a2 atLeastOneTopicRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneTopicRemoved:(BOOL *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (double)duetWriteBatchInterval;
- (unsigned int)uniqueClusterIdentifierCount;
- (BOOL)deleteAllTopicFeedbackCountRecordsOlderThanDate:(id)a0;
- (BOOL)donateTopicFeedback:(id)a0;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 algorithm:(unsigned long long)a1 atLeastOneTopicRemoved:(BOOL *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)iterTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)deleteAllTopicsOlderThanDate:(id)a0 atLeastOneTopicRemoved:(BOOL *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)disableSyncForBundleIds:(id)a0;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)a0;
- (id)thirdPartyBundleIdsFromToday;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;

@end
