@class RTPlatform, RTPlaceTypeClassifierMetricsCalculator, RTDistanceCalculator, RTLearnedLocationStore, NSDictionary, NSMutableArray, RTLearnedVisit;

@interface RTLearnedPlaceTypeInferenceGenerator : NSObject

@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSMutableArray *placeStats;
@property (retain, nonatomic) RTLearnedVisit *firstVisit;
@property (retain, nonatomic) RTLearnedVisit *lastVisit;
@property (retain, nonatomic) NSDictionary *placeStatsUUIDStringsToMLFeaturesMap;

+ (id)sortPlaceStats:(id)a0;
+ (id)getCandidateGenerationParameters;
+ (id)modelTypeToString:(unsigned long long)a0;
+ (id)placeTypeClassificationSourceToString:(unsigned long long)a0;
+ (id)placeTypeClassifierModelTargetClass:(unsigned long long)a0;
+ (id)placeTypeClassifierModelThresholdForPlatform:(id)a0 placeType:(unsigned long long)a1;

- (id)init;
- (void)log;
- (void).cxx_destruct;
- (id)fuseInferences:(id)a0;
- (id)inferPlaceTypes;
- (id)_inferPlaceTypesFromMultiClassModelForPlaceType:(unsigned long long)a0 placeStats:(id)a1 metricsData:(id)a2;
- (id)_inferPlaceTypesFromRankerModelForPlaceType:(unsigned long long)a0 placeStats:(id)a1 metricsData:(id)a2;
- (void)_prepareMLFeatures;
- (id)filterPlaceStats:(id)a0 referenceLearnedPlace:(id)a1 minDistanceThreshold:(id)a2 maxDistanceThreshold:(id)a3;
- (id)filteredPlaceStatsByWeeklyVisitThreshold:(double)a0;
- (id)inferPlaceTypesFromDailyPatterns;
- (id)inferPlaceTypesFromFallback;
- (id)inferPlaceTypesFromModel;
- (id)inferPlaceTypesFromModelForModelType:(unsigned long long)a0 placeType:(unsigned long long)a1 placeStats:(id)a2 metricsData:(id)a3;
- (id)inferPlaceTypesFromModelWithCandidateSelection:(BOOL)a0 homeModelType:(unsigned long long)a1 workModelType:(unsigned long long)a2;
- (id)inferPlaceTypesFromRuleEngine;
- (id)inferPlaceTypesFromTopMedianDwellTime;
- (id)initWithDistanceCalculator:(id)a0 learnedLocationStore:(id)a1 placeTypeClassifierMetricsCalculator:(id)a2 platform:(id)a3;
- (id)placeCandidateStatsForType:(unsigned long long)a0 excludingPlaces:(id)a1 parameters:(id)a2 distanceThreshold:(double)a3;
- (id)placeCandidatesFromDailyPatternsForType:(unsigned long long)a0 parameters:(id)a1;
- (id)placeCandidatesFromTopMedianDwellTimeForType:(unsigned long long)a0 parameters:(id)a1;
- (void)submitVisits:(id)a0 place:(id)a1;
- (BOOL)supportsModel;

@end
