@class ABPK2DDetectionResult;

@interface ABPK3DLiftingResult : NSObject {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _jointsVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _rawNetworkOutputJointsVector;
}

@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) void *joints;
@property (readonly, nonatomic) void *rawNetworkOutputJoints;
@property (readonly, nonatomic) ABPK2DDetectionResult *skeletonDetectionResult2D;
@property (nonatomic) float estimatedScale;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isJointTracked:(long long)a0;
- (id)createResultScaledByFactor:(float)a0;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1 referenceDetectionResult:(id)a2;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1 rawNetworkOutputs:(const void *)a2 referenceDetectionResult:(id)a3;
- (id)initWithJoints:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *x0; } **x0; })a0 rawNetworkOutputs:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *x0; } **x0; })a1 referenceDetectionResult:(id)a2;

@end
