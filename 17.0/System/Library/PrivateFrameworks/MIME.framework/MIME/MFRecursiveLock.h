@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)lock;
- (BOOL)isLockedByMe;
- (BOOL)lockBeforeDate:(id)a0;
- (void)unlock;
- (id)description;
- (id)initWithName:(id)a0 andDelegate:(id)a1;
- (BOOL)tryLock;

@end
