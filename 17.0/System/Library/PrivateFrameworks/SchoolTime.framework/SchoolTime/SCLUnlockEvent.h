@class NSString, NSUUID, NSDate;

@interface SCLUnlockEvent : NSManagedObject

@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) short duration;
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (copy, nonatomic) NSString *timeZoneName;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) short scheduleStartHour;
@property (nonatomic) short scheduleStartMinute;
@property (nonatomic) short scheduleEndHour;
@property (nonatomic) short scheduleEndMinute;

+ (id)fetchRequest;

@end
