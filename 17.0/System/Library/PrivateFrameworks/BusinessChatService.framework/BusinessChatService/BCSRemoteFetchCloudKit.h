@class NSString, CKContainer;
@protocol BCSCloudKitQueryProviding, BCSQueryOperationFactoryProtocol, BCSOperationGroupFactoryProtocol, BCSCloudKitDatabaseProtocol, BCSQueryOperationProtocol, BCSMetricFactoryProtocol, BCSBloomFilterExtractorProtocol, BCSCoalesceHelperProtocol, BCSICloudServerEnvironmentProtocol;

@interface BCSRemoteFetchCloudKit : NSObject <BSDescriptionProviding, BCSConfigRemoteFetching, BCSShardRemoteFetching, BCSMegashardRemoteFetching, BCSItemRemoteFetching, BCSShardItemInstantiating> {
    id<BCSICloudServerEnvironmentProtocol> _environment;
    id<BCSCloudKitDatabaseProtocol> _database;
    id<BCSQueryOperationProtocol> _queryOperation;
    id<BCSCloudKitQueryProviding> _queryProvider;
    id<BCSQueryOperationFactoryProtocol> _queryOperationFactory;
    CKContainer *_databaseContainer;
    id<BCSCoalesceHelperProtocol> _coalesceHelper;
    id<BCSBloomFilterExtractorProtocol> _bloomFilterExtractor;
    id<BCSOperationGroupFactoryProtocol> _operationGroupFactory;
    id<BCSMetricFactoryProtocol> _metricFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 completion:(id /* block */)a3;
- (void)fetchItemsWithBucketStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2 forClientBundleID:(id)a3 completion:(id /* block */)a4;
- (void)fetchMegashardItemWithType:(long long)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchMegashardItemWithType:(long long)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 completion:(id /* block */)a3;
- (void)fetchShardMatching:(id)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)initWithEnvironment:(id)a0 database:(id)a1 databaseContainer:(id)a2 queryOperationFactory:(id)a3 coalesceHelper:(id)a4 bloomFilterExtractor:(id)a5 operationGroupFactory:(id)a6 metricFactory:(id)a7;
- (id)shardItemFromURL:(id)a0 type:(long long)a1;

@end
