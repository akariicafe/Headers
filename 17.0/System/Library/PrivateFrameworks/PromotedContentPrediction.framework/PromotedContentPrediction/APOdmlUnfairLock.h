@interface APOdmlUnfairLock : NSObject <NSLocking>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (nonatomic) unsigned int unfairLockOptions;

- (void)lock;
- (void)unlock;
- (id)initWithOptions:(long long)a0;

@end
