@protocol IMDRemoteDatabaseProtocol;

@interface IMDPersistenceServiceClient : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ unlockedConnection;
}

@property (class, nonatomic, retain) IMDPersistenceServiceClient *sharedClient;

@property (nonatomic, readonly) id<IMDRemoteDatabaseProtocol> remoteProxy;
@property (nonatomic, readonly) id<IMDRemoteDatabaseProtocol> synchronousRemoteProxy;

- (id)init;
- (void).cxx_destruct;

@end
