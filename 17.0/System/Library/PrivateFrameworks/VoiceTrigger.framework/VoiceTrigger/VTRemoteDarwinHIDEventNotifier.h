@interface VTRemoteDarwinHIDEventNotifier : NSObject

@property (nonatomic) struct __IOHIDManager { } *hidManager;

- (void)startObserving;
- (id)init;
- (void)_registerHIDEventNotification;

@end
