@interface CHBoxcarFilterPointFIFO : CHPointFIFO {
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _prevPoints;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;

- (void)clear;
- (void)flush;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1 spacing:(float)a2;

@end
