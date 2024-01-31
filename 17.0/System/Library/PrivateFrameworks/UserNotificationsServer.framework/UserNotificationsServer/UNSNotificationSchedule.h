@class NSDate;

@interface UNSNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)_dateFormatter;

@end
