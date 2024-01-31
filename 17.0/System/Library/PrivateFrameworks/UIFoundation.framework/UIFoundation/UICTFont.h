@interface UICTFont : UIFont

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;

@end
