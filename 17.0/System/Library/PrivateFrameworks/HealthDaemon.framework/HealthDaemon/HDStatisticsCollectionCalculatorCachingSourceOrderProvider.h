@class NSArray, NSMutableDictionary;

@interface HDStatisticsCollectionCalculatorCachingSourceOrderProvider : HDStatisticsCollectionCalculatorDefaultSourceOrderProvider {
    NSMutableDictionary *_cachedSources;
    NSArray *_cachedOrderedSourceIDs;
}

+ (id)sleepSourceOrderProviderForProfile:(id)a0;

- (id)orderedSourceIDsWithUnorderedIDs:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 quantityType:(id)a1;
- (id)sourceForSourceID:(long long)a0;

@end
