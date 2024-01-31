@interface PHASEVoxelSet3D : NSObject {
    struct vector<unsigned short __attribute__((ext_vector_type(3))), std::allocator<unsigned short __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<unsigned short * __attribute__((ext_vector_type(3))), std::allocator<unsigned short __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _points;
}

@property (readonly, nonatomic) long long size;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPoints:(void *)a0 count:(unsigned long long)a1;
- (void /* unknown type, empty encoding */)getAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)voxelAtIndex:(long long)a0;

@end
