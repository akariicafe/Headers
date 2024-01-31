@class NSError, NSString, NSArray, NSDate, GDEntityResolutionResult, GDViewQuery, NSDictionary, GDEntityResolutionRequest, NSNumber;

@interface _TtCC24IntelligencePlatformCore11InternalXPC6Server : NSObject <GDInternalXPCProtocol>

- (void)runDeltaUpdatePipelineWithSource:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)runToMatchingPipelineWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)stopPipelineWithCompletion:(void (^)(BOOL, NSError *))a0;
- (id)init;
- (void)statusWithCompletion:(id /* block */)a0;
- (void)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(BOOL)a0 shouldClearSampleGenerator:(BOOL)a1 completion:(id /* block */)a2;
- (void)behaviorUnderstandingClearEntityTaggingInjectedTagsWithCompletion:(id /* block */)a0;
- (void)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(BOOL)a0 shouldDigestSampleGenerator:(BOOL)a1 completion:(id /* block */)a2;
- (void)behaviorUnderstandingDumpEntityTaggingDataCollectionWithOutputPath:(id)a0 completion:(id /* block */)a1;
- (void)behaviorUnderstandingEvaluateForBehaviorType:(NSString *)a0 queryName:(NSString *)a1 inferenceServiceInstanceId:(NSString *)a2 completion:(void (^)(NSDictionary *, NSError *))a3;
- (void)behaviorUnderstandingFeaturizeBehaviorOfType:(id)a0 identifier:(id)a1 usingContextAt:(id)a2 completion:(id /* block */)a3;
- (void)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)a0 behaviorType:(id)a1 completion:(id /* block */)a2;
- (void)behaviorUnderstandingHistogramsOfKind:(id)a0 behaviorType:(id)a1 viewName:(id)a2 completion:(id /* block */)a3;
- (void)behaviorUnderstandingInjectTagForPersonID:(id)a0 tagType:(id)a1 confidence:(double)a2 completion:(id /* block */)a3;
- (void)behaviorUnderstandingMockEntityRelevanceContextWithDate:(NSDate *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)behaviorUnderstandingRecentBehaviorsOfType:(id)a0 completion:(id /* block */)a1;
- (void)behaviorUnderstandingSampleEntityTaggingFeaturesForPersonID:(id)a0 completion:(id /* block */)a1;
- (void)behaviorUnderstandingShowEntityTaggingInjectedTagsWithCompletion:(id /* block */)a0;
- (void)behaviorUnderstandingStatusWithCompletion:(id /* block */)a0;
- (void)behaviorUnderstandingTriggerEntityTaggingDataCollectionWithCompletion:(id /* block */)a0;
- (void)benchmarkWithCompletion:(id /* block */)a0;
- (void)clearStatusWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)contextDataForSource:(NSString *)a0 startDate:(NSDate *)a1 endDate:(NSDate *)a2 completion:(void (^)(NSString *, NSError *))a3;
- (void)featureKeys:(void (^)(NSArray *, NSError *))a0;
- (void)generateActivityCentricLifeEventsFromStartDate:(NSDate *)a0 toEndDate:(NSDate *)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)photosMetadataWithStartDate:(id)a0 endDate:(id)a1 maxEvents:(long long)a2 newestFirst:(BOOL)a3 completion:(id /* block */)a4;
- (void)resolveEntityWithRequest:(GDEntityResolutionRequest *)a0 enableSessionLogging:(BOOL)a1 configName:(NSString *)a2 encodedConfig:(NSString *)a3 completion:(void (^)(GDEntityResolutionResult *, NSError *))a4;
- (void)statsWithCompletion:(id /* block */)a0;
- (void)triplesQueryWithQuery:(id)a0 completion:(id /* block */)a1;
- (void)validateGraphWithCompletion:(id /* block */)a0;
- (void)vectorSearchBenchmarkWithConfigFilePath:(NSString *)a0 completion:(void (^)(NSString *, NSError *))a1;
- (void)viewInfoWithViewQuery:(GDViewQuery *)a0 rows:(NSNumber *)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)viewSqlWithName:(NSString *)a0 statement:(NSString *)a1 completion:(void (^)(NSString *, NSError *))a2;

@end
