@class NSString, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_source;

@interface DTMobileNotificationsService : DTXService <DTMobileNotificationsServiceAuthorizedAPI> {
    BOOL _applicationStateNotificationsEnabled;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
}

@property (retain, nonatomic) RBSProcessMonitor *appStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)postDarwinNotification:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (void)_memoryNotification:(unsigned int)a0 pid:(int)a1;
- (void)_setAppStateNotificationsEnabled:(BOOL)a0;
- (void)_setMemNotificationsEnabled:(BOOL)a0;
- (void)setApplicationStateNotificationsEnabled:(id)a0;
- (void)setMemoryNotificationsEnabled:(id)a0;

@end
