@interface StocksUI.TextFieldValidator : NSObject <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ submit;
    void /* unknown type, empty encoding */ isTextValid;
    void /* unknown type, empty encoding */ setAllowSubmission;
}

- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
