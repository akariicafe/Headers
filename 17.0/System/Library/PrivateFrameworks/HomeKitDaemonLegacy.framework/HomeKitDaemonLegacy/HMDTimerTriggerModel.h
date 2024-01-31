@class NSData, NSString, NSDate;

@interface HMDTimerTriggerModel : HMDTriggerModel

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSData *fireDateTimeZone;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSData *significantEventOffset;
@property (copy, nonatomic) NSData *fireRepeatInterval;
@property (copy, nonatomic) NSData *recurrences;

+ (id)properties;

- (id)createPayload;

@end
