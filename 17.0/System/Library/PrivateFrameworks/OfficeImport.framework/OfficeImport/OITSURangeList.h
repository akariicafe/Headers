@interface OITSURangeList : NSObject {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } mRangeList;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)stringValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (void)reverse;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;
- (void)removeRangeAtIndex:(unsigned long long)a0;
- (void)consolidate;
- (id)initWithRangeList:(id)a0;
- (void)replaceWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;

@end
