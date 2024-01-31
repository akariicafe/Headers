@class PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGChildAndPersonMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    BOOL _intersectRelevantAssetsForFeatures;
    unsigned long long _minimumNumberOfDefaultMemories;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGOverTheYearsMemoryConfiguration *_fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_fallbackFeaturedYearConfiguration;
}

- (void).cxx_destruct;
- (id)_twoPersonNodeCollectionsFromSocialGroupMemoryNodesInGraph:(id)a0;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)fallbackFeaturedYearConfiguration;
- (id)fallbackOverTheYearsConfiguration;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)a0;
- (BOOL)intersectRelevantAssetsForFeatures;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (unsigned long long)minimumNumberOfDefaultMemories;
- (id)momentRequirements;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (void)setMinimumNumberOfDefaultMemories:(unsigned long long)a0;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
