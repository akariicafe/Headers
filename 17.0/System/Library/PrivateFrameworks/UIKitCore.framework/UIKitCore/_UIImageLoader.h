@class UIImage, NSError, NSMutableArray;

@interface _UIImageLoader : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _started;
    _Atomic BOOL _finished;
    _Atomic BOOL _cancelled;
    UIImage *_image;
    NSError *_error;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _trampolineLock;
    NSMutableArray *_completionTrampolines;
}

@property (readonly) BOOL _isFinished;
@property (readonly) BOOL _isCancelled;
@property (readonly) UIImage *_image;
@property (readonly) NSError *_error;

+ (id)_imageLoaderWithDataFromItemProvider:(id)a0 typeIdentifier:(id)a1;
+ (id)_imageLoaderWithLoadingQueue:(id)a0 handler:(id /* block */)a1;
+ (id)_imageLoaderWithURLRequest:(id)a0 session:(id)a1;

- (void)_cancel;
- (id)init;
- (void).cxx_destruct;
- (void)_loadImageWithCompletionQueue:(id)a0 handler:(id /* block */)a1;
- (BOOL)_really_cancel;
- (void)_really_loadImage:(id /* block */)a0;

@end
