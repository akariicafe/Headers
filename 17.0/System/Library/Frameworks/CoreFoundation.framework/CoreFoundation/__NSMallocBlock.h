@interface __NSMallocBlock : NSBlock

- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;

@end
