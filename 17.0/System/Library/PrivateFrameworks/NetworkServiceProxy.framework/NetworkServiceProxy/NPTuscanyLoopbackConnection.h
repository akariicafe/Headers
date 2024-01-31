@interface NPTuscanyLoopbackConnection : NSObject {
    unsigned long long _blobSizes[4];
    struct nw_protocol { unsigned char flow_id[16]; struct nw_protocol_identifier *identifier; struct nw_protocol_callbacks *callbacks; struct nw_protocol *output_handler; void *handle; struct nw_protocol *default_input_handler; void *output_handler_context; } _protocol;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } _currentInputFrames;
}

@property (readonly) struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol;
@property unsigned long long currentBlobSizeIndex;
@property BOOL waitingForOutput;

- (id)init;
- (void)dealloc;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s { struct nw_frame *x0; struct nw_frame **x1; } *)a0 maximumBytes:(unsigned int)a1 minimumBytes:(unsigned int)a2 maximumFrameCount:(unsigned int)a3;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s { struct nw_frame *x0; struct nw_frame **x1; } *)a0 maximumBytes:(unsigned int)a1 minimumBytes:(unsigned int)a2 maximumFrameCount:(unsigned int)a3;
- (void)handleDetachedFromProtocol;
- (void)handleOutputFrame:(id)a0;
- (void)notifyInputHandler;

@end
