@interface PLLazyObject : NSObject {
    BOOL _shouldRetryBlockOnNil;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _block;
    id _object;
}

@property (readonly) id objectValue;
@property (readonly) id currentObjectValueWithoutForcingEvaluation;

- (id)initWithObject:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void)resetObjectWithHandler:(id /* block */)a0;
- (void)invalidateWithHandler:(id /* block */)a0;
- (void)invalidate;
- (void)resetObject;
- (id)initWithRetriableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRetry:(BOOL)a0 block:(id /* block */)a1;

@end
