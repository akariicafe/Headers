@class NSString, EARCaesuraSilencePosteriorGenerator, SSRSpeakerRecognitionContext, _EARDefaultServerEndpointFeatures, _EAREndpointer, NSObject;
@protocol OS_dispatch_queue, SSRVoiceActivityDetectorDelegate;

@interface SSRVoiceActivityDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {
    unsigned long long _numConsecutiveNonSilenceFrames;
}

@property (retain, nonatomic) SSRSpeakerRecognitionContext *context;
@property (weak, nonatomic) id<SSRVoiceActivityDetectorDelegate> delegate;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *earSpg;
@property (retain, nonatomic) _EAREndpointer *hybridClassifier;
@property (retain, nonatomic) _EARDefaultServerEndpointFeatures *defSepFeats;
@property (nonatomic) long long segmentStartPointSampleCount;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) BOOL endpointReported;
@property (nonatomic) BOOL startpointReported;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endAudio;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)clientSilenceFeaturesAvailable:(id)a0;
- (void)resetWithContext:(id)a0;
- (void)_initializeSPGWithContext:(id)a0;
- (void)processAudioData:(id)a0 numSamples:(unsigned long long)a1;

@end
