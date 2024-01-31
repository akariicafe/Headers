@interface NUISizeCache : NSObject {
    struct nui_size_cache { void *__begin_; void *__end_; struct __compressed_pair<std::pair<CGSize, CGSize> *, std::allocator<std::pair<CGSize, CGSize>>> { void *__value_; } __end_cap_; } _sizeCache;
    BOOL _threadSafe;
}

- (void)invalidateCache;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)getSize:(struct CGSize { double x0; double x1; } *)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 isSizeDependentOnPerpendicularAxis:(BOOL)a2;
- (id)initForAsynchronousAccess:(BOOL)a0;
- (void)insertSize:(struct CGSize { double x0; double x1; })a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;

@end
