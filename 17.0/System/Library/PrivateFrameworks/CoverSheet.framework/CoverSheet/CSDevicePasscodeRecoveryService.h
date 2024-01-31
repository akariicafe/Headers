@class LAPasscodeRecoveryService;

@interface CSDevicePasscodeRecoveryService : NSObject {
    LAPasscodeRecoveryService *_service;
}

- (id)init;
- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (BOOL)canStartRecovery;
- (void)startRecoveryInParentVC:(id)a0 completion:(id /* block */)a1;

@end
