@interface PGCityMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator

+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;

@end
