@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPConnectionsClientProtocol;

@interface PPConnectionsServerRequestHandler : NSObject <PPConnectionsServerProtocol> {
    id<PPConnectionsClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)setRemoteObjectProxy:(id)a0;
- (void)unblockPendingQueries;
- (void)recentLocationDonationsSinceDate:(id)a0 client:(id)a1 queryId:(unsigned long long)a2;
- (void)recentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 client:(id)a4 queryId:(unsigned long long)a5;
- (void).cxx_destruct;

@end
