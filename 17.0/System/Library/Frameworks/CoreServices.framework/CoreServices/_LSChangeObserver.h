@interface _LSChangeObserver : NSObject {
    id /* block */ block;
    unsigned int uid;
    struct NotifyToken { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } rawValue; } notifyToken;
    int coalescingFlag;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
