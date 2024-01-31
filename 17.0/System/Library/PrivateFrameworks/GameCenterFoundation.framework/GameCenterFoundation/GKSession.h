@class NSString, GKViceroySession;
@protocol GKSessionDelegate;

@interface GKSession : NSObject

@property (retain, nonatomic) GKViceroySession *session;
@property (weak) id<GKSessionDelegate> delegate;
@property (readonly) NSString *sessionID;
@property (readonly) NSString *displayName;
@property (readonly) int sessionMode;
@property (readonly) NSString *peerID;
@property (getter=isAvailable) BOOL available;
@property double disconnectTimeout;

- (BOOL)isBusy;
- (void)setPrivateDelegate:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)privateDelegate;
- (void)setBusy:(BOOL)a0;
- (BOOL)acceptConnectionFromPeer:(id)a0 error:(id *)a1;
- (void)cancelConnectToPeer:(id)a0;
- (void)connectToPeer:(id)a0 withTimeout:(double)a1;
- (void)denyConnectionFromPeer:(id)a0;
- (void)disableWifi;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)a0;
- (id)displayNameForPeer:(id)a0;
- (id)initWithSessionID:(id)a0 displayName:(id)a1 sessionMode:(int)a2;
- (id)initWithViceroySession:(id)a0;
- (BOOL)isPeerBusy:(id)a0;
- (id)peersWithConnectionState:(int)a0;
- (id)privateImpl;
- (BOOL)sendData:(id)a0 toPeers:(id)a1 withDataMode:(int)a2 error:(id *)a3;
- (BOOL)sendDataToAllPeers:(id)a0 withDataMode:(int)a1 error:(id *)a2;
- (void)setDataReceiveHandler:(id)a0 withContext:(void *)a1;

@end
