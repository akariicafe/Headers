@class NSArray, CAAnimation, NSString;

@interface MDLTransform : NSObject <NSCopying, MDLTransformComponent> {
    struct MDLAffineTransform { struct vector<std::pair<double, float __attribute__((ext_vector_type(3)))>, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, float __attribute__((ext_vector_type(3)))> *, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__value_; } __end_cap_; } _keyedTranslation; struct vector<std::pair<double, float __attribute__((ext_vector_type(3)))>, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, float __attribute__((ext_vector_type(3)))> *, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__value_; } __end_cap_; } _keyedRotation; struct vector<std::pair<double, float __attribute__((ext_vector_type(3)))>, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, float __attribute__((ext_vector_type(3)))> *, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__value_; } __end_cap_; } _keyedShear; struct vector<std::pair<double, float __attribute__((ext_vector_type(3)))>, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, float __attribute__((ext_vector_type(3)))> *, std::allocator<std::pair<double, float __attribute__((ext_vector_type(3)))>>> { void *__value_; } __end_cap_; } _keyedScale; double _startTime; double _greatestTime; BOOL _identity; BOOL _resetTransformStack; double _evaluationTime; struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } _transform; struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } _invTransform; struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } _jacobiRotation; struct float4x4 { void /* unknown type, empty encoding */ columns[4]; } _invJacobiRotation; } _transform;
}

@property (readonly, nonatomic) CAAnimation *transformAnimation;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (nonatomic) void /* unknown type, empty encoding */ rotation;
@property (nonatomic) void /* unknown type, empty encoding */ shear;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } matrix;
@property (nonatomic) BOOL resetsTransform;
@property (readonly, nonatomic) double minimumTime;
@property (readonly, nonatomic) double maximumTime;
@property (readonly, copy, nonatomic) NSArray *keyTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { void /* unknown type, empty encoding */ x0[4]; })globalTransformWithObject:(id)a0 atTime:(double)a1;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })localTransformWithObject:(id)a0 atTime:(double)a1;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentity;
- (void)setLocalTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })localTransformAtTime:(double)a0;
- (id)initWithMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 resetsTransform:(BOOL)a1;
- (void /* unknown type, empty encoding */)rotationAtTime:(double)a0;
- (id)initWithIdentity;
- (id)initWithTransformComponent:(id)a0;
- (id)initWithTransformComponent:(id)a0 resetsTransform:(BOOL)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })rotationMatrixAtTime:(double)a0;
- (void /* unknown type, empty encoding */)scaleAtTime:(double)a0;
- (void)setLocalTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 forTime:(double)a1;
- (void)setMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 forTime:(double)a1;
- (void)setRotation:(SEL)a0 forTime:(double)a1;
- (void)setScale:(SEL)a0 forTime:(double)a1;
- (void)setShear:(SEL)a0 forTime:(double)a1;
- (void)setTranslation:(SEL)a0 forTime:(double)a1;
- (void /* unknown type, empty encoding */)shearAtTime:(double)a0;
- (void /* unknown type, empty encoding */)translationAtTime:(double)a0;

@end
