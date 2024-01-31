@class NSProgress;

@interface PLProgressFollower : NSObject {
    id /* block */ _progressHandler;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSProgress *outputProgress;
@property (readonly) NSProgress *sourceProgress;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithSourceProgress:(id)a0 progressHandler:(id /* block */)a1;

@end
