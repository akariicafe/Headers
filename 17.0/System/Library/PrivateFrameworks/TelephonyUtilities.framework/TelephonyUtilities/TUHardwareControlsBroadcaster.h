@class NSString;

@interface TUHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (id)init;
- (void)dealloc;
- (void)longPressTimerFired:(id)a0;
- (void).cxx_destruct;

@end
