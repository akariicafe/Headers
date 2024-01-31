@class ABPKSkeletonDefinition;

@interface ABPKSkeleton : NSObject {
    struct vector<ABPKTransform, std::allocator<ABPKTransform>> { struct ABPKTransform *__begin_; struct ABPKTransform *__end_; struct __compressed_pair<ABPKTransform *, std::allocator<ABPKTransform>> { struct ABPKTransform *__value_; } __end_cap_; } _localPoses;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _modelPoses;
}

@property (readonly, nonatomic) long long skeletonType;
@property (readonly, nonatomic) ABPKSkeletonDefinition *skeletonDefinition;
@property (readonly, nonatomic) const struct ABPKTransform { struct { } x0; } *localPoses;
@property (nonatomic) float estimatedScale;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *modelPoses;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraRootTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } renderingCameraRootTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } deviceRootTransform;

- (id)init;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)toDictionary;
- (float)computeHeight;
- (void)getGlobalJointDataForSkeletonWithPosition:(void *)a0 withOrientation:(struct { } *)a1;
- (void)getLocalJointDataForSkeletonWithPosition:(void *)a0 withOrientation:(struct { } *)a1;
- (void)scaleTransform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 withScale:(float)a1;
- (void)setLocalPoses:(const struct ABPKTransform { struct { } x0; } *)a0 andUpdateModelPoses:(BOOL)a1;
- (void)setModelPoses:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 andUpdateLocalPoses:(BOOL)a1;
- (void)setModelPosesFromDict:(id)a0 andUpdateLocalPoses:(BOOL)a1;
- (void)transformModelPoses:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 andUpdateLocalPoses:(BOOL)a1;
- (void)updateJointPosesAndRootTransformUsingDepthEstimatedScale;
- (void)updateLocalPosesFromModelPoses;
- (void)updateModelPosesFromLocalPoses;

@end
