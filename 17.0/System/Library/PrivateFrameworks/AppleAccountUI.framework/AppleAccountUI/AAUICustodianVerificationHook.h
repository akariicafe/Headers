@class UIViewController, NSString, RUIObjectModel, AAUINavigationItemSpinnerController, AIDAAccountManager, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface AAUICustodianVerificationHook : NSObject <AAUIServerHook, AAUIOBTableWelcomeControllerDelegate> {
    id /* block */ _hookCompletion;
    AAUINavigationItemSpinnerController *_spinnerController;
    UIViewController *_presentingViewController;
    BOOL _forceInline;
    AIDAAccountManager *_accountManager;
}

@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dismissUI;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (void)_cancelFlow;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)_displayCustodianFetchErrorAlert;
- (void)_displayListOfCustodiansWithContacts:(id)a0;
- (void)_processAttributes:(id)a0;
- (BOOL)_shouldPresentInline;
- (void)_verifyCustodianWithServerAttributes:(id)a0 completion:(id /* block */)a1;
- (void)tableWelcomeViewControllerDidTapPrimaryButton;
- (void)tableWelcomeViewControllerDidTapSecondaryButton;

@end
