@interface MTLSCorner : MTLSPath {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _points;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithStrokeWeight:(id)a0 radius:(SEL)a1 outerAnchor:(float)a2 innerAnchor:(float)a3 cornerEdge:(float)a4 scale:(float)a5 rotation:(float)a6 translation:(struct AxisAngle { float x0; })a7;

@end
