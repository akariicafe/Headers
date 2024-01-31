@class NSString, NSDateComponents, NSArray;

@interface MTIntentAlarm : INObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDateComponents *dateComponents;
@property (copy, nonatomic) NSArray *repeatSchedule;

@end
