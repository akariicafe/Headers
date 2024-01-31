@protocol IMDaemonMultiplexedConnectionManaging;

@interface IMCollaborationNoticeDispatcher : NSObject

@property (retain, nonatomic) id<IMDaemonMultiplexedConnectionManaging> daemonConnection;

- (id)init;
- (void)dealloc;
- (void)disconnectFromDaemon;
- (void).cxx_destruct;
- (void)sendClearNotice:(id)a0 toHandles:(id)a1 completion:(id /* block */)a2;
- (void)sendNotice:(id)a0 toHandles:(id)a1 completion:(id /* block */)a2;
- (id)_bestSendingHandle;
- (void)setUpConnectionToDaemon;

@end
