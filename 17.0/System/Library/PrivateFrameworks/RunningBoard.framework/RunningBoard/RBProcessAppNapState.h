@interface RBProcessAppNapState : NSObject <NSCopying, NSMutableCopying>

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithProcessAppNapState:(id)a0;
- (unsigned short)encodedState;

@end
