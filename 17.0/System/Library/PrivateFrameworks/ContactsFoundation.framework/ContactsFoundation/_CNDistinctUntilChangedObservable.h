@protocol CNObservable;

@interface _CNDistinctUntilChangedObservable : CNObservable {
    id<CNObservable> _observable;
    id _lastObservedResult;
}

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservable:(id)a0;
- (BOOL)_resultIsDistinctFromLastResult:(id)a0;

@end
