@class MGGroupsQueryAgent, MGRemoteQueryClientBrowser, NSArray, NSURLSession, NSSet, MGOutstandingQuery, NSDictionary, NSString, NSObject, MGRemoteQueryClientManagerForwarder;
@protocol OS_dispatch_queue, MGInternalQueryRunner;

@interface MGRemoteQueryClientManager : NSObject <MGRemoteQueryClientBrowserDelegate, MGRemoteQueryClientDelegate, MGRemoteQueryClientWatchdogDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (nonatomic) BOOL invalidated;
@property (readonly, weak, nonatomic) MGGroupsQueryAgent *queryAgent;
@property (retain, nonatomic) MGRemoteQueryClientBrowser *browser;
@property (retain, nonatomic) NSSet *targets;
@property (retain, nonatomic) NSDictionary *queries;
@property (retain, nonatomic) NSArray *clients;
@property (retain, nonatomic) NSDictionary *watchdogs;
@property (readonly, nonatomic) MGRemoteQueryClientManagerForwarder *forwarder;
@property (readonly, nonatomic) NSURLSession *session;
@property (retain, nonatomic) MGOutstandingQuery *query;
@property (copy, nonatomic) NSArray *homeHashes;
@property (readonly, weak, nonatomic) id<MGInternalQueryRunner> queryRunner;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)dealloc;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)_invalidate;
- (void)watchdogFired:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)_watchdogReset:(id)a0;
- (void)_watchdogFired:(id)a0;
- (void)_browserStart;
- (void)_browserStop;
- (void)_browserUpdateState;
- (id)_clientForTarget:(id)a0 withQuery:(id)a1;
- (id)_clientForTask:(id)a0 includeOthers:(BOOL)a1;
- (void)_clientRemove:(id)a0;
- (void)_clientStartWithQuery:(id)a0 target:(id)a1;
- (void)_clientStop:(id)a0;
- (id)_clientsForTarget:(id)a0;
- (id)_clientsWithQuery:(id)a0;
- (void)_prepareURLSession;
- (void)_queryAdd:(id)a0;
- (void)_queryRemove:(id)a0;
- (void)_setupQuery;
- (void)_targetAdd:(id)a0;
- (void)_targetRemove:(id)a0;
- (BOOL)_targetValidate:(id)a0;
- (void)_watchdogAdd:(id)a0;
- (id)_watchdogForTarget:(id)a0;
- (void)_watchdogRemove:(id)a0;
- (void)addOutstandingQuery:(id)a0;
- (void)browser:(id)a0 foundTarget:(id)a1;
- (void)browser:(id)a0 invalidatedWithError:(id)a1;
- (void)browser:(id)a0 lostTarget:(id)a1;
- (void)clientInvalidated:(id)a0 withError:(id)a1;
- (id)initWithQueryRunner:(id)a0 groupsQueryAgent:(id)a1;
- (void)removeOutstandingQuery:(id)a0;

@end
