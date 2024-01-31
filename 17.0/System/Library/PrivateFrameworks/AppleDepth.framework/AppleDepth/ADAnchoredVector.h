@interface ADAnchoredVector : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ origin;
@property (nonatomic) void /* unknown type, empty encoding */ direction;

+ (id)vectorWithOrigin:(id)a0 direction:(SEL)a1;
+ (id)vectorWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

- (id)description;
- (void /* unknown type, empty encoding */)intersectWithPlane:(id)a0 normal:(SEL)a1;
- (id)vectorByChangingPOV:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
