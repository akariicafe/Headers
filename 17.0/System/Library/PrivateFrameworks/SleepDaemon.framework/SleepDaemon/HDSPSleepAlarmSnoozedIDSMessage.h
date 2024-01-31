@class NSDate;

@interface HDSPSleepAlarmSnoozedIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *snoozedUntilDate;

- (unsigned long long)destinations;
- (id)dateDescription;
- (id)initWithSnoozedUntilDate:(id)a0;

@end
