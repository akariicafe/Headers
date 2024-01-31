@interface PRSRankingPolicyManager : NSObject

+ (id)getSharedRankingPolicyManager;
+ (double)termFrequencyComponentFor:(id)a0 matchingString:(id)a1 weighted:(BOOL)a2;
+ (double)termFrequencyComponentForWord:(id)a0 inString:(id)a1;

- (void)computeNewFeaturesForProperty:(id)a0 query:(id)a1 qr_prop_query_norm_min_ordered_span:(double *)a2 qr_prop_query_norm_min_unordered_span:(double *)a3 qr_query_min_pair_dist_in_title:(double *)a4 prefix_match_norm_count:(double *)a5;
- (void)computeNewFeaturesForProperty:(id)a0 query:(id)a1 qr_prop_query_norm_min_ordered_span:(double *)a2 qr_prop_query_norm_min_unordered_span:(double *)a3 qr_query_min_pair_dist_in_title:(double *)a4 prefix_match_norm_count:(double *)a5 ordered_first_term_position:(double *)a6 prefixMatch:(BOOL)a7 queryBreakDown:(id)a8 isVirtualField:(BOOL)a9 locale:(id)a10;
- (void)computeNewFeaturesForProperty:(id)a0 query:(id)a1 qr_prop_query_norm_min_ordered_span:(double *)a2 qr_prop_query_norm_min_unordered_span:(double *)a3 qr_query_min_pair_dist_in_title:(double *)a4 prefix_match_norm_count:(double *)a5 prefixMatch:(BOOL)a6;
- (id)cookSQFOnClientWithServerProbabilities:(id)a0 qiCEPValues:(id)a1 localResultOrder:(id)a2 poorTextMatchCategories:(id)a3 minimumBagCEP:(double)a4 cook_sqf_topdown:(BOOL)a5 cook_sqf_fallback_qi_cep:(BOOL)a6;
- (id)cosineComponentsUsingWordMatches:(id)a0 withField:(id)a1 withCorpusCount:(double)a2 prefixVersion:(BOOL)a3;
- (BOOL)doesOrderedSpanExistWithStartingIndex:(unsigned long long)a0 nextArray:(id)a1 arrayOfIndexArrays:(id)a2 level:(unsigned long long)a3 currentOrderedSpan:(long long *)a4;
- (void)minimumAnyOrderSpanWithStartingIndex:(long long)a0 nextArray:(id)a1 arrayOfIndexArrays:(id)a2 level:(unsigned long long)a3 currentAnyOrderSpan:(long long)a4 minimumSpan:(long long *)a5 minimumDistancePair:(long long *)a6 currentMinimumIndex:(long long)a7 currentMaximumIndex:(long long)a8;

@end
