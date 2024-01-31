@class NSMutableDictionary, NSXPCConnection;

@interface CAReportingClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *clientReporters;

+ (id)sharedInstance;
+ (id)getClient;
+ (void)destroyClient;

- (void)stopReporters:(id)a0;
- (void)dealloc;
- (void)disconnectReporters;
- (void)reconnectStartedReporters;
- (void)addReporter:(id)a0;
- (id)listClientReporterIDs;
- (id)getConfigurationForReporterID:(long long)a0;
- (id)initWithXPC:(BOOL)a0 endpoint:(id)a1;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporters:(id)a3;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (void)destroyReporterWithID:(long long)a0;
- (void)startReporters:(id)a0;
- (void).cxx_destruct;
- (id)reporterWithID:(long long)a0;
- (void)requestMessageWithID:(long long)a0 category:(unsigned int)a1 type:(unsigned short)a2 callback:(id /* block */)a3;
- (id)listServerReporterIDs;
- (void)destroyService;
- (long long)createReporterID:(unsigned int)a0;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (void)reconnectReporter:(id)a0;

@end
