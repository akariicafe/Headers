@class NSArray, UINavigationController, CDPDBackupInfoRecoveryFlowController;

@interface CDPRecoveryTestController : NSObject {
    CDPDBackupInfoRecoveryFlowController *_recoveryController;
    NSArray *_mockDevices;
    UINavigationController *_navController;
}

- (void)setUp;
- (void).cxx_destruct;
- (void)beginIDMSRecoveryFlow;
- (void)beginIDMSRecoveryFlowWithSecretFailure;
- (id)dummyRecoveryInfo;
- (id)initWithDevices:(id)a0 andNavigationController:(id)a1;

@end
