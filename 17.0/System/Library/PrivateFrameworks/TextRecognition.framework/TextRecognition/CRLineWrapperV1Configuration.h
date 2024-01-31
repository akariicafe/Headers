@interface CRLineWrapperV1Configuration : NSObject

@property (readonly) float probabilityThreshold;
@property float heightSimilarityRatio;
@property float angleSimilarityThreshold;
@property int lmContextSize;
@property float oversegmentedDistanceHeightRatioTolerance;
@property float oversegmentedDistanceHeightRatioListItemTolerance;
@property float newParagraphIndentDistanceRatioTolerance;
@property float widthGrowthLimit;
@property long long wrappingEvaluationThreshold;
@property long long noWrappingEvaluationThreshold;
@property long long caseWrappingScoreWithNoCapitalization;
@property long long punctuationWrappingScoreWithEndingMOS;
@property long long punctuationWrappingScoreWithNoClosingPunctuation;
@property float smallestVerticalDistanceHeightRatio;
@property float maximumVerticalDistanceGrowthRatio;
@property long long correctionMode;
@property float confidenceThreshold;
@property float contextConfidenceThreshold;
@property double lmScoreThreshold;
@property double lmScoreEOSMinRatio;
@property unsigned long long tokenCountIncreaseLimit;

+ (long long)_correctionModeFromString:(id)a0;

- (id)initWithLocale:(id)a0;
- (id)description;
- (id)initWithLocale:(id)a0 useStrictConfig:(BOOL)a1;

@end
