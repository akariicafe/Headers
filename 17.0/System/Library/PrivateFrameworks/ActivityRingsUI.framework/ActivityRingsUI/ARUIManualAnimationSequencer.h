@class NSString, ARUIObserverStore;

@interface ARUIManualAnimationSequencer : NSObject <ARUIAnimationSequencing> {
    ARUIObserverStore *_observers;
    id /* block */ _completion;
    double _timeUntilCompletion;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)tick;
- (void)performAfter:(double)a0 completion:(id /* block */)a1;

@end
