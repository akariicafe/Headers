@class PGOverTheYearsMemoryConfiguration, PGGraphROINodeCollection, PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGChildOutdoorMemoryGenerator : PGOverTimeMemoryGenerator {
    PGGraphROINodeCollection *_outdoorROINodes;
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    unsigned long long _minimumNumberOfDefaultMemories;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGOverTheYearsMemoryConfiguration *_fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_fallbackFeaturedYearConfiguration;
}

- (void).cxx_destruct;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)fallbackFeaturedYearConfiguration;
- (id)fallbackOverTheYearsConfiguration;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)a0;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (unsigned long long)minimumNumberOfDefaultMemories;
- (id)momentRequirements;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)a0 featureNodes:(id)a1;
- (id)outdoorROINodesInGraph:(id)a0;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (void)setMinimumNumberOfDefaultMemories:(unsigned long long)a0;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
