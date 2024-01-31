@class NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureiOSNotificationCenter : CMContinuityCaptureUserNotificationCenter {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_scheduleNotification:(long long)a0 data:(id)a1;
- (void)scheduleNotification:(long long)a0 data:(id)a1;
- (BOOL)shouldDisplayNotification:(long long)a0;

@end
