@interface PHAMetricsHelper : NSObject

+ (id)aggregatedStatsForMiroMoodCountVector:(id)a0;
+ (id)aggregatedStatsForMoodKeywordCountedSet:(id)a0;
+ (id)aggregatedStatsForPossibleMoodCountVector:(id)a0;
+ (id)aggregatedStatsForSuggestedMoodCountVector:(id)a0;
+ (id)dataAggregationKeyForCategory:(unsigned long long)a0 subCategory:(unsigned long long)a1 lookupTable:(id)a2;
+ (id)fullMemoryTypeStringForMemory:(id)a0 withWorkingContext:(id)a1;
+ (id)legacyMemoryCategoryValueToDataAggregationKeyLookup;
+ (id)memoryBlockableFeatureTypeValueToDataAggregationKeyLookup;
+ (id)memoryBlockedFeatureTypeValueToDataAggregationKeyLookup;
+ (id)memoryCategoryValueToDataAggregationKeyLookup;
+ (BOOL)shouldAggregateDataForReporting:(unsigned long long)a0;

@end
