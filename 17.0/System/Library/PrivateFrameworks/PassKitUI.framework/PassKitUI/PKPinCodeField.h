@class UILabel, NSString, UITextInputPasswordRules, NSMutableString, NSArray, NSCharacterSet, UIImage;
@protocol PKPinCodeFieldDelegate;

@interface PKPinCodeField : UIView <UIKeyInput> {
    unsigned long long _pinCodeLength;
    NSCharacterSet *_numbersOnlyCharacterSet;
    NSMutableString *_pinCode;
    double _fontHeight;
    NSArray *_numberLabels;
    NSArray *_dashViews;
    NSArray *_dotViews;
    UIImage *_dotImage;
    UILabel *_hyphenLabel;
    BOOL _keyboardOverrideEnabled;
    unsigned long long _style;
    struct { double dashLength; double dashWidth; double hyphenOffset; } _config;
}

@property (nonatomic) BOOL hyphenatePinCode;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (weak, nonatomic) id<PKPinCodeFieldDelegate> delegate;
@property (copy, nonatomic) NSString *pinCode;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPinCodeLength:(unsigned long long)a0 delegate:(id)a1;
- (id)initWithPinCodeLength:(unsigned long long)a0 style:(unsigned long long)a1 delegate:(id)a2;
- (void)updateCharacterVisibility;

@end
