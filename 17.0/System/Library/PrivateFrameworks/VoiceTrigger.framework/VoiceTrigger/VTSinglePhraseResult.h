@class VTKeywordAnalyzerNDAPIResult;

@interface VTSinglePhraseResult : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long phId;
@property (readonly, nonatomic) unsigned long long decision;
@property (readonly, nonatomic) float combinedScore;
@property (readonly, nonatomic) float ndapiScore;
@property (readonly, nonatomic) VTKeywordAnalyzerNDAPIResult *ndapiResult;
@property (readonly, nonatomic) float recognizerScore;
@property (readonly, nonatomic) BOOL isSecondChance;
@property (readonly, nonatomic) BOOL isSecondChanceCandidate;
@property (readonly, nonatomic) BOOL isRunningQuasar;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhId:(unsigned long long)a0 keywordDetectorDecision:(unsigned long long)a1 combinedScore:(float)a2 ndapiScore:(float)a3 ndapiResult:(id)a4 recognizerScore:(float)a5 isSecondChance:(BOOL)a6 isSecondChanceCandidate:(BOOL)a7 isRunningQuasar:(BOOL)a8;

@end
