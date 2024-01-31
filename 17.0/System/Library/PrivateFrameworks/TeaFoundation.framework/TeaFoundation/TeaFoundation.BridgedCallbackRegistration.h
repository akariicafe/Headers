@interface TeaFoundation.BridgedCallbackRegistration : NSObject <TFCallbackRegistration> {
    void /* unknown type, empty encoding */ callback;
}

- (id)init;
- (void)whenResolvingClass:(Class)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)whenResolvingProtocol:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;

@end
