@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener

@property (readonly, nonatomic) NSString *registeredNotificationName;
@property (readonly) BOOL isRegisteredForNotification;
@property (readonly, copy) NSString *notificationName;
@property (readonly, weak) id notificationObject;

+ (id)eventListenerForNotificationName:(id)a0;
+ (id)eventListenerForNotificationName:(id)a0 object:(id)a1;

- (BOOL)isListening;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_notification:(id)a0;
- (void)registerForNotificationName:(id)a0;
- (void)registerForNotificationName:(id)a0 object:(id)a1;
- (void)willReset;
- (void)willStartListening;
- (void)willStopListening;

@end
