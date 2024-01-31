@class NSMutableDictionary;

@interface ACDKeychainLock : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _containerLock;
    NSMutableDictionary *_locksByServiceUsername;
}

- (id)init;
- (void)lockPerformForService:(id)a0 username:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;

@end
