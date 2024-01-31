@interface PGOverTimeMemoryConfiguration : NSObject

@property (nonatomic) unsigned long long minimumNumberOfMoments;
@property (nonatomic) unsigned long long minimumNumberOfMomentsInterestingWithAlternateJunking;
@property (nonatomic) unsigned long long minimumNumberOfMomentsInterestingForMemories;
@property (nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (nonatomic) unsigned long long minimumNumberOfRelevantAssets;
@property (nonatomic) double aboveMomentAverageContentScoreThreshold;
@property (nonatomic) double minimumOverallTimeIntervalOfMoments;
@property (nonatomic) double minimumMomentSpreadicityTimeInterval;
@property (nonatomic) BOOL allMomentsMustHaveScenesProcessed;
@property (nonatomic) BOOL allMomentsMustHaveFacesProcessed;

@end
