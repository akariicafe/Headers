@class NSArray, NSMutableString, NSString, UITextInputPasswordRules;
@protocol OBPasscodeFieldDelegate;

@interface OBPasscodeField : UIStackView <UIKeyInput>

@property (nonatomic) unsigned long long numberOfEntryFields;
@property (retain, nonatomic) NSMutableString *value;
@property (retain, nonatomic) NSArray *dotViews;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *stringValue;
@property (weak, nonatomic) id<OBPasscodeFieldDelegate> delegate;
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
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void)_updateDots;
- (void)insertText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)deleteBackward;
- (BOOL)becomeFirstResponder;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_passcodeFieldTapped:(id)a0;
- (id)initWithNumberOfEntryFields:(unsigned long long)a0;

@end
