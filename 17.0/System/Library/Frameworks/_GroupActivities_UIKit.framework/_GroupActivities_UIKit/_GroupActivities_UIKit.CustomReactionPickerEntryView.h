@class NSDictionary;
@protocol UITextInputTokenizer;

@interface _GroupActivities_UIKit.CustomReactionPickerEntryView : UIView <UITextInput, UITextInputTraits> {
    void /* unknown type, empty encoding */ onReaction;
    void /* unknown type, empty encoding */ markedTextStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tokenizer;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic) void /* unknown type, empty encoding */ keyboardType;
@property (nonatomic) void /* unknown type, empty encoding */ hasText;
@property (nonatomic, retain) void /* unknown type, empty encoding */ selectedTextRange;
@property (nonatomic, retain) void /* unknown type, empty encoding */ markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ beginningOfDocument;
@property (nonatomic, retain) void /* unknown type, empty encoding */ endOfDocument;
@property (nonatomic, retain) void /* unknown type, empty encoding */ inputDelegate;
@property (nonatomic, retain) id<UITextInputTokenizer> tokenizer;

- (id)positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)characterRangeByExtendingPosition:(id)a0 inDirection:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(long long)a1;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (id)selectionRectsForRange:(id)a0;
- (void)unmarkText;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (id)textInRange:(id)a0;
- (void)setBaseWritingDirection:(long long)a0 forRange:(id)a1;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertText:(id)a0;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;

@end
