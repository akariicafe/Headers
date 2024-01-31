@protocol OBPasscodeInputViewDelegate;

@interface OBPasscodeInputView : UIView

@property (weak, nonatomic) id<OBPasscodeInputViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (id)passcode;
- (void)setPasscode:(id)a0;
- (id)passcodeField;
- (void)shake;

@end
