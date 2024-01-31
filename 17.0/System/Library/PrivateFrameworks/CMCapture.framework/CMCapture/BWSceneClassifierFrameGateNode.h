@interface BWSceneClassifierFrameGateNode : BWNode {
    BOOL _discardsBlurryFrames;
    int _maxFrameRate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedPTS;
    int _inputFrameCount;
}

+ (void)initialize;

- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (BOOL)discardsBlurryFrames;
- (id)initWithMaxOutputFrameRate:(int)a0;
- (void)setDiscardsBlurryFrames:(BOOL)a0;

@end
