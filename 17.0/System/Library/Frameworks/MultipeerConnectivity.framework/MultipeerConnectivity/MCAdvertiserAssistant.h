@class MCAlertController, NSString, MCNearbyServiceAdvertiser, NSDictionary, MCPeerID, MCSession, NSBundle, NSMutableArray;
@protocol MCAdvertiserAssistantDelegate;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate> {
    id<MCAdvertiserAssistantDelegate> _delegate;
}

@property (copy, nonatomic) NSDictionary *discoveryInfo;
@property (copy, nonatomic) MCPeerID *myPeerID;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) MCNearbyServiceAdvertiser *advertiser;
@property (retain, nonatomic) NSMutableArray *invitationsBuffer;
@property (copy, nonatomic) id /* block */ invitationHandlerForPresentedAlert;
@property (readonly, copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL wasAdvertising;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (retain, nonatomic) MCAlertController *alertController;
@property (weak, nonatomic) id<MCAdvertiserAssistantDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)advertiser:(id)a0 didReceiveInvitationFromPeer:(id)a1 withContext:(id)a2 invitationHandler:(id /* block */)a3;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillTerminateNotification:(id)a0;
- (void)handleUserInvitationDecision:(BOOL)a0;
- (id)initWithServiceType:(id)a0 discoveryInfo:(id)a1 session:(id)a2;
- (void)presentNextInvitation;

@end
