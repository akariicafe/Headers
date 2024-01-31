@class SFDialogView, NSString, WBSTabDialogManager, SFDialog, UIViewController;
@protocol SFDialogViewControllerPresenting, SFDialogViewPresenting, SFDialogControllerDelegate, SFAuthenticatorDialog;

@interface SFDialogController : NSObject <SFDialogViewDelegate> {
    WBSTabDialogManager *_dialogManager;
    SFDialogView *_dialogView;
    UIViewController *_dialogViewController;
    int _webProcessID;
}

@property (weak, nonatomic) id<SFDialogControllerDelegate> delegate;
@property (weak, nonatomic) id<SFDialogViewPresenting> dialogPresenter;
@property (weak, nonatomic) id<SFDialogViewControllerPresenting> viewControllerPresenter;
@property (readonly, nonatomic) SFDialog *presentedDialog;
@property (readonly, nonatomic) SFDialog<SFAuthenticatorDialog> *presentedAuthenticatorDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applicationDidEnterBackground;

- (void)presentNextDialogIfNeeded;
- (int)_currentWebProcessID;
- (id)init;
- (void)presentDialog:(id)a0;
- (void)_dismissCurrentDialogWithResponse:(id)a0;
- (void)owningWebViewWillBecomeActive;
- (void)owningWebViewWillNavigate;
- (void)presentDialog:(id)a0 animateAlongsidePresentation:(id /* block */)a1 dismissal:(id /* block */)a2;
- (BOOL)_isPresentingDialog;
- (long long)_presentDialog:(id)a0 forWebProcessID:(int)a1 withAdditionalAnimations:(id /* block */)a2;
- (void)owningTabWillClose;
- (void).cxx_destruct;
- (struct { int x0; unsigned long long x1; })_currentSlot;
- (void)owningWebViewDidChangeProcessID;
- (void)cancelPresentedDialogIfNeeded;
- (void)owningWebViewDidCommitNavigationWithURL:(id)a0;
- (void)dialogView:(id)a0 didSelectActionAtIndex:(unsigned long long)a1 withInputText:(id)a2 passwordText:(id)a3;
- (void)_dismissDialogWithAdditionalAnimations:(id /* block */)a0;
- (unsigned long long)_tabID;
- (id)_initWithDialogManager:(id)a0;

@end
