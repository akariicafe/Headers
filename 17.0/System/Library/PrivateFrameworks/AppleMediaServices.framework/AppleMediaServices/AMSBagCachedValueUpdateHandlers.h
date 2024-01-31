@interface AMSBagCachedValueUpdateHandlers : NSObject {
    void /* unknown type, empty encoding */ handlerQueue;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) unsigned long long uninitializedToken;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)addHandlerWithKeys:(id)a0 initialValues:(id)a1 handler:(id /* block */)a2;
- (unsigned long long)addHandlerWithKeys:(id)a0 initialValues:(id)a1 metricsTracker:(id)a2 handler:(id /* block */)a3;
- (void)callHandlersUsingNewBagDictionary:(id)a0 changedKeys:(id)a1;
- (id)initWithHandlerQueue:(id)a0;
- (void)removeHandlerWithToken:(unsigned long long)a0;

@end
