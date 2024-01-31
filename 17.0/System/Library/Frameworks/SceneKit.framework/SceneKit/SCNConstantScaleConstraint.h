@interface SCNConstantScaleConstraint : SCNConstraint {
    float _scale;
    BOOL _screenSpace;
}

@property (nonatomic) float scale;
@property (nonatomic) BOOL screenSpace;

+ (BOOL)supportsSecureCoding;
+ (id)constantScaleConstraint;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
