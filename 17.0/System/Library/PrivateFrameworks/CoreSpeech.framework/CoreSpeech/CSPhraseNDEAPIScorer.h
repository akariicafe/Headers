@class NSString, CSKeywordAnalyzerNDEAPI, NSMutableData, CSShadowMicScoreCreator;
@protocol CSPhraseNDEAPIScorerDelegate;

@interface CSPhraseNDEAPIScorer : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate>

@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI;
@property (nonatomic) BOOL hasReceivedNDEAPIResult;
@property (retain, nonatomic) CSShadowMicScoreCreator *shadowMicScoreCreator;
@property (retain, nonatomic) NSMutableData *dataBufferNDEAPI;
@property (nonatomic) unsigned long long dataBufferPositionNDEAPI;
@property (nonatomic) unsigned char hasReceivedEarlyDetectNDEAPIResult;
@property (weak, nonatomic) id<CSPhraseNDEAPIScorerDelegate> delegate;
@property (readonly, nonatomic) float shadowMicScoreThresholdForVAD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void).cxx_destruct;
- (void)keywordAnalyzerNDEAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (id)_rtModelFromAsset:(id)a0 requestOptions:(id)a1 forSiriLanguage:(id)a2 withPhraseCount:(unsigned long long)a3;
- (double)currentShadowMicScore;
- (id)initWithAsset:(id)a0 assetConfig:(id)a1 firstPassSource:(unsigned long long)a2 activeChannel:(unsigned long long)a3 siriLanguage:(id)a4 shouldEnableShadowMicScore:(BOOL)a5 rtmodelRequestOptions:(id)a6;
- (void)processAudioChunk:(id)a0 activeChannel:(unsigned long long)a1;

@end
