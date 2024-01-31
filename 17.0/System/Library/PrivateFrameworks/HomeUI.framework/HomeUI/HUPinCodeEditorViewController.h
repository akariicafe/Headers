@class UIBarButtonItem, HFItem, UITextField, HFPinCodeManager, UILabel, NSString, HMHome;
@protocol HUPresentationDelegate;

@interface HUPinCodeEditorViewController : UIViewController <UITextFieldDelegate, HUPresentationDelegateHost>

@property (retain, nonatomic) HFItem *sourceItem;
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) UILabel *instructionHeader;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIBarButtonItem *saveButtonItem;
@property (retain, nonatomic) NSString *editedPinCode;
@property (copy, nonatomic) id /* block */ newPINCodeCompletionBlock;
@property (copy, nonatomic) id /* block */ updatedPINCodeCompletionBlock;
@property (nonatomic) long long codeLengthMin;
@property (nonatomic) long long codeLengthMax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)cancelButtonPressed:(id)a0;
- (void)_showSpinner;
- (void)_commonInitWithManager:(id)a0 home:(id)a1 initialPinCodeValue:(id)a2;
- (void)_hideSpinner;
- (void)_updateHeaderAndFooter;
- (id)checkForPINCodeValueValidationErrors;
- (id)commitPinCodeChange;
- (id)initForCreatingNewPinCodeWithManager:(id)a0 initialPinCodeValue:(id)a1 home:(id)a2 completionBlock:(id /* block */)a3;
- (id)initForEditingPinCodeWithItem:(id)a0 pinCodeManager:(id)a1 pinCodeValue:(id)a2 home:(id)a3 completionBlock:(id /* block */)a4;
- (void)saveButtonPressed:(id)a0;

@end
