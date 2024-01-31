@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (id)init;
- (BOOL)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)namedEntityBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)namedEntityRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;

@end
