@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSServerDataCacheService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)_serverDataCacheFeatureEnabled;

- (id)init;
- (id)setUpCacheForAccount:(id)a0;
- (void)dealloc;
- (id)proxyWithErrorHandler:(id /* block */)a0;
- (id)updateCacheForAccountDSID:(id)a0 withCachePayload:(id)a1;
- (id)reminderEventsForAccount:(id)a0 service:(id)a1 eventType:(id)a2 networkPolicy:(long long)a3;
- (id)setUpCacheForAccountDSID:(id)a0;
- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (id)granularNotificationSettingsForAccountDSID:(id)a0 bundleID:(id)a1 networkPolicy:(long long)a2;
- (void).cxx_destruct;
- (id)updateCacheForAccountDSID:(id)a0 withCacheTypeIDs:(id)a1;
- (id)tearDownCacheForAccountDSID:(id)a0;
- (void)_removeRemoteConnection;
- (id)dataForAccountDSID:(id)a0 cacheTypeID:(id)a1 networkPolicy:(long long)a2;

@end
