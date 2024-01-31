@class NSString, UITextField, UIStepper;

@interface UIPrintCopiesOption : UIPrintOption <UITextFieldDelegate>

@property (retain, nonatomic) UIStepper *copiesStepper;
@property (retain, nonatomic) UITextField *copiesTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)dismissKeyboard;
- (void)textFieldDidEndEditing:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)textField:(id)a0 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 suggestedActions:(id)a2;
- (BOOL)keyboardShowing;
- (void)copiesStepperChanged:(id)a0;
- (void)copiesTextFieldDidChange;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;

@end
