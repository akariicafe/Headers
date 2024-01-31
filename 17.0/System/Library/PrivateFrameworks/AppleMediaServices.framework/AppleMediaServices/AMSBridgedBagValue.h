@class AMSPromise;

@interface AMSBridgedBagValue : AMSFrozenBagValue

@property (retain, nonatomic) AMSPromise *valuePromise;

- (void)valueWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 valueType:(unsigned long long)a1 valuePromise:(id)a2;

@end
