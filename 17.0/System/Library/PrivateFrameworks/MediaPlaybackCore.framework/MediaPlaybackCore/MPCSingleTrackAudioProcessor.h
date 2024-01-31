@class MPCPlaybackEngine;
@protocol MPCSingleTrackAudioProcessing;

@interface MPCSingleTrackAudioProcessor : NSObject <MPCSingleTrackAudioProcessing> {
    struct opaqueMTAudioProcessingTap { } *_audioProcessingTap;
}

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (retain, nonatomic) id<MPCSingleTrackAudioProcessing> selfRef;

- (id)initWithPlaybackEngine:(id)a0;
- (void)dealloc;
- (void)_destroyAudioTap;
- (void).cxx_destruct;
- (void)_createAudioTap;
- (unsigned int)creationFlags;
- (BOOL)configureQueueItem:(id)a0;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap { } *)a0;
- (void)prepareTap:(struct opaqueMTAudioProcessingTap { } *)a0 maxFrames:(long long)a1 processingFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (void)processTap:(struct opaqueMTAudioProcessingTap { } *)a0 sampleIndex:(long long)a1 numberFrames:(long long)a2 flags:(unsigned int)a3 audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4 numberFramesOut:(long long *)a5 flagsOut:(unsigned int *)a6;
- (void)recreateAudioTap;
- (BOOL)shouldAttachAudioTapToItem:(id)a0;
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap { } *)a0;

@end
