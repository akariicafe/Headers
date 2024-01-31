@class NSObject;
@protocol OS_dispatch_queue;

@interface ReachabilityCallbacker : NSObject {
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _listener;
    NSObject<OS_dispatch_queue> *_queue;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

- (id)initWithListener:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0 queue:(id)a1;
- (void)dealloc;
- (id).cxx_construct;
- (void)clearListener;
- (void).cxx_destruct;
- (void)_reachabilityChanged:(id)a0;

@end
