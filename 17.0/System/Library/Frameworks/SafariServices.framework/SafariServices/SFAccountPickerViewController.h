@class NSString, LAContext, _SFAccountPickerTableViewController, _ASIncomingCallObserver;
@protocol SFAccountPickerViewControllerSystemAutoFillDelegate;

@interface SFAccountPickerViewController : UINavigationController <_SFAccountPickerTableViewControllerDelegate> {
    id /* block */ _completionHandler;
    _SFAccountPickerTableViewController *_accountPickerTableViewController;
    _ASIncomingCallObserver *_callObserver;
    BOOL _isDismissingSelf;
}

@property (retain, nonatomic) LAContext *authenticatedContext;
@property (weak, nonatomic) id<SFAccountPickerViewControllerSystemAutoFillDelegate> systemAutoFillDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_callCompletionHandlerIfNeeded:(id)a0;
- (void)_dismissWithAnimation:(BOOL)a0 accounts:(id)a1;
- (void)_viewControllerDismissalTransitionDidEnd:(id)a0;
- (void)accountPickerTableViewController:(id)a0 didPickSavedAccounts:(id)a1;
- (void)accountPickerTableViewController:(id)a0 fillPasswordForSavedAccount:(id)a1;
- (void)accountPickerTableViewController:(id)a0 fillUsernameForSavedAccount:(id)a1;
- (void)accountPickerTableViewController:(id)a0 fillVerificationCode:(id)a1;
- (void)accountPickerTableViewController:(id)a0 fillVerificationCodeForSavedAccount:(id)a1;
- (void)accountPickerTableViewControllerDidCancel:(id)a0;
- (id)initWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
