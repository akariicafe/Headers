@class PPClientFeedbackHelper;

@interface PPXPCTopicStore : PPTopicStore {
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

- (id)topicCacheSandboxExtensionToken:(id *)a0;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_init;
- (BOOL)iterScoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)topicRecordsWithQuery:(id)a0 error:(id *)a1;
- (BOOL)computeAndCacheTopicScores:(id *)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)topicExtractionsFromText:(id)a0 error:(id *)a1;
- (id)cachePath:(id *)a0;
- (id)rankedTopicsWithQuery:(id)a0 error:(id *)a1;
- (BOOL)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 exactMatchesInSourceText:(id)a5 error:(id *)a6;
- (id)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)iterRankedTopicsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 error:(id *)a2;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)setClientIdentifier:(id)a0;
- (void)registerUniversalSearchSpotlightFeedback:(id)a0 completion:(id /* block */)a1;
- (id)clientIdentifier;
- (BOOL)cloudSyncWithError:(id *)a0;
- (BOOL)iterTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;

@end
