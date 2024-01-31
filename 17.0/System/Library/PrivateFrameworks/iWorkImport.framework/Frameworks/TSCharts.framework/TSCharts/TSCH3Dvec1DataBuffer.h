@interface TSCH3Dvec1DataBuffer : TSCH3DFloatVectorDataBuffer {
    struct vector<glm::detail::tvec1<float>, std::allocator<glm::detail::tvec1<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec1<float> *, std::allocator<glm::detail::tvec1<float>>> { void *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (void)clear;
- (unsigned long long)components;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (const void *)data;
- (void).cxx_destruct;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
