@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSSearchAgent : CSXPCConnection

@property (retain, nonatomic) NSMutableDictionary *searchConnections;
@property (retain, nonatomic) id<MDIndexer> indexer;

+ (id)searchAgent;
+ (id)searchAgent:(BOOL)a0 serviceName:(id)a1;

- (void)preheat:(id)a0;
- (void)cancelQuery:(id)a0;
- (void)handleEngagement:(id)a0 forConnection:(id)a1;
- (id)searchConnection:(id)a0;
- (void)pollResults:(id)a0;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)a0;
- (void)cancelSimpleQuery:(id)a0;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (BOOL)lostClientConnection:(id)a0 error:(id)a1;
- (void)startQuery:(id)a0;
- (void).cxx_destruct;
- (void)_prepareQueryContext:(id)a0 searchConnection:(id)a1;
- (void)startSimpleQuery:(id)a0;

@end
