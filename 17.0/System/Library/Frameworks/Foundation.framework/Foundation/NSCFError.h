@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (id)userInfo;
- (unsigned long long)retainCount;
- (long long)code;
- (Class)classForCoder;
- (id)domain;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;

@end
