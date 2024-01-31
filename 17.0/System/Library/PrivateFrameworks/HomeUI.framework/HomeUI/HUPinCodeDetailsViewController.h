@class NSString, NSArray, HFPinCodeManager, HUPinCodeDetailsItemManager, NSMutableArray;
@protocol HUPinCodeDetailsViewDelegate, HUPresentationDelegate;

@interface HUPinCodeDetailsViewController : HUItemTableViewController <HUSwitchCellDelegate, HUPersonalPINCodeViewControllerDelegate, HFPinCodeManagerObserver, HUPresentationDelegateHost>

@property (weak, nonatomic) HUPinCodeDetailsItemManager *pinCodeItemManager;
@property (retain, nonatomic) NSString *editedPinCodeLabel;
@property (retain, nonatomic) NSString *editedPinCodeValue;
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager;
@property (nonatomic) BOOL creatingNewPinCode;
@property (nonatomic) BOOL isClosing;
@property (retain, nonatomic) NSArray *pinAccessories;
@property (retain, nonatomic) NSMutableArray *accessoriesToEdit;
@property (weak, nonatomic) id<HUPinCodeDetailsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)pinCodeManagerFetchDidComplete:(id)a0;
- (id)_allTextFields;
- (BOOL)_codeLabelHasChanged;
- (BOOL)_codeValueHasChanged;
- (void)_resignFirstResponderForAllTextFields;
- (void)_updateSaveEnabled;
- (id)_validatePinCodeLabel;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)commitAccessoryChanges;
- (id)commitNewPinCode;
- (id)commitPinCodeChanges;
- (id)initWithItem:(id)a0 pinCodeManager:(id)a1 home:(id)a2;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)itemManagerDidFinishUpdate:(id)a0;
- (void)personalPinCodeViewController:(id)a0 pinCodeDidChange:(id)a1;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
