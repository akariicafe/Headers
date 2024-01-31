@class NSString, NSMutableDictionary, NSArray, NSObject, MCPeerID;
@protocol OS_dispatch_queue, MCSessionDelegate, MCSessionPrivateDelegate;

@interface MCSession : NSObject {
    BOOL _AWDLDisabled;
    id<MCSessionDelegate> _delegate;
    BOOL _preferNCMOverEthernet;
    id<MCSessionPrivateDelegate> _privateDelegate;
}

@property (nonatomic) id<MCSessionPrivateDelegate> privateDelegate;
@property (nonatomic, getter=isAWDLDisabled) BOOL AWDLDisabled;
@property (nonatomic) BOOL preferNCMOverEthernet;
@property (nonatomic) struct OpaqueGCKSession { } *gckSession;
@property (nonatomic) struct OpaqueAGPSession { } *agpSession;
@property (nonatomic) unsigned int gckPID;
@property (retain, nonatomic) NSMutableDictionary *peerIDMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) id<MCSessionPrivateDelegate> privateDelegate;
@property (retain, nonatomic) NSMutableDictionary *peerStates;
@property (retain, nonatomic) NSMutableDictionary *connectionPendingPeerEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long stateHandle;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long maxPeers;
@property (weak, nonatomic) id<MCSessionDelegate> delegate;
@property (readonly, nonatomic) MCPeerID *myPeerID;
@property (readonly, nonatomic) NSArray *securityIdentity;
@property (readonly, nonatomic) long long encryptionPreference;
@property (readonly, nonatomic) NSArray *connectedPeers;

+ (id)stringForMCSessionSendDataMode:(long long)a0;
+ (id)stringForSessionState:(long long)a0;

- (void)disconnect;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithPeer:(id)a0 securityIdentity:(id)a1 encryptionPreference:(long long)a2;
- (BOOL)sendData:(id)a0 toPeers:(id)a1 withMode:(long long)a2 error:(id *)a3;
- (void)setHeartbeatTimeout:(unsigned long long)a0;
- (id)initWithPeer:(id)a0;
- (void)closeDirectConnectionsWithPeer:(id)a0;
- (void)startConnectionWithIndirectPID:(unsigned int)a0;
- (void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)a0 streamID:(unsigned int)a1 closeReason:(unsigned short)a2;
- (void)cancelConnectPeer:(id)a0;
- (void)cancelIncomingStream:(id)a0 fromPeer:(id)a1;
- (void)cancelOutgoingStream:(id)a0 toPeer:(id)a1;
- (void)connectPeer:(id)a0 withNearbyConnectionData:(id)a1;
- (long long)connectedInterfacesForPeer:(id)a0;
- (BOOL)isEncryptionPreferenceCompatible:(long long)a0;
- (void)logSessionInfo;
- (void)nearbyConnectionDataForPeer:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)peerDidDeclineInvitation:(id)a0;
- (id)sendResourceAtURL:(id)a0 withName:(id)a1 toPeer:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)setICETimeoutForced:(BOOL)a0;
- (id)startStreamWithName:(id)a0 toPeer:(id)a1 error:(id *)a2;
- (id)stringForEncryptionPreference:(long long)a0;
- (void)syncCancelIncomingStream:(id)a0 fromPeer:(id)a1;
- (void)syncCancelOutgoingStream:(id)a0 toPeer:(id)a1;
- (void)syncCloseIncomingStream:(id)a0 forPeer:(id)a1 state:(id)a2 error:(id)a3 reason:(int)a4 shouldTriggerCancelProgress:(BOOL)a5;
- (void)syncCloseOutgoingStream:(id)a0 forPeer:(id)a1 state:(id)a2 error:(id)a3 shouldTriggerCancelProgress:(BOOL)a4;
- (void)syncCloseStreamsForPeer:(id)a0;
- (void)syncConnectPeer:(id)a0 withConnectionData:(id)a1;
- (unsigned long long)syncConnectedPeersCount;
- (id)syncDetailedDescription;
- (void)syncGetConnectionDataForPeerState:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncHandleNetworkEvent:(struct { int x0; char *x1; int x2; unsigned int x3; } *)a0 pid:(unsigned int)a1 freeEventWhenDone:(BOOL *)a2;
- (void)syncHandleXDataDataPacket:(char *)a0 packetSize:(int)a1 forPeer:(id)a2 state:(id)a3;
- (void)syncLogConnectedPeers;
- (void)syncLogMaxConnectedPeers;
- (void)syncPeer:(id)a0 changeStateTo:(long long)a1 shouldForceCallback:(BOOL)a2;
- (void)syncSendData:(id)a0 toPeers:(id)a1 withDataMode:(long long)a2;
- (void)syncSendXDataConnectionBlobPushToPID:(unsigned int)a0 connectionBlob:(id)a1;
- (void)syncSendXDataPeerIDPushToPID:(unsigned int)a0;
- (void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)a0 streamID:(unsigned int)a1 closeReason:(unsigned short)a2;
- (void)syncSendXDataStreamOpenResponseToPID:(unsigned int)a0 withRequestID:(unsigned int)a1 streamID:(unsigned int)a2;
- (void)syncStartStreamWithName:(id)a0 toPeer:(id)a1 mcFD:(int)a2 isResource:(BOOL)a3;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)syncStateCapture;

@end
