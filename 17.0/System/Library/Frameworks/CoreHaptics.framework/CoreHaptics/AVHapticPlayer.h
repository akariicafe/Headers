@class NSArray, NSMutableArray, AVHapticClient;

@interface AVHapticPlayer : NSObject {
    NSMutableArray *_channelArray;
    id /* block */ _connectionErrorHandler;
}

@property (readonly) AVHapticClient *client;
@property (readonly) BOOL resourcesAllocated;
@property (copy) id /* block */ stopRunningHandler;
@property (nonatomic) unsigned long long behavior;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly) double currentMediaTime;
@property (readonly) double hapticLatency;
@property (copy) id /* block */ connectionErrorHandler;

+ (BOOL)isSupported;
+ (BOOL)supportsAudio;
+ (BOOL)supportsHaptics;

- (void)dealloc;
- (void)stopPrewarm;
- (void).cxx_destruct;
- (void)prewarmWithCompletionHandler:(id /* block */)a0;
- (void)stopRunning;
- (void)deallocateRenderResources;
- (void)releaseChannels;
- (BOOL)copyCustomAudioEvent:(unsigned long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (BOOL)createCustomAudioEvent:(id)a0 format:(id)a1 frames:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (BOOL)loadHapticEvent:(id)a0 reply:(id /* block */)a1;
- (BOOL)referenceCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)releaseCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)addChannel:(id *)a0;
- (void)allocateRenderResourcesWithCompletionHandler:(id /* block */)a0;
- (BOOL)clearSequenceEvents:(unsigned long long)a0 atTime:(double)a1;
- (id)createOptionsFromAudioSessionID:(unsigned int)a0 shared:(BOOL)a1;
- (void)detachHapticSequence:(unsigned long long)a0;
- (BOOL)doInitWithOptions:(id)a0 error:(id *)a1;
- (BOOL)enableSequenceLooping:(unsigned long long)a0 enable:(BOOL)a1 error:(id *)a2;
- (void)expectNotifyAfter:(double)a0;
- (BOOL)finishWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)getBehavior;
- (id)initWithSessionID:(unsigned int)a0 error:(id *)a1;
- (id)initWithSessionID:(unsigned int)a0 sessionIsShared:(BOOL)a1 error:(id *)a2;
- (void)invalidateChannels;
- (BOOL)loadAndPrepareHapticSequenceFromData:(id)a0 reply:(id /* block */)a1;
- (BOOL)loadAndPrepareHapticSequenceFromEvents:(id)a0 reply:(id /* block */)a1;
- (BOOL)loadAndPrepareHapticSequenceFromVibePattern:(id)a0 reply:(id /* block */)a1;
- (BOOL)pauseHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (BOOL)playHapticSequence:(unsigned long long)a0 atTime:(double)a1 offset:(double)a2;
- (BOOL)prepareHapticSequence:(unsigned long long)a0 error:(id *)a1;
- (void)queryServerCapabilities:(id)a0 reply:(id /* block */)a1;
- (BOOL)removeChannel:(id)a0 error:(id *)a1;
- (BOOL)resetHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (BOOL)resumeHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (BOOL)seekHapticSequence:(unsigned long long)a0 toTime:(double)a1;
- (BOOL)sendUnduckAudioCommand:(unsigned long long)a0 atTime:(double)a1;
- (BOOL)setBehavior:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setNumberOfChannels:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setSequenceChannelParam:(unsigned long long)a0 atTime:(double)a1 channel:(unsigned long long)a2 param:(unsigned long long)a3 value:(float)a4 error:(id *)a5;
- (BOOL)setSequenceLoopLength:(unsigned long long)a0 length:(float)a1 error:(id *)a2;
- (BOOL)setSequencePlaybackRate:(unsigned long long)a0 rate:(float)a1 error:(id *)a2;
- (void)startRunningWithCompletionHandler:(id /* block */)a0;
- (BOOL)stopHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (void)stopRunningWithCompletionHandler:(id /* block */)a0;

@end
