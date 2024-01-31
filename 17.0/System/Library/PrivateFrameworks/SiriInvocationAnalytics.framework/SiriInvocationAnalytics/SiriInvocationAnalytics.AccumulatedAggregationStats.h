@class NSArray, NSString;

@interface SiriInvocationAnalytics.AccumulatedAggregationStats : NSObject {
    void /* unknown type, empty encoding */ aggregationStats;
    void /* unknown type, empty encoding */ cohortType;
}

@property (nonatomic) void /* unknown type, empty encoding */ aggregationStartTimestamp;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfDaysAggregation;
@property (nonatomic, copy) NSArray *aggregationStats;
@property (nonatomic, copy) NSString *cohortType;
@property (nonatomic) void /* unknown type, empty encoding */ intendedRequestRatio;

- (id)init;
- (void).cxx_destruct;

@end
