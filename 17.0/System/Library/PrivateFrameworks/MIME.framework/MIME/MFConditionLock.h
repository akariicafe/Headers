@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)initWithName:(id)a0 condition:(long long)a1 andDelegate:(id)a2;
- (id)init;
- (void)dealloc;
- (BOOL)isLockedByMe;
- (BOOL)lockBeforeDate:(id)a0;
- (void)unlock;
- (id)description;
- (void)unlockWithCondition:(long long)a0;
- (id)initWithName:(id)a0 andDelegate:(id)a1;
- (BOOL)lockWhenCondition:(long long)a0 beforeDate:(id)a1;

@end
