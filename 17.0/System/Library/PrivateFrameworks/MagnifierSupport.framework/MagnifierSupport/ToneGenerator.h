@class NSTimer, AVAudioMixerNode, CHHapticEngine, NSURL, AVAudioPlayerNode, AVAudioPCMBuffer, NSObject, AVAudioEngine;
@protocol OS_dispatch_queue;

@interface ToneGenerator : NSObject {
    BOOL _useSoundFeedback;
    BOOL _useHapticFeedback;
    NSObject<OS_dispatch_queue> *_hapticQueue;
}

@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioMixerNode *mixer;
@property (retain, nonatomic) AVAudioPCMBuffer *buffer;
@property (nonatomic) double pulseDuration;
@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property BOOL hapticEngineStarted;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) double minPulseFrequency;
@property (readonly, nonatomic) double maxPulseFrequency;
@property (readonly, nonatomic) float minPitchFactor;
@property (readonly, nonatomic) float maxPitchFactor;
@property (nonatomic) double pulseFrequency;
@property (nonatomic) float volume;
@property (nonatomic) float leftBalance;
@property (nonatomic) float rightBalance;
@property (nonatomic) float pitchFactor;
@property (retain, nonatomic) NSURL *audioFileURL;
@property (nonatomic) BOOL useSoundFeedback;
@property (nonatomic) BOOL useHapticFeedback;
@property (nonatomic) unsigned long long detectionType;

- (void)pause;
- (id)init;
- (void).cxx_destruct;
- (id)configureAudioEngineWithError:(id *)a0;
- (id)configureHapticPlayerWithVolume:(float)a0 duration:(double)a1 error:(id *)a2;
- (void)configurePlayerWithPitchFactor:(float)a0 leftBalance:(float)a1 rightBalance:(float)a2 volume:(float)a3 loop:(BOOL)a4;
- (void)playHapticsWithVolume:(float)a0 pulseDuration:(double)a1;
- (void)playOnePulse;
- (void)playSoundWithPitchFactor:(float)a0 leftBalance:(float)a1 rightBalance:(float)a2 volume:(float)a3 loop:(BOOL)a4;
- (void)startPulse;
- (void)stopPulse;

@end
