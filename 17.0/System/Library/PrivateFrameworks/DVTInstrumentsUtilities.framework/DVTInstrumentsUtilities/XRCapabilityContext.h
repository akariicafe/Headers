@class NSMutableDictionary;

@interface XRCapabilityContext : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    NSMutableDictionary *_capabilities;
    NSMutableDictionary *_unimplementedResponses;
}

+ (void)announceUsedCapability:(id)a0 version:(unsigned long long)a1;
+ (id)currentContextSet;
+ (void)enterContextSet:(id)a0;
+ (void)leaveContextSet:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)announceUsedCapability:(id)a0 version:(unsigned long long)a1;
- (void)addToCurrentContextSet;
- (void)enumerateRequiredCapabilities:(id /* block */)a0;
- (void)removeFromCurrentContextSet;

@end
