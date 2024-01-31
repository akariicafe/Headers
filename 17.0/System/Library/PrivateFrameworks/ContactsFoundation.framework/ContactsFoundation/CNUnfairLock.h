@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (id)init;
- (void)lock;
- (void)assertCurrentThreadIsOwner;
- (void)unlock;
- (id)description;
- (BOOL)tryLock;
- (void)assertCurrentThreadIsNotOwner;

@end
