@class NSObject;
@protocol OS_dispatch_queue;

@interface TSUWidthLimitedQueue : NSObject {
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mUnfairLock;
}

@property (readonly, nonatomic) unsigned long long limit;

- (id)init;
- (void)performAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0;
- (void)performSync:(id /* block */)a0;
- (id)initWithLimit:(unsigned long long)a0 name:(id)a1;

@end
