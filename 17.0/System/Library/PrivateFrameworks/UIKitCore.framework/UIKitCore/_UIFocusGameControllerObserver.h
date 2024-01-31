@interface _UIFocusGameControllerObserver : _UIFocusStateObserver {
    struct __IOHIDManager { } *_hidManager;
}

- (id)init;
- (void)dealloc;
- (void)_unregisterObserver;
- (void)_registerObserver;
- (BOOL)isActive;

@end
