@interface IMDRecord : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (BOOL)allowsWeakReference;
- (id)init;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;

@end
