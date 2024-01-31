@interface CSUMetricOperatingPointCurve : NSObject {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _metrics;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _operatingPoints;
}

@property (readonly, nonatomic) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (id)initWithMetricToOperatingPointMap:(const void *)a0;

@end
