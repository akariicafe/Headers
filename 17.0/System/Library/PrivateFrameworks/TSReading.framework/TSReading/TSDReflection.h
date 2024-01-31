@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double fadeAcceleration;

+ (BOOL)canMixWithNilObjects;
+ (id)reflection;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOpacity:(double)a0;
- (id)initWithOpacity:(double)a0 fadeAcceleration:(double)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;

@end
