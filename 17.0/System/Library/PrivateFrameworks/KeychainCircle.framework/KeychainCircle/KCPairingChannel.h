@class OTControl, NSXPCConnection, OTControlArguments, OTJoiningConfiguration, KCPairingChannelContext;

@interface KCPairingChannel : NSObject

@property KCPairingChannelContext *peerVersionContext;
@property BOOL initiator;
@property unsigned int counter;
@property BOOL acceptorWillSendInitialSyncCredentials;
@property unsigned int acceptorInitialSyncCredentialsFlags;
@property (retain) NSXPCConnection *connection;
@property (retain) OTControl *otControl;
@property (copy) id /* block */ nextOctagonState;
@property (copy) id /* block */ nextState;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (retain, nonatomic) OTControlArguments *controlArguments;
@property (nonatomic) BOOL testFailSOS;
@property (nonatomic) BOOL testFailOctagon;
@property BOOL sessionSupportsSOS;
@property BOOL sessionSupportsOctagon;
@property (readonly) BOOL needInitialSync;

+ (id)pairingChannelAcceptor:(id)a0;
+ (id)pairingChannelInitiator:(id)a0;
+ (BOOL)isSupportedPlatform;
+ (id)pairingChannelCompressData:(id)a0;
+ (id)pairingChannelDecompressData:(id)a0;

- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)initiatorFourthPacket:(id)a0 complete:(id /* block */)a1;
- (void)initiatorSecondPacket:(id)a0 complete:(id /* block */)a1;
- (void)acceptorFirstOctagonPacket:(id)a0 reply:(id)a1 complete:(id /* block */)a2;
- (void)acceptorFirstPacket:(id)a0 complete:(id /* block */)a1;
- (void)acceptorSecondOctagonPacket:(id)a0 reply:(id)a1 complete:(id /* block */)a2;
- (void)acceptorSecondPacket:(id)a0 complete:(id /* block */)a1;
- (void)acceptorThirdPacket:(id)a0 complete:(id /* block */)a1;
- (BOOL)ensureControlChannel;
- (void)exchangePacket:(id)a0 complete:(id /* block */)a1;
- (id)exchangePacket:(id)a0 complete:(BOOL *)a1 error:(id *)a2;
- (id)initAsInitiator:(BOOL)a0 version:(id)a1;
- (void)initiatorCompleteSecondPacketOctagon:(id)a0 application:(id)a1 complete:(id /* block */)a2;
- (void)initiatorCompleteSecondPacketWithSOS:(id)a0 complete:(id /* block */)a1;
- (void)initiatorFirstPacket:(id)a0 complete:(id /* block */)a1;
- (void)initiatorThirdPacket:(id)a0 complete:(id /* block */)a1;
- (void)oneStepTooMany:(id)a0 complete:(id /* block */)a1;
- (void)setControlObject:(id)a0;
- (void)setNextStateError:(id)a0 complete:(id /* block */)a1;
- (void)setOctagonMessageFailForTesting:(BOOL)a0;
- (void)setSOSMessageFailForTesting:(BOOL)a0;
- (void)setSessionControlArguments:(id)a0;
- (void)setSessionSupportsOctagonForTesting:(BOOL)a0;
- (void)setXPCConnectionObject:(id)a0;
- (void)validateStart:(id /* block */)a0;
- (void)waitForOctagonUpgrade;

@end
