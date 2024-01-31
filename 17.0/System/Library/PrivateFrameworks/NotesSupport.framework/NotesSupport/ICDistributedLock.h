@class NSLock, NSString, NSDate;

@interface ICDistributedLock : NSObject {
    NSLock *threadLock;
    NSString *lockName;
    BOOL hasLock;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)unlock;
- (id)description;
- (BOOL)tryLock;
- (void)breakLock;

@end
