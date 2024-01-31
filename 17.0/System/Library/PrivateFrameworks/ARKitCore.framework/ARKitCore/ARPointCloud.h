@class ADJasperPointCloud;

@interface ARPointCloud : NSObject <NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _pointsVector;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _identifiersVector;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _vergenceAngleCosinesVector;
    void /* unknown type, empty encoding */ _centroid;
    void /* unknown type, empty encoding */ _standardDeviation;
    ADJasperPointCloud *_depthPointCloud;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const void *points;
@property (readonly, nonatomic) const unsigned long long *identifiers;

+ (id)emptyPointCloud;
+ (id)concatPointClouds:(id)a0;

- (void /* unknown type, empty encoding */)centroid;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void /* unknown type, empty encoding */)standardDeviation;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)filterPointCloudFrom:(id)a0 ellipsoid:(SEL)a1;
- (id)depthPointCloud;
- (id)_hitTestPointFromOrigin:(id)a0 withDirection:(SEL)a1 maximumAngle:(float)a2 cameraToWorldTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (struct { })computeBounds;
- (id)filterPointCloudWithIdentifiers:(struct set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { struct __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<unsigned long long>> { unsigned long long x0; } x2; } x0; })a0;
- (id)initWithCV3DPointData:(id)a0 minVergenceAngleCosine:(double)a1;
- (id)initWithDepthPointCloud:(id)a0;
- (id)initWithPointData:(id)a0;
- (id)initWithPointsVector:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *x0; } **x0; })a0 identifiersVector:(struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x0; } x2; })a1;
- (id)initWithPointsVector:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *x0; } **x0; })a0 identifiersVector:(struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x0; } x2; })a1 vergenceAngleCosinesVector:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a2;
- (id)pointCloudByApplyingTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (const float *)vergenceAngleCosines;

@end
