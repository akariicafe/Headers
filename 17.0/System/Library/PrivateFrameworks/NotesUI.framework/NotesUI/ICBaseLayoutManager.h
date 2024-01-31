@class NSDictionary, UITextView;

@interface ICBaseLayoutManager : NSLayoutManager

@property (class, readonly, nonatomic) NSDictionary *defaultLinkTextAttributes;

@property (weak, nonatomic) UITextView *textView;

- (id)textContainer;
- (void).cxx_destruct;
- (double)bulletYOffsetForCharacterAtIndex:(unsigned long long)a0;
- (void)drawBulletsForListRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphStyle:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)drawListStylesForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)textController;

@end
