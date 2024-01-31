@class NSArray;

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {
    NSArray *_modes;
    double _delay;
}

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 delay:(double)a1 modes:(id)a2;

@end
