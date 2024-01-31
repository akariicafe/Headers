@class NSString;
@protocol LAPSPasscodeChangeSystem, LAPSPasscodeChangeUI;

@interface LAPSPasscodeChangeController : NSObject <LAPSPasscodeChangeUIDelegate, LAPSPasscodeChangeController> {
    id<LAPSPasscodeChangeSystem> _system;
    id<LAPSPasscodeChangeUI> _ui;
    id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)startWithCompletion:(id /* block */)a0;
- (void)_checkCanChangePasscodeWithCompletion:(id /* block */)a0;
- (void)_fetchNewPasscode:(id)a0 completion:(id /* block */)a1;
- (void)_fetchOldPasscode:(id)a0 completion:(id /* block */)a1;
- (void)_notifyCompletionWithPasscode:(id)a0 error:(id)a1;
- (void)_runWithCompletion:(id /* block */)a0;
- (id)initWithSystem:(id)a0 ui:(id)a1;
- (void)passcodeRecoveryUI:(id)a0 verifyNewPasscode:(id)a1 completion:(id /* block */)a2;
- (void)passcodeRecoveryUI:(id)a0 verifyPasscode:(id)a1 completion:(id /* block */)a2;

@end
