@class NSString, NSDate;

@interface WDTimePeriod : NSObject <WDTimePeriod, NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sleep_timePeriodForSample:(id)a0;
+ (id)timePeriodWithSample:(id)a0;
+ (id)timePeriodWithStartDate:(id)a0 endDate:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sleep_titleString;

@end
