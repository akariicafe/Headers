@class MCPeerID, NSString, NSMutableDictionary, NSDictionary, NSNetService, NSData, NSObject;
@protocol OS_dispatch_queue, MCNearbyServiceAdvertiserDelegate;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate> {
    id<MCNearbyServiceAdvertiserDelegate> _delegate;
}

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *formattedServiceType;
@property (retain, nonatomic) NSMutableDictionary *peers;
@property (copy, nonatomic) NSDictionary *discoveryInfo;
@property (retain, nonatomic) NSNetService *networkServer;
@property (retain, nonatomic) NSData *TXTRecordData;
@property (nonatomic) long long outgoingInviteID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *invites;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL wasAdvertising;
@property (nonatomic, getter=isAWDLDisabled) BOOL AWDLDisabled;
@property (weak, nonatomic) id<MCNearbyServiceAdvertiserDelegate> delegate;
@property (readonly, nonatomic) MCPeerID *myPeerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)netService:(id)a0 didAcceptConnectionWithInputStream:(id)a1 outputStream:(id)a2;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidPublish:(id)a0;
- (void)netServiceDidStop:(id)a0;
- (id)initWithPeer:(id)a0 discoveryInfo:(id)a1 serviceType:(id)a2;
- (void)startAdvertisingPeer;
- (void)stopAdvertisingPeer;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillEnterForegroundNotification:(id)a0;
- (void)applicationWillTerminateNotification:(id)a0;
- (id)txtRecordDataWithDiscoveryInfo:(id)a0;
- (id)makeTXTRecordDataWithDiscoveryInfo:(id)a0;
- (void)parseIDString:(id *)a0 displayName:(id *)a1 fromIdentifier:(id)a2;
- (void)syncAttachConnection:(id)a0 toPeer:(id)a1;
- (void)syncCloseConnectionForPeer:(id)a0;
- (void)syncHandleIncomingInputStream:(id)a0 outputStream:(id)a1;
- (void)syncHandleInvite:(id)a0 fromPeer:(id)a1;
- (void)syncHandleInviteConnect:(id)a0 fromPeer:(id)a1;
- (void)syncReceivedData:(id)a0 fromPeer:(id)a1;
- (void)syncSendData:(id)a0 toPeer:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)syncSendDictionary:(id)a0 toPeer:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)syncStartAdvertisingPeer;
- (void)syncStopAdvertisingPeer;

@end
