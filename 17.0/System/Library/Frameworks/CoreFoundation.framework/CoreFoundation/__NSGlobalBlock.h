@interface __NSGlobalBlock : NSBlock

- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
