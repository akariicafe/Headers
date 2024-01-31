@class NSMutableArray;

@interface PFProportionalIntegralController : NSObject

@property long long setPoint;
@property long long integralError;
@property long long integralErrorMin;
@property long long integralErrorMax;
@property double proportionalGain;
@property double integralGain;
@property long long output;
@property long long outputMin;
@property long long outputMax;
@property (retain) NSMutableArray *statistics;
@property BOOL outputReady;

- (void).cxx_destruct;
- (void)addStatisticsSampleForTimestamp:(double)a0 error:(long long)a1 feedback:(long long)a2;
- (void)enumerateStatisticsMeasurementsWithHandler:(id /* block */)a0;
- (id)initWithSetPoint:(long long)a0;
- (id)statisticsDescription;
- (void)updateWithTimestamp:(double)a0 error:(long long)a1 feedback:(long long)a2;

@end
