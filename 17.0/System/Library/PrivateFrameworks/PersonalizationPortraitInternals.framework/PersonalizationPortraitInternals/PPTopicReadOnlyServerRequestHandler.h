@class NSString, _PASBundleIdResolver, PPXPCServerPipelinedBatchQueryManager;
@protocol PPTopicClientProtocol;

@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol> {
    id<PPTopicClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

+ (id)filterQIDDictionary:(id)a0 withAllowlistOfProcess:(id)a1 allowlist:(id)a2;
+ (id)filterScoredTopicsNotInAllowlist:(id)a0 withAllowlistOfProcess:(id)a1 allowlist:(id)a2;
+ (id)filterTopicRecordsNotInAllowlist:(id)a0 withAllowlistOfProcess:(id)a1 allowlist:(id)a2;

- (void)topicCacheSandboxExtensionToken:(id /* block */)a0;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)scoresForTopicMapping:(id)a0 query:(id)a1 queryId:(unsigned long long)a2;
- (void)rankedTopicsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (id)init;
- (void)setRemoteObjectProxy:(id)a0;
- (void)topicRecordsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)unblockPendingQueries;
- (void)cachePath:(id /* block */)a0;
- (void)topicExtractionsFromText:(id)a0 queryId:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)registerUniversalSearchSpotlightFeedback:(id)a0 completion:(id /* block */)a1;
- (void)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 completion:(id /* block */)a2;

@end
