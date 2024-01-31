@class SKRange;

@interface SKSizeConstraint : SKConstraint

@property (copy) SKRange *widthRange;
@property (copy) SKRange *heightRange;

+ (BOOL)supportsSecureCoding;
+ (id)constraintWithHeightRange:(id)a0;
+ (id)constraintWithWidthRange:(id)a0;
+ (id)constraintWithWidthRange:(id)a0 heightRange:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWidthRange:(id)a0 heightRange:(id)a1;
- (BOOL)isEqualToSizeConstraint:(id)a0;

@end
