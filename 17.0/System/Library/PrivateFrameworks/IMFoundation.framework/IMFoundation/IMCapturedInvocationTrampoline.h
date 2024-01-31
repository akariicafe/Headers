@interface IMCapturedInvocationTrampoline : IMInvocationTrampoline {
    id *_outInvocation;
}

- (void)forwardInvocation:(id)a0;
- (id)initWithTarget:(id)a0 outInvocation:(id *)a1;

@end
