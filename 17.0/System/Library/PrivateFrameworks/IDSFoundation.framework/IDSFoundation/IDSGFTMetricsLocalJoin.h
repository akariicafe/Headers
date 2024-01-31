@interface IDSGFTMetricsLocalJoin : IDSGFTMetricsReferencePoint

@property BOOL didJoin;

- (void)allocbindResponseFromInterface:(id)a0;
- (void)connectQRServer;
- (void)firstIncomingPacketTime:(double)a0 forMKI:(id)a1;
- (void)globalLinkStart;
- (void)firstOutgoingPacketTime:(double)a0 forMKI:(id)a1;
- (void)allocbindResponseForProtocolStack:(id)a0;
- (void)avcReceiveMKMTime:(double)a0 forMKI:(id)a1 isGeneratedLocally:(BOOL)a2;
- (void)clientChannelConnected;
- (void)didConnectUnderlyingE2ELink;
- (void)didConnectUnderlyingRelayLink;
- (void)didCreateMKM:(id)a0;
- (void)didSendJoin;
- (void)join;
- (void)linkConnectedUsingFakeTLS;
- (void)linkConnectedUsingHTTP2;
- (void)linkConnectedUsingQUIC;
- (void)linkConnectedUsingTCPSTUN;
- (void)linkConnectedWithH2FallbackEnabled:(BOOL)a0;
- (void)participantIdChanged;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)selectedLocalInterface:(id)a0;
- (void)sendAllocationRequest;
- (void)sendMKMToAVC:(id)a0 isGeneratedLocally:(BOOL)a1;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)willSendAllocbindRequestThroughInterface:(id)a0;
- (void)willSendJoin;

@end
