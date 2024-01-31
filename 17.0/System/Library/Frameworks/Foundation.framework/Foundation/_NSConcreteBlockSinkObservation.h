@class NSObject;
@protocol NSObservable;

@interface _NSConcreteBlockSinkObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    id /* block */ _block;
    int _tag;
}

- (void)remove;
- (void)dealloc;
- (void)_receiveBox:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (void)finishObserving;
- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
