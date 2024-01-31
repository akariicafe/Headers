@class NSObject;
@protocol NSObserver, NSObservable;

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)remove;
- (void)dealloc;
- (void)_receiveBox:(id)a0;
- (id)debugDescription;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)finishObserving;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
