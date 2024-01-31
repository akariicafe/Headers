@class NSRecursiveLock, EAAccessory, EASession;

@interface EAOutputStream : NSOutputStream {
    id _delegate;
    int _sock;
    EAAccessory *_accessory;
    EASession *_session;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    BOOL _useSocket;
    struct __CFSocket { } *_cfSocket;
    BOOL _isOpenCompletedEventSent;
    BOOL _hasSpaceAvailableEventSent;
    BOOL _hasSpaceAvailable;
    BOOL _isAtEndEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFRunLoopSource { } *_socketRunLoopSource;
}

- (void)close;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasSpaceAvailable;
- (void)dealloc;
- (id)delegate;
- (void)open;
- (unsigned long long)streamStatus;
- (id)streamError;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDelegate:(id)a0;
- (void)_accessoryDidDisconnect:(id)a0;
- (id)propertyForKey:(id)a0;
- (void)_performAtEndOfStreamValidation;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_streamWriteable;
- (void)endStream;
- (id)initWithAccessory:(id)a0 forSession:(id)a1 socket:(int)a2;
- (id)initWithAccessoryWithoutSocket:(id)a0 forSession:(id)a1;
- (void)openCompleted;

@end
