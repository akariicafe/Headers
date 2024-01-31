@class NSArray, SCLRecurrenceSchedule;

@interface SCLSettingsViewModel : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) unsigned long long scheduleType;
@property (nonatomic) long long repeatSchedule;
@property (copy, nonatomic) NSArray *timeIntervals;
@property (copy, nonatomic) SCLRecurrenceSchedule *customSchedule;
@property (copy, nonatomic) NSArray *historyItems;

- (id)init;
- (void).cxx_destruct;

@end
