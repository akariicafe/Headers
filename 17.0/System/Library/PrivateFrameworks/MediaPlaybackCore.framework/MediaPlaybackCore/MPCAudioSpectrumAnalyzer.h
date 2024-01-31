@class NSString, _MPCAudioSpectrumAnalyzerStorage, MPCProcessAudioTap, MPCPlaybackEngine, NSMutableArray, NSNumber;

@interface MPCAudioSpectrumAnalyzer : NSObject <MPCPlaybackEngineEventObserving, MPCProcessAudioTapDelegate> {
    struct opaqueMTAudioProcessingTap { } *_audioProcessingTap;
    struct OpaqueAudioQueue { } *_processingQueue;
    struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *_aqBuffer;
}

@property (retain, nonatomic) _MPCAudioSpectrumAnalyzerStorage *storage;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) MPCProcessAudioTap *processAudioTap;
@property (retain, nonatomic) MPCAudioSpectrumAnalyzer *selfRef;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, copy, nonatomic) NSNumber *refreshRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)engine:(id)a0 didChangeToState:(unsigned long long)a1;
- (id)initWithPlaybackEngine:(id)a0;
- (void)_analyzeSamples:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberFrames:(long long)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_analyzeAudioData:(void *)a0 numberOfFrames:(unsigned int)a1;
- (void)_destroyQueueTap;
- (void)_createProcessTap;
- (BOOL)_shouldAttachAudioTap;
- (void)unregisterObserver:(id)a0;
- (id)initWithPlaybackEngine:(id)a0 refreshRate:(id)a1;
- (void)processAudioTapDidReceiveAudioSamples:(void *)a0 numberOfSamples:(unsigned int)a1;
- (void)_createQueueTap;
- (void)_destroyAudioTap;
- (void).cxx_destruct;
- (void)_createAudioTap;
- (void)_prepareTap:(struct opaqueMTAudioProcessingTap { } *)a0 maxFrames:(long long)a1 processingFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (void)_resetObservers;
- (void)addObserver:(id)a0;
- (void)configurePlayerItem:(id)a0;
- (void)_destroyProcessTap;

@end
