@class NSLock, NSObject;
@protocol OS_os_transaction;

@interface SCROClient : NSObject {
    NSLock *_lock;
    unsigned int _identifier;
    unsigned int _port;
    int _pid;
    struct __CFArray { } *_queue;
    struct __CFSet { } *_callbackSet;
    NSObject<OS_os_transaction> *_scrodTransaction;
}

+ (void)initialize;
+ (id)addClientGetIdentifier:(unsigned int *)a0 token:(struct { unsigned int x0[8]; })a1 getPort:(unsigned int *)a2;
+ (id)callbacksForClientIdentifier:(unsigned int)a0;
+ (BOOL)isClientTrustedWithPortToken:(struct { unsigned int x0[8]; })a0;
+ (void)registerCallbackWithKey:(int)a0 forClientIdentifier:(unsigned int)a1;
+ (long long)removeClientWithPort:(unsigned int)a0;
+ (void)sendCallback:(id)a0;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)_unlock;
- (void).cxx_destruct;
- (void)_lock;
- (BOOL)_wantsCallback:(id)a0;
- (id)_dequeueCallbacks;
- (void)_registerCallbackWithKey:(int)a0;
- (void)_sendCallback:(id)a0;

@end
