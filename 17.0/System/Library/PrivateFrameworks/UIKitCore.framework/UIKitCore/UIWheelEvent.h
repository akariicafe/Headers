@class NSMutableArray;

@interface UIWheelEvent : UIEvent {
    long long _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    long long lastSubtype;
}

- (void)_sendEventToResponder:(id)a0;
- (long long)subtype;
- (void).cxx_destruct;
- (BOOL)_canHaveVelocity;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (double)_wheelVelocity;
- (long long)type;

@end
