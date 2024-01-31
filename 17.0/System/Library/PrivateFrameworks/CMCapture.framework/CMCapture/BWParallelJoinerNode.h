@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode {
    int _inputsCount;
    NSMutableDictionary *_receivedBuffers;
    NSMutableDictionary *_sentErrorCountForID;
}

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithNumberOfInputs:(int)a0 mediaType:(unsigned int)a1;

@end
