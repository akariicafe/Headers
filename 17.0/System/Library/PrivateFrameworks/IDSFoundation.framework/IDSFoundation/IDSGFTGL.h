@class NSArray, NSMutableDictionary, NSData, NSMutableArray;

@interface IDSGFTGL : IDSGlobalLink {
    NSArray *_remoteCandidatePairs;
    NSMutableArray *_virtualCandidatePairs;
    BOOL _allowE2E;
    unsigned int _keyMaterialDataCounter;
    NSData *_keyMaterialData;
    id /* block */ _keyMaterialSentHandler;
    NSMutableDictionary *_reliableUnicastServerMaterialToProtoMessageTransactionID;
}

- (void)startWithOptions:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_postProcessAllocbindResponse:(id)a0 candidatePair:(id)a1 candidatePairToken:(id)a2;
- (void)setPluginCache:(id)a0;
- (BOOL)_IsExtIPDiscoveryNeeded:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 candidatePairList:(id)a1;
- (void)_destroyVirtualRelayLinksForCandidatePair:(id)a0;
- (void)_disableE2E;
- (void)_discardCandidatePairsWithOption:(BOOL)a0;
- (void)_discardKeyMaterialMessage:(long long)a0;
- (void)_enableE2E;
- (id)_findVirtualCandidatePair:(id)a0;
- (long long)_getQRAllocateType;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)a0 error:(long long)a1;
- (BOOL)_postProcessQUICAllocbindResponse:(id)a0 candidatePair:(id)a1;
- (void)_processCommandRelayInterfaceInfo:(id)a0 candidatePairToken:(id)a1;
- (void)_processReceivedRemoteCandidatePairs:(id)a0;
- (BOOL)_processRegisterAckResponse:(id)a0 candidatePairToken:(id)a1;
- (BOOL)_processRegisterIndication:(id)a0 candidatePairToken:(id)a1;
- (BOOL)_processRegisterResponse:(id)a0 candidatePairToken:(id)a1;
- (BOOL)_processReliableUnicastRegistrationErrorResponse:(id)a0 packetBuffer:(struct { char *x0; unsigned long long x1; long long x2; long long x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; unsigned int x16; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x17; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x18; struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } x19; unsigned short x20; unsigned char x21; int x22; struct { char *x0; unsigned short x1; int x2; unsigned short x3[12]; unsigned long long x4; unsigned char x5; unsigned short x6; unsigned char x7; BOOL x8; BOOL x9; unsigned short x10; struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } x11; BOOL x12; BOOL x13; int x14; unsigned short x15[4]; unsigned char x16; BOOL x17; BOOL x18; BOOL x19; unsigned int x20; } x23[8]; char x24; char x25; int x26; double x27; unsigned char x28[16]; unsigned long long x29; unsigned long long x30; id x31; int x32; unsigned int x33; unsigned short x34; unsigned char x35[0]; } *)a1 startTime:(double)a2 candidatePair:(id)a3;
- (BOOL)_processRemovedLocalAddressList:(id)a0;
- (void)_sendConnectionDataWithRemovedAddressList:(id)a0;
- (void)_sendQUICRegisterAckRequest:(id)a0 withOptions:(id)a1;
- (void)_sendQUICRegisterRequest:(id)a0 withOptions:(id)a1;
- (void)_sendRegisterRequest:(id)a0;
- (void)_sendRelayInterfaceInfo:(id)a0;
- (BOOL)_setupNewQRLinkIfNecessary:(id)a0;
- (void)_setupVirtualCandidatePairs:(id)a0 remoteCandidatePair:(id)a1;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (void)enableUPlusOneSessionForTransition:(BOOL)a0;
- (void)manageDesignatedDestinations:(id)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 withType:(unsigned short)a3 sessionStateCounter:(unsigned int)a4;
- (void)receiveJoinNotificationFromAParticipant;
- (void)removeParticipantIDs:(id)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 sessionStateCounter:(unsigned int)a3;
- (void)sendKeyMaterialMessageData:(id)a0 relayGroupID:(id)a1 destinationURIs:(id)a2 completionHandler:(id /* block */)a3;
- (void)setAllowP2P:(BOOL)a0;
- (void)setDefaultUnderlyingLink:(char)a0;
- (void)setIsReliableUnicastSession:(BOOL)a0;
- (void)setIsUPlusOneSession:(BOOL)a0;
- (void)setParticipantType:(unsigned short)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 sessionStateCounter:(unsigned int)a3;
- (void)setSharedSessionHasJoined:(BOOL)a0;
- (void)setTimeBase:(id)a0;
- (void)updateURIToParticipantIDs:(id)a0 relaySessionID:(id)a1 sessionInfo:(id)a2;

@end
