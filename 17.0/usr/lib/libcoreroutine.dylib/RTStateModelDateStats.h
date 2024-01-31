@class NSDate;

@interface RTStateModelDateStats : NSObject

@property (nonatomic) double timeIntervalToLatestDateSum;
@property (nonatomic) double timeIntervalToLatestDateSum2;
@property (retain, nonatomic) NSDate *averageDate;
@property (nonatomic) double stdDeviation;
@property (nonatomic) int numOfDates;

- (void).cxx_destruct;

@end
