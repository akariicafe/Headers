@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (id)init;
- (void)assertOwner;
- (void)lock;
- (void)unlock;
- (id)initWithOptions:(unsigned long long)a0;
- (void)assertNotOwner;
- (void)performBlock:(id /* block */)a0;

@end
