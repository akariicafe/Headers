@class MTIntentAlarm;

@interface MTToggleAlarmIntent : INIntent

@property (nonatomic) long long operation;
@property (nonatomic) long long state;
@property (copy, nonatomic) MTIntentAlarm *alarm;

@end
