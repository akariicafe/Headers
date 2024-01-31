@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject {
    BSDispatchSource *_source;
    id /* block */ _deathHandler;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithPID:(int)a0 queue:(id)a1 deathHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
