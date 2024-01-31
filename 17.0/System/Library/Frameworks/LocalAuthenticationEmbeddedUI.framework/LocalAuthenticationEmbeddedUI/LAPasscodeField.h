@class UIStackView, NSString, LAUITextField, UIView, UIImpactFeedbackGenerator;
@protocol LAPasscodeFieldDelegate;

@interface LAPasscodeField : UIViewController <UITextFieldDelegate> {
    UIStackView *_mainContainer;
    UIView *_passcodeFieldContainer;
    UIStackView *_passcodeFieldBackground;
    UIImpactFeedbackGenerator *_hapticGenerator;
}

@property (nonatomic) BOOL ignoreInputs;
@property (weak, nonatomic) LAUITextField *passcodeField;
@property (readonly, nonatomic) unsigned long long passcodeLength;
@property (readonly, nonatomic) BOOL hasAlphanumericPasscode;
@property (retain, nonatomic) NSString *placeholderText;
@property (weak, nonatomic) id<LAPasscodeFieldDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) BOOL canShowInLockScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_setup;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (BOOL)resignFirstResponder;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)submit;
- (BOOL)becomeFirstResponder;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)textField:(id)a0 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 suggestedActions:(id)a2;
- (void)textFieldDidChange:(id)a0;
- (long long)_alphanumericFieldTextAlignment;
- (id)_alphanumericFieldPlaceholder;
- (void)_notifyPasscodeFieldLengthChange;
- (void)_selectPasscodeField:(id)a0;
- (void)_updateDotPattern;
- (BOOL)_useDotPattern;
- (void)_verifyTextField:(id)a0;
- (void)setAcceptInputs:(BOOL)a0;
- (void)shakeWithCompletion:(id /* block */)a0;

@end
