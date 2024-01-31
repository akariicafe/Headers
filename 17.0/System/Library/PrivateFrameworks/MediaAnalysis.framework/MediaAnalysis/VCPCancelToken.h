@interface VCPCancelToken : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
}

- (BOOL)isCanceled;
- (void)cancel;

@end
