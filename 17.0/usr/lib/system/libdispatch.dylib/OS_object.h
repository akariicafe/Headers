@interface OS_object : NSObject

- (id)retain;
- (BOOL)allowsWeakReference;
- (id)init;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;
- (void)_xref_dispose;
- (oneway void)release;

@end
