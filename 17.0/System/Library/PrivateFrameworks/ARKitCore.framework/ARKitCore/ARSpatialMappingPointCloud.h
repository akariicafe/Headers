@class NSUUID;

@interface ARSpatialMappingPointCloud : NSObject <NSCopying> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _points;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _normals;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _colors;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _semantics;
    struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _semanticLabels;
    struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _semanticVotes;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _pointsToWorld;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) const void *points;
@property (readonly, nonatomic) const void *semanticLabels;
@property (readonly, nonatomic) const void *semanticVotes;
@property struct { void /* unknown type, empty encoding */ columns[4]; } cameraPose;
@property (readonly, nonatomic) void *normals;
@property (readonly, nonatomic) void *colors;
@property (readonly, nonatomic) char *semantics;
@property (readonly, nonatomic) unsigned long long semanticsBinSize;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) void *pointsToWorld;
@property (readonly, nonatomic) double timestamp;

+ (id)dictionaryFromArray:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPointCloud:(struct CV3DReconPointCloud { } *)a0 smTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 identifier:(id)a2 timestamp:(double)a3;
- (id)initWithPointCloud:(struct CV3DReconPointCloud { } *)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 identifier:(id)a2 timestamp:(double)a3;
- (void)updateTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
