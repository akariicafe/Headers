@interface NSBlock : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)invoke;
- (id)copy;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performAfterDelay:(double)a0;

@end
