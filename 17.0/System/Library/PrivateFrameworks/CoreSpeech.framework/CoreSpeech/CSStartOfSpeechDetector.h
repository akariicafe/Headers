@class EARCaesuraSilencePosteriorGenerator, NSString, NSObject;
@protocol OS_dispatch_queue, CSStartOfSpeechDetectorDelegate;

@interface CSStartOfSpeechDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>

@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (retain, nonatomic) NSString *configFile;
@property (nonatomic) BOOL startDetected;
@property (nonatomic) unsigned long long minSpeechFrames;
@property (nonatomic) unsigned long long curSpeechFrames;
@property (nonatomic) unsigned long long numLeadingFrames;
@property (nonatomic) float prevAudioProcessedMs;
@property (nonatomic) unsigned long long samplingRate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sosQueue;
@property (weak, nonatomic) id<CSStartOfSpeechDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endAudio;
- (void)clientSilenceFeaturesAvailable:(id)a0;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (void)resetForNewRequest;
- (id)initWithConfig:(id)a0 samplingRate:(unsigned long long)a1 minSpeechFrames:(unsigned long long)a2 numLeadingFrames:(unsigned long long)a3 delegate:(id)a4;

@end
