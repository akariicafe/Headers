@interface SCNSliderConstraint : SCNConstraint {
    unsigned long long _categoryBitMask;
    struct SCNVector3 { float x; float y; float z; } _offset;
    float _radius;
}

@property (nonatomic) unsigned long long collisionCategoryBitMask;
@property (nonatomic) double radius;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } offset;

+ (BOOL)supportsSecureCoding;
+ (id)sliderConstraint;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
