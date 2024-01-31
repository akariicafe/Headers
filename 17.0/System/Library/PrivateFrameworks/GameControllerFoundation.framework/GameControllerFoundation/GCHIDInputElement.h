@class _scaleType, HIDElement;

@interface GCHIDInputElement : NSObject {
    struct ObserverList { struct Observer *tqh_first; struct Observer **tqh_last; } _observers;
    struct Observer { _scaleType *_handler; long long x0; struct { struct Observer *tqe_next; struct Observer **tqe_prev; } pointers; } _firstObserver;
}

@property (readonly) HIDElement *element;
@property (readonly, nonatomic) struct __IOHIDValue { } *value;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0;
- (double)scaledValue:(long long)a0;
- (void)addScaled:(long long)a0 valueChangedHandler:(id /* block */)a1;
- (void)addValueChangedHandler:(id /* block */)a0;
- (id)registerScaled:(long long)a0 valueChangedHandler:(id /* block */)a1;
- (id)registerValueChangedHandler:(id /* block */)a0;

@end
