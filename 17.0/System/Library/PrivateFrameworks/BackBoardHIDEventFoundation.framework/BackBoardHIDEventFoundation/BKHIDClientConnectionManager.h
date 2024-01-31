@class BSMutableIntegerMap, NSMutableDictionary;

@interface BKHIDClientConnectionManager : NSObject {
    struct __IOHIDEventSystem { } *_hidEventSystem;
    BSMutableIntegerMap *_taskPortToClientConnectionMapping;
    BSMutableIntegerMap *_pidToClientConnectionMapping;
    NSMutableDictionary *_versionedPIDToClientConnectionMapping;
    struct __CFDictionary { } *_hidConnectionToBKConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)bundleIDForPID:(int)a0;
- (long long)versionedPIDForPID:(int)a0;
- (int)pidForBundleID:(id)a0;
- (id)initWithHIDEventSystem:(struct __IOHIDEventSystem { } *)a0;
- (id)description;
- (id)clientForTaskPort:(unsigned int)a0;
- (void).cxx_destruct;
- (id)addRemovalObserverForConnectionWithVersionedPID:(long long)a0 observerBlock:(id /* block */)a1;
- (id)clientForDestination:(id)a0;
- (struct __IOHIDEventSystemConnection { } *)copyClientForDestination:(id)a0;
- (struct __IOHIDEventSystemConnection { } *)copyClientForTaskPort:(unsigned int)a0;

@end
