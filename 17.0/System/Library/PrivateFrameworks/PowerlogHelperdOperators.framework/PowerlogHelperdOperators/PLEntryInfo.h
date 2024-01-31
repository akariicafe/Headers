@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLEntryInfo : NSObject

@property (retain) PLEntryNotificationOperatorComposition *notificationComposition;
@property double minRequestInterval;
@property (retain) NSDate *lastQueryDate;

- (void).cxx_destruct;
- (id)initWithNotificationComposition:(id)a0 minRequestInterval:(double)a1;

@end
