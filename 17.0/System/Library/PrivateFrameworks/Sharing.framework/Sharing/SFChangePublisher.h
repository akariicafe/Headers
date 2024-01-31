@class NSPointerArray;

@interface SFChangePublisher : NSObject

@property (readonly, nonatomic) NSPointerArray *observers;

- (id)init;
- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (void).cxx_destruct;
- (void)publishChangeDescriptor:(unsigned long long)a0 forObservable:(id)a1;

@end
