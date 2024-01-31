@class SCLSchedule, NSError;

@interface SCLScheduleAttributes : NSObject

@property (readonly, nonatomic) SCLSchedule *schedule;
@property (readonly, nonatomic) unsigned long long validationOptions;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSError *validationError;
@property (readonly, nonatomic) long long scheduledDays;
@property (readonly, nonatomic) BOOL hasUniformIntervals;
@property (readonly, nonatomic) BOOL hasSingleIntervalPerDay;

- (void).cxx_destruct;
- (void)_prepareWithRecurrences:(id)a0;
- (id)initWithSchedule:(id)a0;
- (id)initWithSchedule:(id)a0 options:(unsigned long long)a1;

@end
