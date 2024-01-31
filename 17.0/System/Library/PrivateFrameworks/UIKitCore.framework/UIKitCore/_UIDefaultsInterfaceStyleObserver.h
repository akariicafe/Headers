@class NSString;

@interface _UIDefaultsInterfaceStyleObserver : NSObject {
    NSString *_notificationName;
    int _notifyToken;
}

- (void)dealloc;
- (id)initWithNotificationName:(id)a0 darwinNotification:(const char *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)observeUserDefaults:(id)a0 key:(id)a1;
- (void)_didChange;

@end
