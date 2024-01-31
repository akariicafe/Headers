@class NSArray, NSDictionary, PGOverTheYearsMemoryConfiguration, PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGMemoryConfiguration : PGConfiguration

@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) NSDictionary *memoryCategorySubcategoryByOverTimeType;
@property (readonly, nonatomic) NSArray *memoryFeatureSpecifications;
@property (readonly, nonatomic) BOOL intersectRelevantAssetsForFeatures;
@property (readonly, nonatomic) BOOL requireSceneProcessingMeetsThresholdOverTime;
@property (readonly, nonatomic) BOOL requireFaceProcessingMeetsThresholdOverTime;
@property (readonly, nonatomic) unsigned long long minimumSceneAnalysisVersion;
@property (readonly, nonatomic) PGMemoryMomentRequirements *memoryMomentRequirements;
@property (readonly, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration;

+ (id)featuredTimePeriodMemoryConfigurationFromDictionary:(id)a0;
+ (unsigned long long)memoryCategoryFromMemoryCategoryLabel:(id)a0;
+ (id)memoryCategorySubcategoryByOverTimeTypeFromLabels:(id)a0;
+ (id)memoryConfigurationsWithGraph:(id)a0 loggingConnection:(id)a1;
+ (id)memoryFeatureSpecificationsFromDictionaries:(id)a0 memoryConfigurationLabel:(id)a1 graph:(id)a2 loggingConnection:(id)a3;
+ (id)memoryMomentRequirementsFromDictionary:(id)a0;
+ (unsigned long long)minimumSceneAnalysisVersionForSignalModel:(long long)a0;
+ (id)overTheYearsMemoryConfigurationFromDictionary:(id)a0;
+ (id)resolveConfigurationDictionary:(id)a0 configurationLabel:(id)a1 graph:(id)a2 loggingConnection:(id)a3;

- (void).cxx_destruct;

@end
