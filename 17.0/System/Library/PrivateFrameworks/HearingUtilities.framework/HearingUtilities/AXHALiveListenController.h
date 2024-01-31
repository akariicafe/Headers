@class AVAudioSession, AXDispatchTimer;
@protocol AXHALiveListenDelegate;

@interface AXHALiveListenController : NSObject {
    float _noise;
    float _signal;
    struct OpaqueExtAudioFile { } *_debugAudioFile;
}

@property (nonatomic) BOOL didInitializeAudioUnit;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (nonatomic) BOOL waitingForAccessoryUpdate;
@property (retain, nonatomic) AXDispatchTimer *accessoryUpdateTimer;
@property (retain, nonatomic) AVAudioSession *session;
@property (weak, nonatomic) id<AXHALiveListenDelegate> delegate;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *rioUnit;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *mixerUnit;
@property (nonatomic) BOOL isListening;

- (id)init;
- (void)dealloc;
- (float)audioLevel;
- (void)mediaServicesWereReset:(id)a0;
- (void).cxx_destruct;
- (void)audioRouteDidChange:(id)a0;
- (void)audioSessionWasInterrupted:(id)a0;
- (struct OpaqueExtAudioFile { } *)debugAudioFile;
- (BOOL)startListeningWithError:(id *)a0;
- (BOOL)stopListeningWithError:(id *)a0;

@end
