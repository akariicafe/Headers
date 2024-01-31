@interface _UITextSizeCache : NSObject {
    struct ui_size_cache { struct *__begin_; struct *__end_; struct __compressed_pair<ui_size_cache_value *, std::allocator<ui_size_cache_value>> { struct *__value_; } __end_cap_; } _cache;
}

- (BOOL)getSize:(struct CGSize { double x0; double x1; } *)a0 baselineInfo:(struct { double x0; double x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; long long x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a1 forTargetSize:(struct CGSize { double x0; double x1; })a2 isMultiline:(BOOL)a3;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addSize:(struct CGSize { double x0; double x1; })a0 baselineInfo:(struct { double x0; double x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; long long x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *)a1 forTargetSize:(struct CGSize { double x0; double x1; })a2;
- (void)removeAllSizes;

@end
