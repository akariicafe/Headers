@class NSString;

@interface MCLNotificationCenterObserver : NSObject

@property (copy, nonatomic) NSString *notification;
@property (retain, nonatomic) id object;
@property (nonatomic) BOOL enabled;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setup;
- (void)observeNotification:(id)a0;

@end
