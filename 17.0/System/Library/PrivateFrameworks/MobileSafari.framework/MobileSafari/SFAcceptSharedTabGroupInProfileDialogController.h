@class UIWindowScene, NSString, WBTabGroupManager, SFDialogController, UINavigationController, SFDialog, _SFProfileSelectionTableViewController;

@interface SFAcceptSharedTabGroupInProfileDialogController : NSObject <SFDialogControllerDelegate, SFDialogViewControllerPresenting, SFDialogViewPresenting> {
    UIWindowScene *_windowScene;
    NSString *_sharedTabGroupTitle;
    WBTabGroupManager *_tabGroupManager;
    id /* block */ _completionHandler;
    SFDialog *_dialog;
    SFDialogController *_dialogController;
    UINavigationController *_navigationController;
    _SFProfileSelectionTableViewController *_selectionViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentDialogInScene:(id)a0 forSharedTabGroupWithTitle:(id)a1 tabGroupManager:(id)a2 completionHandler:(id /* block */)a3;

- (void)dialogController:(id)a0 presentViewController:(id)a1 withAdditionalAnimations:(id /* block */)a2;
- (void)dismissDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (void)presentDialogView:(id)a0 withAdditionalAnimations:(id /* block */)a1 forDialogController:(id)a2;
- (void)dialogController:(id)a0 dismissViewController:(id)a1 withAdditionalAnimations:(id /* block */)a2;
- (void).cxx_destruct;
- (int)webProcessIDForDialogController:(id)a0;
- (void)cancel;
- (id)_presentationViewController;
- (id)_actionToOpenInProfile:(id)a0;
- (id)_initWithScene:(id)a0 sharedTabGroupTitle:(id)a1 tabGroupManager:(id)a2 completionHandler:(id /* block */)a3;
- (id)_makeDialog;
- (void)_presentDialog;
- (void)_showAllProfilesDialog;
- (void)selectProfile;

@end
