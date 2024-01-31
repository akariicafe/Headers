@class NSArray, NSDictionary, NSURL, SSRSpeakerRecognitionContext, NSObject;
@protocol SSRSpeakerAnalyzerSATDelegate, OS_dispatch_queue;

@interface SSRSpeakerAnalyzerSAT : NSObject {
    void *_novDetect;
    unsigned long long _numSamplesProcessed;
    BOOL _triggerPhraseDetectedOnTap;
}

@property (weak, nonatomic) id<SSRSpeakerAnalyzerSATDelegate> delegate;
@property (retain, nonatomic) NSURL *configFilePath;
@property (retain, nonatomic) NSURL *resourceFilePath;
@property (retain, nonatomic) SSRSpeakerRecognitionContext *context;
@property (retain, nonatomic) NSDictionary *voiceProfilesModelFilePaths;
@property (retain, nonatomic) NSDictionary *voiceProfilesExpModelFilePaths;
@property (retain, nonatomic) NSArray *satScorers;
@property (retain, nonatomic) NSDictionary *scoreCard;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *desRecordQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endAudio;
- (id)resetForNewRequest;
- (id)_updateScoreCardForFinalResult:(BOOL)a0;
- (id)_getAnalyzedResult;
- (id)_getSuperVectorWithEndPoint:(unsigned long long)a0;
- (id)_processSuperVector:(id)a0 withSize:(unsigned long long)a1 processedAudioDurationMs:(unsigned long long)a2 isFinal:(BOOL)a3;
- (id)getVoiceRecognizerResults;
- (id)initWithVoiceRecognitionContext:(id)a0 delegate:(id)a1;
- (void)processAudioData:(id)a0 numSamples:(unsigned long long)a1;

@end
