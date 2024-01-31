@interface PHASETransmissionModelerSourcePointSet : NSObject {
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _points;
}

@property (readonly, nonatomic) long long size;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)attenuationAtIndex:(long long)a0;
- (float)getAttenuationAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)getPositionAndAttenuationAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)getPositionAtIndex:(long long)a0;
- (id)initWithRenderSourceView:(const void *)a0;
- (void /* unknown type, empty encoding */)positionAndAttenuationAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)positionAtIndex:(long long)a0;

@end
