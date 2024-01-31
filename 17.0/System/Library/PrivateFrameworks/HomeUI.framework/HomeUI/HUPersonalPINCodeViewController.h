@class HUPersonalPINCodeItemManager, NSString, HFPinCodeManager;
@protocol HUPersonalPINCodeViewControllerDelegate, HUPresentationDelegate;

@interface HUPersonalPINCodeViewController : HUItemTableViewController <UIResponderStandardEditActions, HUPresentationDelegateHost>

@property (weak, nonatomic) HUPersonalPINCodeItemManager *personalPINCodeItemManager;
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager;
@property (weak, nonatomic) id<HUPersonalPINCodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)copy:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_shareCode;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)currentPinCodeValue;
- (id)initWithItem:(id)a0 pinCodeManager:(id)a1 home:(id)a2;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)openPINCodeEditor;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
