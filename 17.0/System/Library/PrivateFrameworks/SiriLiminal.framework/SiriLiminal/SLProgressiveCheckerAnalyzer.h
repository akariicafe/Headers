@class NSDictionary, SLProgressiveCheckerContext, CSAudioCircularBuffer, NSMutableArray;
@protocol SLProgressiveCheckerAnalyzerDelegate;

@interface SLProgressiveCheckerAnalyzer : NSObject {
    NSMutableArray *_activeRecognizers;
    SLProgressiveCheckerContext *_context;
    NSMutableArray *_checkerEndSamples;
    unsigned long long _analyzedSamplesSoFar;
    double _latestScore;
    id<SLProgressiveCheckerAnalyzerDelegate> _delegate;
    unsigned long long _checkerType;
    CSAudioCircularBuffer *_circBuffer;
    unsigned long long _numSamplesAddedToBufferSinceLastFlush;
    unsigned long long _numSamplesInStride;
    NSDictionary *_invocationToPhraseMap;
    BOOL _shouldUseMultiPhrasesCheckerOutput;
}

- (void).cxx_destruct;
- (void)endAudio;
- (void)addAudio:(id)a0;
- (BOOL)_setUpAnalyzerWithConfig:(id)a0 error:(id *)a1;
- (void)_addAudio:(id)a0;
- (void)_endAudio;
- (id)_getTokenByInvocationType:(id)a0;
- (void)_startNewRequestWithContext:(id)a0;
- (id)initWithConfig:(id)a0 withDelegate:(id)a1 error:(id *)a2;
- (void)startNewRequestWithContext:(id)a0;

@end
