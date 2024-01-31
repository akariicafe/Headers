@class NSObject;
@protocol OS_dispatch_queue;

@interface MXAlarmEvents : NSObject {
    NSObject<OS_dispatch_queue> *mAccessQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)handleAlarmEventNotification:(id)a0;
- (void)resetAlarmEvent:(id)a0;
- (void)setAlarmEvent:(double)a0 eventName:(id)a1;

@end
