@class VFCancelationToken;

@interface _VFGeneratorObservable : VFObservable {
    VFCancelationToken *_cancelable;
    id _state;
    id /* block */ _condition;
    id /* block */ _nextStateForState;
    id /* block */ _resultFromState;
}

- (void)_updateState;
- (BOOL)_isFinished;
- (void)_scheduleNextResultForObserver:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3;

@end
