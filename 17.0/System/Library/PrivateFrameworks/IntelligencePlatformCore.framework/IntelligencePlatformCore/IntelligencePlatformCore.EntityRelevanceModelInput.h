@class NSSet;

@interface IntelligencePlatformCore.EntityRelevanceModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_coarseGeoHash;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_coarseTimeOfDay;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_dayOfWeek;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_loi;
    void /* unknown type, empty encoding */ behaviorPopularityGivenSequence;
    void /* unknown type, empty encoding */ behaviorPopularityGivenContext_specificGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseGeoHash_coarseTimeOfDay;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_coarseGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_dayOfWeek;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_coarseTimeOfDay;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay;
    void /* unknown type, empty encoding */ dailyDoseL1Error;
    void /* unknown type, empty encoding */ dailyDoseL2Error;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_dayOfWeek;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek;
    void /* unknown type, empty encoding */ lastExecutionAge;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_loi;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_loi;
    void /* unknown type, empty encoding */ longTermTrendingPopularity;
    void /* unknown type, empty encoding */ medianTimeIntervalBetweenExecution;
    void /* unknown type, empty encoding */ sequencePopularityGivenBehavior;
    void /* unknown type, empty encoding */ shortTermTrendingPopularity;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_specificGeoHash;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_specificGeoHash;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_specificGeoHash;
    void /* unknown type, empty encoding */ trendingPopularity;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_coarseTimeOfDay_wifi;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_dayOfWeek_wifi;
    void /* unknown type, empty encoding */ posteriorProbabilityGivenContext_wifi;
    void /* unknown type, empty encoding */ contextPopularityGivenBehavior_wifi;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
