@class NSThread, CADisplayLink;

@interface RBAnimationTimer : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cond;
    struct objc_ptr<NSThread *> { NSThread *_p; } _thread;
    struct objc_ptr<CADisplayLink *> { CADisplayLink *_p; } _link;
    unsigned int _empty_ttl;
    int _frame_rate;
    int _pending_frame_rate;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)thread:(id)a0;
- (void)dispatchHandlers:(id)a0;

@end
