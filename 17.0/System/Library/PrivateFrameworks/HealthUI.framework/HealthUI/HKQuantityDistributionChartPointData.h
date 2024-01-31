@class NSArray, NSString, HKUnit, NSDate;

@interface HKQuantityDistributionChartPointData : NSObject <HKGraphSeriesChartData>

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double minimumValue;
@property (readonly, nonatomic) double maximumValue;
@property (readonly, nonatomic) double averageValue;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double minimumBucketValue;
@property (readonly, nonatomic) double bucketIncrement;
@property (readonly, nonatomic) NSArray *bucketCounts;
@property (readonly, nonatomic) NSArray *contextIdentifiers;
@property (readonly, nonatomic) HKUnit *unit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDistributionData:(id)a0 bucketIncrement:(double)a1 unit:(id)a2 displayType:(id)a3;
- (id)initWithDistributionData:(id)a0 unit:(id)a1 displayType:(id)a2;

@end
