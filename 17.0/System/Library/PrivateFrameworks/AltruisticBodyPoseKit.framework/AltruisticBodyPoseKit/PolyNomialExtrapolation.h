@interface PolyNomialExtrapolation : NSObject {
    int _N;
    int _n;
    struct Matrix<float, 0U, 0U, false> { float *m_data; unsigned long long m_capacity; unsigned int m_rows; unsigned int m_cols; } _A[2];
    struct Matrix<float, 0U, 1U, false> { float *m_data; unsigned long long m_capacity; unsigned int m_rows; } _b[2];
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _g;
    struct deque<float, std::allocator<float>> { struct __split_buffer<float *, std::allocator<float *>> { float **__first_; float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<float>> { unsigned long long __value_; } __size_; } _x;
    struct deque<float, std::allocator<float>> { struct __split_buffer<float *, std::allocator<float *>> { float **__first_; float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<float>> { unsigned long long __value_; } __size_; } _y;
}

- (BOOL)ready;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)predict;
- (id)initWithHistorySize:(unsigned long long)a0 degreeOfPolynomial:(unsigned long long)a1;
- (void)printHistoryNamed:(id)a0;
- (void)pushPoint:(SEL)a0;

@end
