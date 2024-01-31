@class IOPortLDCMManagerV4;

@interface LDCMNotificationUIManagerV4 : NSObject

@property (weak, nonatomic) IOPortLDCMManagerV4 *ldcmManager;
@property (nonatomic) struct { BOOL isNotificationPosted; double lastNotificationTime; BOOL isReinsertion; struct __CFUserNotification *notification; struct __CFRunLoopSource *notificationRunLoopSource; struct __CFRunLoop *runloop; LDCMNotificationUIManagerV4 *notificationUIManager; } liquidNotificationContext;

- (void)setOverride:(unsigned char)a0;
- (void).cxx_destruct;
- (id)initWithParams:(struct __CFRunLoop { } *)a0 :(id)a1;
- (void)showUI:(struct { BOOL x0; BOOL x1; })a0 :(BOOL)a1;

@end
