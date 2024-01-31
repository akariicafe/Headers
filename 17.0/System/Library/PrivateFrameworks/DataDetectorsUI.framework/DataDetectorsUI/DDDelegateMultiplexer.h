@protocol NSObject;

@interface DDDelegateMultiplexer : NSProxy {
    id<NSObject> _delegateA;
    id<NSObject> _delegateB;
}

- (void)forwardInvocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithDelegate:(id)a0 andDelegate:(id)a1;

@end
