@interface PGOverTimeMemoryConfigurationBuilder : PGConfiguration

@property (readonly, nonatomic) unsigned long long minimumNumberOfMoments;
@property (readonly, nonatomic) unsigned long long minimumNumberOfMomentsInterestingWithAlternateJunking;
@property (readonly, nonatomic) unsigned long long minimumNumberOfMomentsInterestingForMemories;
@property (readonly, nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (readonly, nonatomic) unsigned long long minimumNumberOfRelevantAssets;
@property (readonly, nonatomic) double aboveMomentAverageContentScoreThreshold;
@property (readonly, nonatomic) double minimumOverallTimeIntervalOfMoments;
@property (readonly, nonatomic) double minimumMomentSpreadicityTimeInterval;
@property (readonly, nonatomic) BOOL allMomentsMustHaveScenesProcessed;
@property (readonly, nonatomic) BOOL allMomentsMustHaveFacesProcessed;

@end
