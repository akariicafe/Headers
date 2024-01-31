@class NSDate;

@interface SXAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)determineEndDate;

@end
