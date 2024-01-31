@class NSXPCInterface, NSXPCConnection;

@interface GDXPCInternalService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)statsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)generateActivityCentricLifeEventsFromStartDate:(id)a0 toEndDate:(id)a1 error:(id *)a2;
- (BOOL)runToMatchingPipelineWithError:(id *)a0;
- (BOOL)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(BOOL)a0 shouldClearSampleGenerator:(BOOL)a1 error:(id *)a2;
- (BOOL)behaviorUnderstandingClearEntityTaggingInjectedTagsWithError:(id *)a0;
- (BOOL)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(BOOL)a0 shouldDigestSampleGenerator:(BOOL)a1 error:(id *)a2;
- (id)behaviorUnderstandingDumpEntityTaggingDataCollectionWithOutputPath:(id)a0 error:(id *)a1;
- (id)behaviorUnderstandingEvaluateForBehaviorType:(id)a0 queryName:(id)a1 inferenceServiceInstanceId:(id)a2 error:(id *)a3;
- (id)behaviorUnderstandingFeaturizeBehaviorOfType:(id)a0 identifier:(id)a1 usingContextAt:(id)a2 error:(id *)a3;
- (id)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)a0 behaviorType:(id)a1 error:(id *)a2;
- (id)behaviorUnderstandingHistogramsOfKind:(id)a0 behaviorType:(id)a1 viewName:(id)a2 error:(id *)a3;
- (BOOL)behaviorUnderstandingInjectTagForPersonID:(id)a0 tagType:(id)a1 confidence:(double)a2 error:(id *)a3;
- (BOOL)behaviorUnderstandingMockEntityRelevanceContextWithDate:(id)a0 error:(id *)a1;
- (id)behaviorUnderstandingRecentBehaviorsOfType:(id)a0 error:(id *)a1;
- (id)behaviorUnderstandingSampleEntityTaggingFeaturesForPersonID:(id)a0 error:(id *)a1;
- (id)behaviorUnderstandingShowEntityTaggingInjectedTagsWithError:(id *)a0;
- (id)behaviorUnderstandingStatusWithError:(id *)a0;
- (BOOL)behaviorUnderstandingTriggerEntityTaggingDataCollectionWithError:(id *)a0;
- (BOOL)benchmarkWithError:(id *)a0;
- (BOOL)clearStatusWithError:(id *)a0;
- (id)contextDataForSource:(id)a0 startDate:(id)a1 endDate:(id)a2 error:(id *)a3;
- (id)featureKeysWithError:(id *)a0;
- (void)locked_establishConnection;
- (id)photosMetadataWithStartDate:(id)a0 endDate:(id)a1 maxEvents:(long long)a2 newestFirst:(BOOL)a3 error:(id *)a4;
- (id)resolveEntityWithRequest:(id)a0 enableSessionLogging:(BOOL)a1 configName:(id)a2 encodedConfig:(id)a3 withError:(id *)a4;
- (BOOL)runDeltaUpdatePipelineWithSource:(id)a0 error:(id *)a1;
- (id)statusWithError:(id *)a0;
- (BOOL)stopPipelineWithError:(id *)a0;
- (id)triplesQueryWithQuery:(id)a0;
- (id)validateGraph:(id *)a0;
- (id)vectorSearchBenchmarkWithConfigFilePath:(id)a0 error:(id *)a1;
- (id)viewInfoWithViewQuery:(id)a0 rows:(id)a1 error:(id *)a2;
- (id)viewSqlWithName:(id)a0 statement:(id)a1 error:(id *)a2;

@end
