@class MGRemoteQueryServer, NSString, MGOutstandingQuery, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, MGInternalQueryRunner;

@interface MGRemoteQueryServerManager : NSObject <MGRemoteQueryServerDelegate>

@property (retain, nonatomic) MGRemoteQueryServer *server;
@property (nonatomic) BOOL havePermissiveACL;
@property (nonatomic) BOOL haveGroupsToAdvertise;
@property (copy, nonatomic) NSString *homeHash;
@property (readonly, nonatomic) NSUserDefaults *airplayDefaults;
@property (retain, nonatomic) MGOutstandingQuery *query;
@property (nonatomic) unsigned long long relaunchCount;
@property (readonly, weak, nonatomic) id<MGInternalQueryRunner> queryRunner;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_stopServer;
- (void)dealloc;
- (void)_updateState;
- (void)_startServer;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_setupQuery;
- (BOOL)_shouldRunServer;
- (id)initWithQueryRunner:(id)a0;
- (void)serverInvalidated:(id)a0 withError:(id)a1;

@end
