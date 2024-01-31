@class BSAtomicSignal, BSAction;

@interface FBSceneClientProviderInvalidationAction : NSObject {
    BSAtomicSignal *_invalidated;
    BSAction *_action;
}

- (void)invalidate;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
