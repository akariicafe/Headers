@interface SBUIPasscodeTextField : UITextField {
    BOOL _previousResponderRequiresKeyboard;
}

@property (nonatomic) BOOL showsSystemKeyboard;

- (void)_handleKeyUIEvent:(id)a0;
- (void)dealloc;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_disableAutomaticAppearance;
- (void)_enableAutomaticAppearance;

@end
