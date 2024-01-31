@interface USKResource : NSObject {
    struct shared_ptr<pxrInternal_v0_22__aapl__pxrReserved__::ArAsset> { struct ArAsset *__ptr_; struct __shared_weak_count *__cntrl_; } _asset;
    struct shared_ptr<const char> { char *__ptr_; struct __shared_weak_count *__cntrl_; } _buffer;
    long long _length;
}

+ (id)resourceWithPath:(id)a0;
+ (id)resourceWithResourcePath:(id)a0;
+ (id)resourceWithURL:(id)a0;
+ (id)resourceWithUSKScene:(id)a0 path:(id)a1;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataNoCopy;

@end
