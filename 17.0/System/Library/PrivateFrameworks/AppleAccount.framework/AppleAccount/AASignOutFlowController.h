@class ACAccountStore;
@protocol AASignOutFlowControllerDelegate;

@interface AASignOutFlowController : NSObject {
    ACAccountStore *_accountStore;
}

@property (weak, nonatomic) id<AASignOutFlowControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)signOutAppleAccount:(id)a0 completion:(id /* block */)a1;
- (void)_delegate_disableFindMyDeviceForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_delegate_performWalrusValidationForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_delegate_presentError:(id)a0 withTitle:(id)a1;
- (void)_delegate_signOutAccount:(id)a0 completion:(id /* block */)a1;
- (void)_disableDeviceLocatorForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_performWalrusValidationForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_preflightSignOutOfAccount:(id)a0 completion:(id /* block */)a1;
- (void)_signOutAppleAccount:(id)a0 completion:(id /* block */)a1;

@end
