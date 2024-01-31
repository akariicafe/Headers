@class BWNodeInput, BWNodeOutput;

@interface BWAudioSplitNode : BWNode {
    unsigned int _splitAtIndex;
    unsigned int _inputNumberOfChannels;
    unsigned int _inputChannelLayoutTag;
    unsigned int _output1ChannelLayoutTag;
    unsigned int _output2ChannelLayoutTag;
    BWNodeInput *_input;
    BWNodeOutput *_output1;
    BWNodeOutput *_output2;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (id)initWithInputChannelLayoutTag:(unsigned int)a0 output1ChannelLayoutTag:(unsigned int)a1 output2ChannelLayoutTag:(unsigned int)a2;

@end
