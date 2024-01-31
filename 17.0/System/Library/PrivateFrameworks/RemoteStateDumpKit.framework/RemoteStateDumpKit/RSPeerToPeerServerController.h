@class NSString, MCNearbyServiceAdvertiser;

@interface RSPeerToPeerServerController : RSPeerToPeerConnectionController <MCNearbyServiceAdvertiserDelegate>

@property (retain, nonatomic) MCNearbyServiceAdvertiser *serviceAdvertiser;
@property (nonatomic) BOOL advertiserDidNotStartAdvertising;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)abort;
- (void).cxx_destruct;
- (void)advertiser:(id)a0 didReceiveInvitationFromPeer:(id)a1 withContext:(id)a2 invitationHandler:(id /* block */)a3;
- (void)advertiser:(id)a0 didNotStartAdvertisingPeer:(id)a1;
- (BOOL)didStartAcceptingConnections;
- (void)prepareForConnection;

@end
