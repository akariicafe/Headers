@interface PGMemoryMomentRequirementsBuilder : PGConfiguration

@property (readonly, nonatomic) BOOL filterUninterestingWithAlternateJunking;
@property (readonly, nonatomic) BOOL filterUninterestingForMemories;
@property (readonly, nonatomic) BOOL filterMomentsWithNotEnoughScenesProcessed;
@property (readonly, nonatomic) unsigned long long minimumNumberOfRelevantAssets;
@property (readonly, nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (readonly, nonatomic) double aboveContentScoreThreshold;
@property (readonly, nonatomic) unsigned long long minimumNumberOfPersons;

- (id)memoryMomentRequirements;

@end
