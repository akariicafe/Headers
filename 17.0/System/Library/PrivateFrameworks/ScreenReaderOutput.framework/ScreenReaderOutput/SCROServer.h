@class NSLock;
@protocol SCROServerDelegate;

@interface SCROServer : NSObject {
    NSLock *_contentLock;
    id<SCROServerDelegate> _delegate;
    struct __CFRunLoopSource { } *_serverSource;
    struct __CFRunLoopSource { } *_deathSource;
    struct __CFRunLoopTimer { } *_deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    long long _clientCount;
    BOOL _isRegisteredWithMach;
}

@property (class, readonly) SCROServer *sharedServer;

- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (long long)_clientCount;
- (struct __CFRunLoopSource { } *)serverSource;
- (struct __CFRunLoopTimer { } *)_deathTimer;
- (void)_deleteOldResources;
- (BOOL)_ensureResourcesExist;
- (long long)_incrementClientCount;
- (int)_registerForNotificationOnDeathPort:(unsigned int)a0;
- (BOOL)_registerWithMachServiceName:(char *)a0;
- (void)_setClientCount:(long long)a0;
- (BOOL)isRegisteredWithMach;
- (BOOL)registerWithMach;
- (void)unregisterWithMach;

@end
