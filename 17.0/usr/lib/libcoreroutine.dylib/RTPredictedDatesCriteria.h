@class RTLocation, NSDate;

@interface RTPredictedDatesCriteria : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *referenceDate;
@property (nonatomic) double windowDuration;
@property (retain, nonatomic) RTLocation *referenceLocation;
@property (nonatomic) double minimumConfidence;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluatePredictedDate:(id)a0;

@end
