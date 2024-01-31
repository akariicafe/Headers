@class NSArray;

@interface ATXDailyNotificationsAccumulator : NSObject

@property (readonly, copy, nonatomic) NSArray *allDeliveredNotifications;

- (id)init;
- (void).cxx_destruct;
- (BOOL)successfullyAccumulatedNotificationEvents;

@end
