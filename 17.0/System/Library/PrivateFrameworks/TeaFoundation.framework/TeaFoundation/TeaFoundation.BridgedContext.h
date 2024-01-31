@interface TeaFoundation.BridgedContext : NSObject <TFContext> {
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void)whenResolvingClass:(Class)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)whenResolvingProtocol:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)useObject:(id)a0 forClass:(Class)a1;
- (void)useObject:(id)a0 forClass:(Class)a1 name:(id)a2;
- (void)useObject:(id)a0 forProtocol:(id)a1;
- (void)useObject:(id)a0 forProtocol:(id)a1 name:(id)a2;

@end
