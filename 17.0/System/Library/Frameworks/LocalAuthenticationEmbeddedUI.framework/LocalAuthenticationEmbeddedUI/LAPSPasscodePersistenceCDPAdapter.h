@interface LAPSPasscodePersistenceCDPAdapter : NSObject

- (unsigned long long)_deviceSecretType:(id)a0;
- (void)reportPasscodeDidChangeTo:(id)a0 passcodeType:(id)a1 completion:(id /* block */)a2;

@end
