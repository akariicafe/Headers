@interface SwiftUI.PlatformTextFieldCoordinator : SwiftUI.PlatformViewCoordinator <UITextFieldDelegate, UITextViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ isViewUpdating;
    void /* unknown type, empty encoding */ field;
    void /* unknown type, empty encoding */ ignoreNextUpdate;
    void /* unknown type, empty encoding */ isUserEditing;
}

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textChanged:(id)a0;
- (id)init;
- (void)primaryActionTriggered:(id)a0;
- (void).cxx_destruct;

@end
