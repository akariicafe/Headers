@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, BBSyncServiceDelegate;

@interface BBXPCSyncService : NSObject <BBSyncServiceRemoteClient, BBSyncServiceInterface> {
    id<BBSyncServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) unsigned long long pairedDeviceCount;
@property (weak, nonatomic) id<BBSyncServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)_resetConnection;
- (void).cxx_destruct;
- (void)enqueueSyncedRemovalForBulletin:(id)a0 feeds:(unsigned long long)a1;
- (id)_ensureConnection;
- (id)serverProxyObject;
- (void)syncServiceDidReceiveMessage:(id)a0;

@end
