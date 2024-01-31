@class PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGFoodieMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}

+ (id)incompatibleMomentNodesInGraph:(id)a0;

- (void).cxx_destruct;
- (id)_foodieTitleGeneratorWithMomentNodes:(id)a0 featureNodes:(id)a1 titleGenerationContext:(id)a2;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)a0;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)momentRequirements;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
