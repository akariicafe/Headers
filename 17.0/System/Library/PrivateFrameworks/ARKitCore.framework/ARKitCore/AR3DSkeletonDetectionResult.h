@class NSArray, ABPK2DDetectionResult;

@interface AR3DSkeletonDetectionResult : NSObject <NSSecureCoding, NSCopying> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _jointsVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _jointsVectorLocalSpace;
}

@property (class, readonly, nonatomic) NSArray *jointNames;
@property (class, readonly, nonatomic) NSArray *parentIndices;
@property (class, readonly, nonatomic) NSArray *childrenIndices;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) const void *joints;
@property (readonly, nonatomic) const void *jointsLocalSpace;
@property (readonly, nonatomic) ABPK2DDetectionResult *skeletonDetectionResult2D;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isJointTracked:(long long)a0;
- (id)createResultScaledByFactor:(float)a0;
- (id)initWithJoints:(void *)a0 numberOfJoints:(unsigned long long)a1 referenceDetectionResult:(id)a2;

@end
