@class Protocol;

@interface IMInvocationCapturingProxy : NSProxy

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, copy, nonatomic) id /* block */ forwardingHandler;

- (void)forwardInvocation:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithProtocol:(id)a0 forwardingHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
