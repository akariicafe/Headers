@class NWEndpoint, NSDate, NSMutableArray, NWUDPSession;

@interface NPTunnelFlowUDP : NPTunnelFlowProtocol

@property (retain) NSMutableArray *savedDirectData;
@property unsigned long long savedDataSize;
@property (retain) NWUDPSession *directSession;
@property (retain) NSDate *firstPacketDate;
@property (readonly) NWEndpoint *remoteEndpoint;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)handleAppData:(id)a0;
- (void)handleIncomingData:(id)a0 andError:(id)a1;
- (id)initWithTunnel:(id)a0 appRule:(id)a1 inputProtocol:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a2 extraProperties:(id)a3;
- (void)sendDataOnDirectSession:(id)a0;
- (void)startDirectConnection;
- (void)startHandlingIncomingData;
- (void)stopDirectConnection;

@end
