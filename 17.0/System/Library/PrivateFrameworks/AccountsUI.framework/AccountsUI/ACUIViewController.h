@class NSString, ACUIAccountOperationsHelper, ACAccountStore, UIProgressHUD, UIBarButtonItem;
@protocol ACUIViewControllerAccountChangeObserver;

@interface ACUIViewController : PSListController <UIActionSheetDelegate, ACUIAccountOperationsDelegate> {
    BOOL _addedToTaskList;
    BOOL _activityInProgress;
    id /* block */ _confirmationViewCompletion;
    UIProgressHUD *_hud;
}

@property (nonatomic) BOOL validationInProgress;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACUIAccountOperationsHelper *accountOperationsHelper;
@property (weak, nonatomic) id<ACUIViewControllerAccountChangeObserver> accountChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acuiAccountStore;
+ (BOOL)shouldPresentAsModalSheet;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)actionSheet:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)cancelButtonTapped:(id)a0;
- (id)_actionSheetWithButtons:(id)a0 title:(id)a1 destructive:(BOOL)a2 cancelButtonIndex:(long long)a3 context:(id)a4;
- (id)_alertViewWithButtons:(id)a0 title:(id)a1 message:(id)a2 cancelButtonIndex:(long long)a3 context:(id)a4;
- (id)_effectiveParentController;
- (void)confirmationView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)hideActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)a0;
- (BOOL)isPresentedAsModalSheet;
- (BOOL)isShowingActivityInProgressUI;
- (id)operationsHelper:(id)a0 desiredDataclassActionFromPicker:(id)a1;
- (void)operationsHelper:(id)a0 didRemoveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (void)operationsHelper:(id)a0 didSaveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (void)operationsHelper:(id)a0 willRemoveAccount:(id)a1;
- (void)operationsHelper:(id)a0 willSaveAccount:(id)a1;
- (void)reloadAllParentSpecifiers;
- (void)reloadAllParentSpecifiersAnimated:(BOOL)a0;
- (void)reloadParentSpecifier;
- (void)removeParentSpecifier;
- (void)setCellsChecked:(BOOL)a0;
- (void)setTaskCompletionAssertionEnabled:(BOOL)a0;
- (void)showActivityInProgressUIWithMessage:(id)a0;
- (id)showAlertViewWithButtons:(id)a0 title:(id)a1 message:(id)a2 destructive:(BOOL)a3 cancelButtonIndex:(long long)a4 context:(id)a5 completion:(id /* block */)a6;
- (id)showAlertViewWithButtons:(id)a0 title:(id)a1 message:(id)a2 destructive:(BOOL)a3 context:(id)a4 completion:(id /* block */)a5;
- (void)showConfirmationForDeletingAccount:(id)a0 completion:(id /* block */)a1;
- (id)showConfirmationViewForDeletingAccount:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)showConfirmationViewWithButtons:(id)a0 title:(id)a1 message:(id)a2 destructive:(BOOL)a3 cancelButtonIndex:(long long)a4 context:(id)a5 completion:(id /* block */)a6;
- (id)showConfirmationViewWithButtons:(id)a0 title:(id)a1 message:(id)a2 destructive:(BOOL)a3 cancelButtonIndex:(long long)a4 context:(id)a5 forceAlert:(BOOL)a6 completion:(id /* block */)a7;
- (id)showConfirmationViewWithButtons:(id)a0 title:(id)a1 message:(id)a2 destructive:(BOOL)a3 context:(id)a4 completion:(id /* block */)a5;
- (void)showConfirmationWithActions:(id)a0 title:(id)a1 message:(id)a2;
- (void)showConfirmationWithButtons:(id)a0 title:(id)a1 message:(id)a2 destructive:(BOOL)a3 completion:(id /* block */)a4;
- (void)startValidationWithPrompt:(id)a0;
- (void)startValidationWithPrompt:(id)a0 userInteraction:(BOOL)a1;
- (void)stopValidationWithPrompt:(id)a0 showButtons:(BOOL)a1;
- (void)updateValidationPrompt:(id)a0;

@end
