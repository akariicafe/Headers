@class NSString;
@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeyValidatorProxyImpl : NSObject <CDPRecoveryKeyValidator> {
    id<CDPRecoveryKeyValidator> _validator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)confirmRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)confirmRecoveryKey:(id)a0 error:(id *)a1;
- (void)generateRecoveryKey:(id /* block */)a0;
- (id)generateRecoveryKeyWithError:(id *)a0;
- (id)initWithRemoteObject:(id)a0;

@end
