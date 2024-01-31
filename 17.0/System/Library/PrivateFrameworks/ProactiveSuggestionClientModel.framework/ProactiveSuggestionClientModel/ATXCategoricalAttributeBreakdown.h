@class NSMutableDictionary;

@interface ATXCategoricalAttributeBreakdown : NSObject {
    NSMutableDictionary *_counts;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)allCategories;
- (unsigned long long)countForCategory:(id)a0;
- (void)incrementCountForCategory:(id)a0 by:(unsigned long long)a1;
- (BOOL)isEqualToATXDeviceLevelMetricsCategoricalAttributeBreakdown:(id)a0;
- (double)normalizedCountForCategory:(id)a0;

@end
