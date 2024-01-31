@class NSUUID, NSString;

@interface OUKeyframeExtended : NSObject <OUKeyframe> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _points;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _pointsToWorld;
    struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _semLabels;
    struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _semVotes;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _colors;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraPose;
@property (nonatomic) unsigned int groupId;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) const void *points;
@property (readonly, nonatomic) const void *semanticLabels;
@property (readonly, nonatomic) const void *semanticVotes;
@property (readonly, nonatomic) void *colors;
@property (readonly, nonatomic) void *pointsToWorld;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)translateBy:(SEL)a0;
- (id)initWithDictionary:(id)a0 withGroupId:(unsigned int)a1;
- (void)filterOutPointsBeyondDistance:(float)a0;
- (id)initWithKeyframe:(id)a0 voxelize:(BOOL)a1 resample:(BOOL)a2 outlierRemove:(BOOL)a3;
- (void)rotateAlongZAxis:(float)a0;
- (void)select:(unsigned long long)a0 indices:(const unsigned long long *)a1 from:(id)a2;

@end
