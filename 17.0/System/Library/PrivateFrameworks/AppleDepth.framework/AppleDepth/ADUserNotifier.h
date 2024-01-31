@class NSObject;
@protocol OS_dispatch_queue;

@interface ADUserNotifier : NSObject {
    struct __CFUserNotification { } *_notification;
    struct __CFRunLoopSource { } *_source;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)defaultUserNotifier;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissNotification;
- (id)buildTapToRadarURLWithRadarTitle:(id)a0 radarComponent:(unsigned long long)a1;
- (BOOL)createNotificationWithTitle:(id)a0 message:(id)a1 defaultButton:(id)a2 alternateButton:(id)a3 responseBlock:(id /* block */)a4;
- (void)setComponentID:(id)a0 componentName:(id)a1 forQuery:(id)a2;
- (void)showUserNotificationWithTitle:(id)a0 message:(id)a1;
- (void)triggerApplicationWithNotificationTitle:(id)a0 notificationMessage:(id)a1 acceptButtonText:(id)a2 rejectButtonText:(id)a3 applicationURL:(id)a4;
- (void)triggerTapToRadarWithNotificationTitle:(id)a0 notificationMessage:(id)a1 radarTitle:(id)a2 radarComponent:(unsigned long long)a3;

@end
