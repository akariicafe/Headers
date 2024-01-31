@class NSArray, NSMutableString, NSString, UITextInputPasswordRules, UITapGestureRecognizer;
@protocol MSDCodeEntryViewDelegate;

@interface MSDCodeEntryView : UIView <CAAnimationDelegate, UIKeyInput>

@property (retain, nonatomic) NSMutableString *stringValue;
@property (retain, nonatomic) NSArray *generatorFields;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) id<MSDCodeEntryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

+ (id)generatorFieldFont;

- (void)updateConstraints;
- (void)insertText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)deleteBackward;
- (id)initWithDelegate:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)_syncStringValueToLabels;
- (void)jiggleAView;
- (void)clearEntry;

@end
