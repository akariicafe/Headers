@class UITextInputPasswordRules, NSString, NSDictionary, UITextPosition, UIResponder, UITextRange, UIView;
@protocol UITextInputTokenizer, UITextInput, UITextInputDelegate;

@interface UITextInteractionSelectableInputDelegate : UIResponder <UITextInput> {
    UIResponder<UITextInput> *_textInput;
}

@property (readonly, nonatomic) UIResponder<UITextInput> *textInput;
@property (copy) UITextRange *selectedTextRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
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

+ (id)selectableInputDelegateWithTextInput:(id)a0;

- (id)positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)characterRangeByExtendingPosition:(id)a0 inDirection:(long long)a1;
- (id)_moveToEndOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (id)_moveUp:(BOOL)a0 withHistory:(id)a1;
- (id)_moveLeft:(BOOL)a0 withHistory:(id)a1;
- (id)_moveToStartOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(long long)a1;
- (id)_moveToEndOfLine:(BOOL)a0 withHistory:(id)a1;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_moveToStartOfWord:(BOOL)a0 withHistory:(id)a1;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (id)_moveDown:(BOOL)a0 withHistory:(id)a1;
- (id)_moveToEndOfDocument:(BOOL)a0 withHistory:(id)a1;
- (id)_moveToEndOfWord:(BOOL)a0 withHistory:(id)a1;
- (id)_moveToStartOfDocument:(BOOL)a0 withHistory:(id)a1;
- (id)selectionRectsForRange:(id)a0;
- (void)unmarkText;
- (id)_moveRight:(BOOL)a0 withHistory:(id)a1;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (void)_moveCurrentSelection:(int)a0;
- (void)_unmarkText;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (id)textInRange:(id)a0;
- (void)_setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBaseWritingDirection:(long long)a0 forRange:(id)a1;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (id)nextResponder;
- (void)_deleteForwardAndNotify:(BOOL)a0;
- (void)_deleteBackwardAndNotify:(BOOL)a0;
- (void)insertText:(id)a0;
- (id)_moveToStartOfLine:(BOOL)a0 withHistory:(id)a1;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)updateSelectionRects;

@end
