@class NSSet;

@interface ASActivityDataNotificationGroup : NSObject

@property (retain, nonatomic) NSSet *goalCompletionNotifications;
@property (retain, nonatomic) NSSet *achievementNotifications;
@property (retain, nonatomic) NSSet *workoutNotifications;
@property (readonly, nonatomic) NSSet *allNotifications;

- (void).cxx_destruct;
- (unsigned long long)notificationCount;

@end
