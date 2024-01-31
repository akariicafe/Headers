@class NSDateFormatter, NSDate;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDate *startDate;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0;
- (id)stringForLocation:(id)a0 formatterForStepSize:(id)a1;

@end
