@class INObject;

@interface MTDisableAlarmIntent : INIntent

@property (copy, nonatomic) INObject *alarmID;
@property (copy, nonatomic) INObject *time;

@end
