@interface CLCircularGeographicCondition : CLCondition <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CLLocationCoordinate2D { double latitude; double longitude; } center;
@property (readonly) double radius;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;

@end
