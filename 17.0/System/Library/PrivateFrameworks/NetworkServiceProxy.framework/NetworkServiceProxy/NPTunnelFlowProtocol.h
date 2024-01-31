@class NSObject;
@protocol OS_dispatch_data;

@interface NPTunnelFlowProtocol : NPTunnelFlow {
    BOOL _disconnectedByTunnel;
    NSObject<OS_dispatch_data> *_inputBuffer;
    BOOL _discardFirstData;
    BOOL _connectedOnTunnelReadyForData;
    BOOL _connectedOnInitialData;
}

@property (readonly, nonatomic) struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *inputProtocol;
@property (readonly, nonatomic) BOOL waitingForOutput;

- (void)disconnect;
- (BOOL)connect;
- (void).cxx_destruct;
- (BOOL)addBufferToFrameArray:(struct nw_frame_array_s { struct nw_frame *x0; struct nw_frame **x1; } *)a0 bufferSize:(unsigned long long)a1;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s { struct nw_frame *x0; struct nw_frame **x1; } *)a0 limitMinimumBytes:(unsigned int)a1 limitMaximumBytes:(unsigned int)a2 limitMaximumFrames:(unsigned int)a3;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s { struct nw_frame *x0; struct nw_frame **x1; } *)a0 limitMinimumBytes:(unsigned int)a1 limitMaximumBytes:(unsigned int)a2 limitMaximumFrames:(unsigned int)a3;
- (void)closeClientFlowWithError:(int)a0;
- (void)dropInputProtocol;
- (void)handleAppData:(id)a0;
- (void)handleOutputFrame:(id)a0 send:(BOOL)a1;
- (void)handleTunnelReadyForData;
- (id)initWithTunnel:(id)a0 appRule:(id)a1 inputProtocol:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a2 extraProperties:(id)a3;
- (BOOL)isClientFlowClosed;
- (void)notifyClientConnected;
- (void)readDataFromClient;
- (void)sendDataToClient:(id)a0 fromTunnel:(BOOL)a1;

@end
