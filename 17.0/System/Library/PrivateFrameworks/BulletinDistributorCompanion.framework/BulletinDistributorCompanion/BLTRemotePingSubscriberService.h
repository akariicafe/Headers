@class NSXPCListener, NSString, NSXPCConnection;
@protocol BLTPingSubscribing;

@interface BLTRemotePingSubscriberService : NSObject <NSXPCListenerDelegate, BLTPingService>

@property (retain, nonatomic) NSXPCConnection *connectionToServer;
@property (retain, nonatomic) NSXPCConnection *connectionFromServer;
@property (retain, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) NSString *machServiceName;
@property (weak, nonatomic) id<BLTPingSubscribing> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_createXPCService;
- (void)getWillNanoPresentNotificationForSectionID:(id)a0 completion:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1 ack:(id /* block */)a2;
- (void)subscribeWithMachServiceName:(id)a0;
- (void)pingWithBulletin:(id)a0;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1;
- (void).cxx_destruct;
- (void)subscribeToSectionID:(id)a0 forFullBulletins:(BOOL)a1 withAck:(BOOL)a2 ackAllowedOnLocalConnection:(BOOL)a3;
- (void)_connect;
- (void)getWillNanoPresentNotificationForSectionID:(id)a0 subsectionIDs:(id)a1 completion:(id /* block */)a2;
- (id)initWithMachServiceName:(id)a0;
- (void)pingWithBulletin:(id)a0 ack:(id /* block */)a1;
- (void)sendBulletinSummary:(id)a0;
- (void)unsubscribeFromSectionID:(id)a0;

@end
