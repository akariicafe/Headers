@interface SCROConnection : NSObject <NSSecureCoding> {
    unsigned int _pingPort;
    struct __CFRunLoopSource { } *_pingSource;
    struct __CFRunLoopSource { } *_invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    id _delegate;
    _Atomic BOOL _isConnectionStarted;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (void)_addConnectionToRunLoop:(id)a0;
+ (void)_configServer;
+ (void)_configServerWithMachServiceName:(char *)a0;
+ (void)_createConnectionRunLoop;
+ (void)_unconfigServerAndRetry:(BOOL)a0;
+ (BOOL)inUnitTests;

- (void)_stopConnection;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (int)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_ping;
- (void)_startConnection;
- (id)handlerArrayValueForKey:(int)a0;
- (id)handlerValueForKey:(int)a0;
- (id)handlerValueForKey:(int)a0 withObject:(id)a1;
- (id)initWithHandlerType:(int)a0 delegate:(id)a1;
- (int)performHandlerActionForKey:(int)a0;
- (int)registerHandlerCallbackForKey:(int)a0;
- (int)setHandlerValue:(id)a0 forKey:(int)a1;

@end
