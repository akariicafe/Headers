@protocol LAPasscodeRecoveryEnvironment, LAPSPasscodeChangeController;

@interface LAPasscodeRecoveryService : NSObject {
    id<LAPasscodeRecoveryEnvironment> _env;
    id<LAPSPasscodeChangeController> _recoveryController;
}

- (id)init;
- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (void)cancelRecovery;
- (BOOL)isRecoveryAvailableWithError:(id *)a0;
- (void)startRecoveryInParentVC:(id)a0 completion:(id /* block */)a1;
- (id)lastPasscodeChange;

@end
