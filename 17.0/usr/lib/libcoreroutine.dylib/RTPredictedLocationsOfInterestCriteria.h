@class NSString, RTLocation, RTDistanceCalculator, NSDate;

@interface RTPredictedLocationsOfInterestCriteria : NSObject <NSCopying> {
    RTDistanceCalculator *_distanceCalculator;
}

@property (retain, nonatomic) NSDate *referenceDate;
@property (nonatomic) double windowDuration;
@property (retain, nonatomic) RTLocation *referenceLocation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double maximumDistance;
@property (nonatomic) double minimumConfidence;
@property (retain, nonatomic) NSString *clientIdentifier;

- (id)init;
- (id)initWithDistanceCalculator:(id)a0;
- (BOOL)evaluatePredictedLocationOfInterest:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
