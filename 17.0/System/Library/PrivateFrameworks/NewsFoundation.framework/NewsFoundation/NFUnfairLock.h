@interface NFUnfairLock : NSObject <NFLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned int _unfairLockOptions;
}

- (void)assertNotLocked;
- (id)init;
- (void)lock;
- (void)performWithLockSync:(id /* block */)a0;
- (void)unlock;
- (void)assertLocked;
- (id)initWithOptions:(long long)a0;

@end
