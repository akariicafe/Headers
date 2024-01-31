@interface SUItemValidatorTest : NSObject <NSCopying>

+ (id)defaultTest;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateItem:(id)a0 offer:(id)a1 error:(id *)a2;
- (BOOL)validateItems:(id)a0 offers:(id)a1 error:(id *)a2;

@end
