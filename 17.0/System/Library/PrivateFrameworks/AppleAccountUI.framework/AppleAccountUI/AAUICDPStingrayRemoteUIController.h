@class RUIServerHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject {
    RUIServerHookHandler *_serverHookHandler;
    ACAccount *_account;
}

- (void).cxx_destruct;
- (id)initWithRemoteUIController:(id)a0;
- (void)attachAllHandlers;
- (void)processObjectModel:(id)a0 isModal:(BOOL)a1;
- (void)setPresentingController:(id)a0;
- (void)attachAuthHandler:(id /* block */)a0;
- (void)attachPasscodeHandler:(id /* block */)a0;
- (void)attachRecoveryKeyHandler:(id /* block */)a0;
- (void)attachRepairHandler:(id /* block */)a0;
- (id)initWithRemoteUIController:(id)a0 appleAccount:(id)a1;
- (id)initWithRemoteUIController:(id)a0 appleAccount:(id)a1 hooks:(id)a2;
- (void)processObjectModel:(id)a0 isModal:(BOOL)a1 completion:(id /* block */)a2;

@end
