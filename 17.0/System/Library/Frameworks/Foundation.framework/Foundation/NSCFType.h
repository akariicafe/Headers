@interface NSCFType : NSObject

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;

@end
