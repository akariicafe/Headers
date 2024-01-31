@interface VNPoint3D : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct { void /* unknown type, empty encoding */ columns[4]; } position;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
