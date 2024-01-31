@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (id)body;
- (unsigned long long)destinations;
- (void).cxx_destruct;
- (id)title;
- (id)initWithNotificationManager:(id)a0;
- (void)triggerNotification;

@end
