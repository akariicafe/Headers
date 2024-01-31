@interface SampleTimeRangeBuffer : NSObject {
    struct vector<CMTimeRange, std::allocator<CMTimeRange>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTimeRange *, std::allocator<CMTimeRange>> { struct *__value_; } __end_cap_; } _ranges;
}

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)timeRangeList;

@end
