@class DYMTLCommonDebugFunctionPlayer;
@protocol MTLBuffer;

@interface DYMTLPostVertexDump : NSObject {
    DYMTLCommonDebugFunctionPlayer *_player;
    unsigned long long _reflectionSizeAligned256;
    unsigned long long _reflectionPostVertexDumpStride;
}

@property (readonly, nonatomic) id<MTLBuffer> postVertexDumpBuffer;

+ (id)internalPipelineStateLabel;

- (void).cxx_destruct;
- (void)_reservePostVertexDumpBufferWithLength:(unsigned long long)a0;
- (BOOL)createAndSetPostVertexDumpPipelineState:(unsigned long long)a0 commandEncoderId:(unsigned long long)a1 pipelineId:(unsigned long long)a2;
- (id)initWithDebugFunctionPlayer:(id)a0;
- (void)notifyReplayerTargetCommandBuffersFinished;

@end
