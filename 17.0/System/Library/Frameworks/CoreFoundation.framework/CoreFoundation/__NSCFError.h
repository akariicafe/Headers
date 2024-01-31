@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (unsigned long long)hash;
- (id)userInfo;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (long long)code;
- (Class)classForCoder;
- (BOOL)_isDeallocating;
- (id)domain;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
