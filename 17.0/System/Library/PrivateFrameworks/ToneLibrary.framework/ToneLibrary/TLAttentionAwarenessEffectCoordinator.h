@class TLAttentionAwarenessEffectProcessor, AVAudioSession, NSMutableSet;

@interface TLAttentionAwarenessEffectCoordinator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_effectAudioTapContexts;
    struct { BOOL shouldBypassLowPassFilter; float volumeForLowPassFilterGlobalGain; float effectMix; } _effectParameters;
    TLAttentionAwarenessEffectProcessor *_effectProcessor;
}

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) struct { BOOL x0; float x1; float x2; } effectParameters;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)a0;
- (void)_prepareAudioProcessingWithEffectAudioTapContext:(id)a0 maximumNumberOfFrames:(unsigned int)a1 processingFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (void)_processAudioWithEffectAudioTapContext:(id)a0 bufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 numberOfFramesRequested:(unsigned int)a2 numberOfFramesToProcess:(unsigned int)a3;
- (void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)a0;
- (id)audioMixForAsset:(id)a0;
- (id)initWithEffectParameters:(struct { BOOL x0; float x1; float x2; })a0 audioSession:(id)a1;
- (void)setEffectParameters:(struct { BOOL x0; float x1; float x2; })a0 effectMixFadeDuration:(double)a1;

@end
