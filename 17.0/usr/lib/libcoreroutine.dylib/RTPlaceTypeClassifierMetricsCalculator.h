@class NSMutableDictionary, RTDistanceCalculator, RTLearnedLocationStore, RTMetricManager;

@interface RTPlaceTypeClassifierMetricsCalculator : NSObject

@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTMetricManager *metricManager;
@property (readonly, nonatomic) NSMutableDictionary *metricsData;

+ (id)normalize:(id)a0;
+ (id)nonModelSources;
+ (unsigned long long)addressComponentMatchesBetweenInferredAddress:(id)a0 trueAddress:(id)a1;
+ (id)anySourceMetricKeys;
+ (id)collectPlaceVersionsFromInferredPlaces:(id)a0 contactsPlaces:(id)a1 rottedPlaces:(id)a2;
+ (id)genericOnlyMetricKeys;
+ (id)ignoredMetricKeys;
+ (BOOL)inferredAddressComponent:(id)a0 consistentWithTrueComponent:(id)a1;
+ (id)keyForMetricType:(unsigned long long)a0 placeType:(unsigned long long)a1 source:(unsigned long long)a2 metricKey:(unsigned long long)a3;
+ (id)keyForMetricType:(unsigned long long)a0 sourcePlaceType:(unsigned long long)a1 source:(unsigned long long)a2 referenceSourcePlaceType:(unsigned long long)a3 referenceSource:(unsigned long long)a4 metricKey:(unsigned long long)a5;
+ (id)keyForSourceType:(unsigned long long)a0 placeType:(unsigned long long)a1;
+ (id)metricsKeyToString:(unsigned long long)a0;
+ (id)metricsSourceToString:(unsigned long long)a0;
+ (id)metricsTypeToString:(unsigned long long)a0;
+ (id)modelDictionaryMetricKeys;
+ (id)modelNonDictionaryMetricKeys;
+ (id)modelSources;
+ (id)newAlgorithmInstanceWithInference:(id)a0 distanceCalculator:(id)a1;
+ (id)notHomeEligibleSources;
+ (id)notWorkEligibleSources;
+ (id)schoolEligibleSources;
+ (id)shownToEndUserOnlyMetricKeys;
+ (void)submitMetricsForInferredPlaces:(id)a0 contactsPlaces:(id)a1 rottedPlaces:(id)a2 distanceCalculator:(id)a3 metricManager:(id)a4;
+ (void)updateAlgorithmInstance:(id)a0 byComparingInferredMapItem:(id)a1 withTruthfulMapItem:(id)a2 withDistanceCalculator:(id)a3;

- (id)init;
- (void)submitMetrics;
- (void).cxx_destruct;
- (id)retrieveMetrics;
- (id)computeDistanceMetricForSourcePlaces:(id)a0 referencePlaces:(id)a1 bins:(id)a2;
- (id)computeMetricsForSourcePlaceType:(unsigned long long)a0 source:(unsigned long long)a1 referenceSourcePlaceType:(unsigned long long)a2 referenceSource:(unsigned long long)a3 metricType:(unsigned long long)a4 bins:(id)a5;
- (void)ensureMetricsDataHasKeysForSource:(unsigned long long)a0 placeType:(unsigned long long)a1 metricKey:(unsigned long long)a2;
- (id)filterLearnedPlacesOfType:(unsigned long long)a0 places:(id)a1;
- (id)initWithDistanceCalculator:(id)a0 learnedLocationStore:(id)a1 metricManager:(id)a2;
- (id)retrieveComputedMetricsForSourcePlaceType:(unsigned long long)a0 source:(unsigned long long)a1;
- (void)storeMetricsData:(id)a0 source:(unsigned long long)a1;
- (void)storeMetricsData:(id)a0 source:(unsigned long long)a1 placeType:(unsigned long long)a2;
- (void)storeMetricsData:(id)a0 source:(unsigned long long)a1 placeType:(unsigned long long)a2 metricKey:(unsigned long long)a3;

@end
