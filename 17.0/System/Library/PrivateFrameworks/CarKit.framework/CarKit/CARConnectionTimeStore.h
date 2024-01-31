@class NSXPCConnection;

@interface CARConnectionTimeStore : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)_CARConnectionServiceInterface;

- (id)init;
- (void)dealloc;
- (void)clearHistoricalConnectionsWithCompletion:(id /* block */)a0;
- (void)_setupConnection;
- (void)_xpcFetchWithSynchronousServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)sendConnectionEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)syncSendConnectionEvent:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecentSessions:(id /* block */)a0;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
