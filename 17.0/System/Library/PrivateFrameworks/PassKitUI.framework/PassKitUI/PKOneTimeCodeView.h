@class UITapGestureRecognizer, NSString, NSArray, PKOneTimeCodeDigitFieldView, UITextField, NSCharacterSet, PKIconTextLabel;
@protocol PKOneTimeCodeViewDelegate;

@interface PKOneTimeCodeView : UIView <UITextFieldDelegate> {
    id<PKOneTimeCodeViewDelegate> _delegate;
    NSString *_value;
    NSArray *_codeFields;
    PKOneTimeCodeDigitFieldView *_templateField;
    PKIconTextLabel *_entryErrorLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_constraints;
    UITextField *_invisibleTextField;
    NSCharacterSet *_nonNumericCharSet;
}

@property (readonly, nonatomic) double codeLength;
@property (nonatomic) double entrySpacing;
@property (nonatomic) BOOL disableEntry;
@property (nonatomic) unsigned long long entryError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLabels;
- (void)setBackgroundColor:(id)a0;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (BOOL)isFirstResponder;
- (BOOL)hasText;
- (BOOL)resignFirstResponder;
- (BOOL)isSecureTextEntry;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_passcodeFieldTapped:(id)a0;
- (id)_firstCodeField;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)clearCurrentCode;
- (id)currentCode;
- (id)initWithCodeLength:(long long)a0 delegate:(id)a1;

@end
