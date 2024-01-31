@class _ATXInternalNotification;

@interface _ATXInternalUninstallNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithUninstallSet:(id)a0 histogramBundleIdTable:(id)a1;

- (id)init;
- (void)registerForNotificationsWithUninstallBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
