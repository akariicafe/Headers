@class NSObject;
@protocol OS_dispatch_queue;

@interface AVApplicationStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    BOOL _hostApplicationInForeground;
    id _didEnterBackgroundNotificationToken;
    id _willEnterForegroundNotificationToken;
}

@property (getter=isHostApplicationInForeground, setter=setHostApplicationInForeground:) BOOL hostApplicationInForeground;

+ (void)initialize;
+ (id)sharedApplicationStateMonitor;

- (id)init;
- (void)dealloc;
- (void)_didEnterBackground:(id)a0;
- (void)_willEnterForeground:(id)a0;
- (BOOL)_hostApplicationHasForegroundExemption;

@end
