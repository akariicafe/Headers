@class NSNumber, AVAudioFile, TTSSynthesisProviderRequestHandler, AVAudioFormat, AVAudioEngine, AVAudioUnit, NSObject;
@protocol TTSSynthesisProviderAudioOutput, OS_dispatch_queue, TTSSynthesisProviderAudioEngineProtocol;

@interface TTSSynthesisProviderAudioEngine : NSObject <TTSSynthesisProviderHandlerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestDispatchLock;
}

@property (retain, nonatomic) NSObject<TTSSynthesisProviderAudioOutput> *offlineToRealtimePlayer;
@property (retain, nonatomic) AVAudioFile *file;
@property (retain, nonatomic) AVAudioUnit *avAudioUnit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deferredStateChangeQueue;
@property (nonatomic) unsigned long long playerState;
@property (nonatomic) unsigned long long deferredPlayerState;
@property (copy, nonatomic) id /* block */ deferredReplyBlock;
@property (retain, nonatomic) AVAudioEngine *offlineEngine;
@property (retain, nonatomic) NSNumber *audioUnitObservedToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *offlineRenderingQueue;
@property (retain, nonatomic) TTSSynthesisProviderRequestHandler *currentRequestHandler;
@property (copy, nonatomic) id /* block */ markerBlock;
@property (copy) id /* block */ bufferCallback;
@property (nonatomic) BOOL isSynthesizingSilently;
@property (nonatomic) BOOL offlineRenderingInProgress;
@property (nonatomic) BOOL didCustomizeParameters;
@property (weak, nonatomic) id<TTSSynthesisProviderAudioEngineProtocol> delegate;
@property (readonly) AVAudioFormat *audioUnitOutputFormat;

+ (void)safelyCallStartCompletionForRequest:(id)a0 didStart:(BOOL)a1;

- (id)init;
- (void)dealloc;
- (id)audioUnit;
- (void).cxx_destruct;
- (void)continueSpeechRequest:(id /* block */)a0;
- (void)_finishRequestRendering;
- (void)_handleMarkerPlayback:(id)a0 forRequest:(id)a1;
- (void)_pausePlaying;
- (void)_safelyCallDeferredReplyBlock;
- (BOOL)_setupAudioUnitForVoice:(id)a0;
- (BOOL)_setupAudioUnitForVoice:(id)a0 speechSource:(id)a1;
- (BOOL)_setupOfflineEngine;
- (BOOL)_startPlaying;
- (void)_stopPlaying;
- (id)audioUnitOutputBus;
- (void)didGeneratePlayableBuffers:(id)a0 forRequest:(id)a1;
- (BOOL)isSpeechActive;
- (float)markerByteOffsetScalingFactor;
- (void)pauseAtMark:(long long)a0 reply:(id /* block */)a1;
- (void)pauseImmediately:(id /* block */)a0;
- (void)playBuffers:(id)a0 forRequest:(id)a1;
- (void)prewarmAudioUnitForVoice:(id)a0;
- (void)receivedMarkers:(id)a0 forRequest:(id)a1;
- (void)renderSpeechRequest:(id)a0;
- (void)renderWithObserver:(id /* block */)a0 renderChunkSize:(unsigned int)a1;
- (void)startSynthesizingSpeechRequest:(id)a0 reply:(id /* block */)a1;
- (void)startSynthesizingSpeechRequest:(id)a0 withBufferCallback:(id /* block */)a1 silently:(BOOL)a2 reply:(id /* block */)a3;
- (void)stopAtMark:(long long)a0 reply:(id /* block */)a1;
- (void)stopImmediately:(id /* block */)a0;

@end
