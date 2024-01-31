@class NSThread, UIImage, BSAtomicSignal, NSObject;
@protocol OS_dispatch_queue;

@interface BSUIMappedImageCacheFuture : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSAtomicSignal *_submitted;
    NSThread *_submissionThread;
    id /* block */ _lock_workBlock;
    BOOL _lock_workCompletionWasCalled;
    UIImage *_postlock_cachedImage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
