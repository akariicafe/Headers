@interface UIRemoteControlEvent : UIEvent {
    long long _subtype;
}

- (void)_sendEventToResponder:(id)a0;
- (void)dealloc;
- (long long)subtype;
- (id)_init;
- (void)_simpleRemoteActionNotification:(id)a0;
- (id)_windows;
- (void)_setSubtype:(long long)a0;
- (long long)type;

@end
