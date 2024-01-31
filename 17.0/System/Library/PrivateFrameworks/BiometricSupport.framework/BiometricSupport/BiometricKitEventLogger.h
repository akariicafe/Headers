@class BKEvent, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BiometricKitEventLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _eventList[200];
    int _eventListLength;
    BOOL _terminalFlushPending;
    BOOL _startEventFound;
    BKEvent *_lastSmartKeyboardEvent;
}

+ (id)logger;

- (id)init;
- (void)logEventOrCode:(unsigned long long)a0;
- (void)appendEventValue:(unsigned int)a0 isMetadata:(BOOL)a1;
- (void)logSmartKeyboardStatus;
- (void)flushEvents;
- (void)appendEvent:(id)a0;
- (void).cxx_destruct;
- (void)logDeviceMetadata;

@end
