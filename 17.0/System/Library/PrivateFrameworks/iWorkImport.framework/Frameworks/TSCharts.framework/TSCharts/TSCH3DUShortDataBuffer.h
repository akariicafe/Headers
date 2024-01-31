@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned short>, std::allocator<TSCH3D::PODType<unsigned short>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::PODType<unsigned short> *, std::allocator<TSCH3D::PODType<unsigned short>>> { void *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (void)clear;
- (unsigned long long)components;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (const void *)data;
- (void).cxx_destruct;
- (int)componentType;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
