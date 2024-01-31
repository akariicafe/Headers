@class RTLocation, RTLearnedLocationOfInterest, NSError, RTDistanceCalculator;

@interface RTRegionToLocationOfInterestMatchingMetrics : NSObject {
    RTDistanceCalculator *_distanceCalculator;
}

@property (readonly, nonatomic) RTLocation *region;
@property (readonly, nonatomic) RTLearnedLocationOfInterest *locationOfInterest;
@property (readonly, nonatomic) NSError *matchingError;
@property (readonly, nonatomic) unsigned long long numberOfMatches;

+ (void)submitMetricsWithDistanceCalculator:(id)a0 region:(id)a1 locationOfInterest:(id)a2 matchingError:(id)a3 numberOfMatches:(unsigned long long)a4;

- (id)init;
- (void)submitMetrics;
- (void).cxx_destruct;
- (id)computeMetrics;
- (id)initWithDistanceCalculator:(id)a0 region:(id)a1 locationOfInterest:(id)a2 matchingError:(id)a3 numberOfMatches:(unsigned long long)a4;

@end
