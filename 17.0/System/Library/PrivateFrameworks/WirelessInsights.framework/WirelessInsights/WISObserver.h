@protocol WISObserverDelegate;

@interface WISObserver : NSObject {
    struct shared_ptr<WISObserverConnection> { struct WISObserverConnection *__ptr_; struct __shared_weak_count *__cntrl_; } observerConnection;
}

@property (weak, nonatomic) id<WISObserverDelegate> delegate;

- (id)init;
- (id).cxx_construct;
- (void)setDelegate:(id)a0 queue:(struct dispatch_queue_s { } *)a1;
- (void)setConfiguration:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
