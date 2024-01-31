@class _ATXInternalNotification;

@interface ATXInternalOffloadAppsNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithOffloadSet:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotificationWithOffloadBlock:(id /* block */)a0;

@end
