@class NSArray, NSDate;

@interface ATXTrendPlot : NSObject

@property (readonly, nonatomic) long long granularity;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *bins;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_binIndexForDate:(id)a0;
- (id)_dateComponentsForGranularity:(long long)a0;
- (id)binAtDate:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 granularity:(long long)a2 binInitialDataProvider:(id /* block */)a3;
- (BOOL)isEqualToATXTrendPlot:(id)a0;

@end
