@interface TeaFoundation.BridgedRegistrationContainer : NSObject <TFRegistrationContainer> {
    void /* unknown type, empty encoding */ registrationContainer;
}

- (id)init;
- (id)registerClass:(Class)a0 factory:(id /* block */)a1;
- (id)registerUncheckedProtocol:(id)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)registerProtocol:(id)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)registerProtocol:(id)a0 factory:(id /* block */)a1;
- (id)registerClass:(Class)a0 name:(id)a1 factory:(id /* block */)a2;
- (void).cxx_destruct;
- (id)registerUncheckedProtocol:(id)a0 factory:(id /* block */)a1;

@end
