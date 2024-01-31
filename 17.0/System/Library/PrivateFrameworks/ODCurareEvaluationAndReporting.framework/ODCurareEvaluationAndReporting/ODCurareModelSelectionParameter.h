@class NSString;

@interface ODCurareModelSelectionParameter : NSObject

@property (retain, nonatomic) NSString *metricName;
@property (nonatomic) double percentageIncrease;

- (void).cxx_destruct;
- (id)initWithMetricName:(id)a0 percentageIncrease:(double)a1;

@end
