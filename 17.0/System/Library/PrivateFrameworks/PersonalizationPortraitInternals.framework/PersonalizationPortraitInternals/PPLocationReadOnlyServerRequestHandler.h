@class NSString, _PASBundleIdResolver, PPXPCServerPipelinedBatchQueryManager;
@protocol PPLocationClientProtocol;

@interface PPLocationReadOnlyServerRequestHandler : NSObject <PPLocationReadOnlyServerProtocol> {
    id<PPLocationClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)setRemoteObjectProxy:(id)a0;
- (void)locationRecordsWithQuery:(id)a0 queryId:(unsigned long long)a1;
- (void)unblockPendingQueries;
- (void).cxx_destruct;
- (void)rankedLocationsWithQuery:(id)a0 queryId:(unsigned long long)a1;

@end
