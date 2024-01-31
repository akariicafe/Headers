@interface RTLearnedLocationManagerNotificationAvailabilityDidChange : RTNotification

@property (readonly, nonatomic) BOOL available;

- (id)description;
- (id)initWithAvailability:(BOOL)a0;

@end
