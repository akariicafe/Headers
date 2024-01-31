@interface ARAreaLight : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void /* unknown type, empty encoding */ direction;
@property (readonly, nonatomic) float angularSize;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ color;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDirection:(id)a0 angularSize:(SEL)a1 color:(float)a2;

@end
