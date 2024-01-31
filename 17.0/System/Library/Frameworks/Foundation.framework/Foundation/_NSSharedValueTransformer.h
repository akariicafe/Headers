@interface _NSSharedValueTransformer : NSValueTransformer

- (id)retain;
- (id)autorelease;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_isBooleanTransformer;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
