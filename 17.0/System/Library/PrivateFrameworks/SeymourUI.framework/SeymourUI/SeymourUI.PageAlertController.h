@interface SeymourUI.PageAlertController : UIAlertController <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ presenter;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
