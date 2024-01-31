@class NSDictionary, NSArray;

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_options;
    NSArray *_transforms;
    void *_cachedObject;
    struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *_collisionShape;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) id sourceObject;
@property (readonly, nonatomic) NSArray *transforms;

+ (id)shapeWithGeometry:(id)a0 options:(id)a1;
+ (id)shapeWithShapes:(id)a0 transforms:(id)a1;
+ (id)defaultShapeForGeometry:(id)a0;
+ (id)shapeWithNode:(id)a0 options:(id)a1;

- (struct btCollisionShape { void /* function */ **x0; int x1; void *x2; } *)_handle;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)referenceObject;
- (void)setReferenceObject:(id)a0;
- (void)_setTransforms:(id)a0;
- (void)_customDecodingOfSCNPhysicsShape:(id)a0;
- (void)_customEncodingOfSCNPhysicsShape:(id)a0;
- (id)initWithCachedObject:(void *)a0 options:(id)a1;
- (id)initWithContent:(id)a0 options:(id)a1;

@end
